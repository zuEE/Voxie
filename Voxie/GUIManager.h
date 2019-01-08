#ifndef GUI_MANAGER_H
#define GUI_MANAGER_H

#include "Global.h"

#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"

namespace Voxie {
	class GUIManager {
	public:
		GUIManager();
		bool init(GLFWwindow* window);
		bool setup(GLFWwindow* window);
		void cleanup();
		void render();
	private:
		void showDebugInfo(bool open);
		void showArrowPanel(bool open, float viewY);
		void showActionBar(bool open, ImVec2 windowPos, ImVec2& size);
		void showToolBar(bool open, ImVec2 windowPos, ImVec2& size);
	};
}

#endif