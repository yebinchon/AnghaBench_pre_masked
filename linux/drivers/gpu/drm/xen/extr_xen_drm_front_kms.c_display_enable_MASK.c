
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_drm_pipeline {int conn_connected; } ;
struct drm_crtc {int y; int x; int dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {TYPE_1__* format; int height; int width; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int* cpp; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 struct xen_drm_front_drm_pipeline* FUNC_3 (struct drm_simple_display_pipe*) ;
 int FUNC_4 (struct drm_framebuffer*) ;
 int FUNC_5 (struct xen_drm_front_drm_pipeline*,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_simple_display_pipe *VAR_0,
      struct drm_crtc_state *VAR_1,
      struct drm_plane_state *VAR_2)
{
 struct xen_drm_front_drm_pipeline *VAR_3 =
   FUNC_3(VAR_0);
 struct drm_crtc *VAR_4 = &VAR_0->crtc;
 struct drm_framebuffer *VAR_5 = VAR_2->fb;
 int VAR_6, VAR_7;

 if (!FUNC_1(VAR_0->crtc.dev, &VAR_7))
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_4->x, VAR_4->y,
         VAR_5->width, VAR_5->height,
         VAR_5->format->cpp[0] * 8,
         FUNC_4(VAR_5));

 if (VAR_6) {
  FUNC_0("Failed to enable display: %d\n", VAR_6);
  VAR_3->conn_connected = 0;
 }

 FUNC_2(VAR_7);
}
