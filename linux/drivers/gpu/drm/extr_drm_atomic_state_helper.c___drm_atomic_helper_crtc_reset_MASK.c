
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {struct drm_crtc* crtc; } ;
struct drm_crtc {struct drm_crtc_state* state; } ;



void
FUNC_0(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 if (VAR_1)
  VAR_1->crtc = VAR_0;

 VAR_0->state = VAR_1;
}
