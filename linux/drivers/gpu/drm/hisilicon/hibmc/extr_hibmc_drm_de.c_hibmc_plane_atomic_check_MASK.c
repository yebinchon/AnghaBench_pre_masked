
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_plane_state {int src_w; int src_h; scalar_t__ crtc_w; scalar_t__ crtc_h; scalar_t__ crtc_x; scalar_t__ crtc_y; int state; struct drm_crtc* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_1__ adjusted_mode; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_3 (int ,struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_1,
        struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;
 struct drm_crtc *VAR_4 = VAR_2->crtc;
 struct drm_crtc_state *VAR_5;
 u32 VAR_6 = VAR_2->src_w >> 16;
 u32 VAR_7 = VAR_2->src_h >> 16;

 if (!VAR_4 || !VAR_3)
  return 0;

 VAR_5 = FUNC_3(VAR_2->state, VAR_4);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 if (VAR_6 != VAR_2->crtc_w || VAR_7 != VAR_2->crtc_h) {
  FUNC_0("scale not support\n");
  return -VAR_0;
 }

 if (VAR_2->crtc_x < 0 || VAR_2->crtc_y < 0) {
  FUNC_0("crtc_x/y of drm_plane state is invalid\n");
  return -VAR_0;
 }

 if (VAR_2->crtc_x + VAR_2->crtc_w >
     VAR_5->adjusted_mode.hdisplay ||
     VAR_2->crtc_y + VAR_2->crtc_h >
     VAR_5->adjusted_mode.vdisplay) {
  FUNC_0("visible portion of plane is invalid\n");
  return -VAR_0;
 }

 return 0;
}
