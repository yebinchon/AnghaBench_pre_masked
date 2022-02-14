
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {scalar_t__ crtc_x; scalar_t__ crtc_y; scalar_t__ crtc_w; scalar_t__ crtc_h; } ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;



__attribute__((used)) static bool FUNC_0(struct drm_crtc_state *VAR_0,
  struct drm_plane_state *VAR_1)
{
 return (VAR_1->crtc_x <= 0) && (VAR_1->crtc_y <= 0) &&
  ((VAR_1->crtc_x + VAR_1->crtc_w) >= VAR_0->mode.hdisplay) &&
  ((VAR_1->crtc_y + VAR_1->crtc_h) >= VAR_0->mode.vdisplay);
}
