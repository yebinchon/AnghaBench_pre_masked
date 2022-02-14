
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int base; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct intel_crtc_state* FUNC_0 (struct drm_crtc_state*) ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,int *) ;
 struct intel_crtc_state* FUNC_3 (struct drm_crtc_state*) ;

struct intel_crtc_state *
FUNC_4(struct drm_atomic_state *VAR_0,
       struct intel_crtc *VAR_1)
{
 struct drm_crtc_state *VAR_2;
 VAR_2 = FUNC_2(VAR_0, &VAR_1->base);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 return FUNC_3(VAR_2);
}
