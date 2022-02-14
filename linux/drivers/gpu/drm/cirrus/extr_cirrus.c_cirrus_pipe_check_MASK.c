
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_simple_display_pipe {int dummy; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_crtc_state {int dummy; } ;


 int FUNC_0 (int ,int ,struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_1(struct drm_simple_display_pipe *VAR_0,
        struct drm_plane_state *VAR_1,
        struct drm_crtc_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_1->fb;

 if (!VAR_3)
  return 0;
 return FUNC_0(VAR_3->width, VAR_3->height, VAR_3);
}
