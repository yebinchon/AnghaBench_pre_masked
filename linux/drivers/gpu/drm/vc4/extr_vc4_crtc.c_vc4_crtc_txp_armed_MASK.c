
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_crtc_state {int txp_armed; } ;
struct drm_crtc_state {int dummy; } ;


 struct vc4_crtc_state* FUNC_0 (struct drm_crtc_state*) ;

void FUNC_1(struct drm_crtc_state *VAR_0)
{
 struct vc4_crtc_state *VAR_1 = FUNC_0(VAR_0);

 VAR_1->txp_armed = 1;
}
