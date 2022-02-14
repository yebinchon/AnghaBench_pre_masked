
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_plane_state {int src_x; int src_y; int src_w; int src_h; int crtc_x; int crtc_y; scalar_t__ crtc_w; scalar_t__ crtc_h; int state; struct drm_crtc* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {scalar_t__ width; scalar_t__ height; TYPE_1__* format; } ;
struct TYPE_4__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_2__ adjusted_mode; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {int format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct drm_crtc_state* FUNC_3 (int ,struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_2,
      struct drm_plane_state *VAR_3)
{
 struct drm_framebuffer *VAR_4 = VAR_3->fb;
 struct drm_crtc *VAR_5 = VAR_3->crtc;
 struct drm_crtc_state *VAR_6;
 u32 VAR_7 = VAR_3->src_x >> 16;
 u32 VAR_8 = VAR_3->src_y >> 16;
 u32 VAR_9 = VAR_3->src_w >> 16;
 u32 VAR_10 = VAR_3->src_h >> 16;
 int VAR_11 = VAR_3->crtc_x;
 int VAR_12 = VAR_3->crtc_y;
 u32 VAR_13 = VAR_3->crtc_w;
 u32 VAR_14 = VAR_3->crtc_h;
 u32 VAR_15;

 if (!VAR_5 || !VAR_4)
  return 0;

 VAR_15 = FUNC_2(VAR_4->format->format);
 if (VAR_15 == VAR_0)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3->state, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (VAR_9 != VAR_13 || VAR_10 != VAR_14) {
  return -VAR_1;
 }

 if (VAR_7 + VAR_9 > VAR_4->width ||
     VAR_8 + VAR_10 > VAR_4->height)
  return -VAR_1;

 if (VAR_11 < 0 || VAR_12 < 0)
  return -VAR_1;

 if (VAR_11 + VAR_13 > VAR_6->adjusted_mode.hdisplay ||
     VAR_12 + VAR_14 > VAR_6->adjusted_mode.vdisplay)
  return -VAR_1;

 return 0;
}
