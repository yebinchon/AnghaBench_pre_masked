
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpll {int dummy; } ;
struct TYPE_2__ {int * crtc; } ;
struct intel_crtc_state {int pixel_multiplier; struct dpll dpll; TYPE_1__ base; } ;
struct intel_crtc {int base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_crtc*,struct intel_crtc_state*) ;
 struct intel_crtc* FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_6 (int,int ) ;
 int FUNC_7 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc*,struct intel_crtc_state*) ;

int FUNC_10(struct drm_i915_private *VAR_2, enum pipe VAR_3,
       const struct dpll *VAR_4)
{
 struct intel_crtc *VAR_5 = FUNC_4(VAR_2, VAR_3);
 struct intel_crtc_state *VAR_6;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base.crtc = &VAR_5->base;
 VAR_6->pixel_multiplier = 1;
 VAR_6->dpll = *VAR_4;

 if (FUNC_0(VAR_2)) {
  FUNC_1(VAR_5, VAR_6);
  FUNC_3(VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_6);
 } else {
  FUNC_7(VAR_5, VAR_6);
  FUNC_9(VAR_5, VAR_6);
  FUNC_8(VAR_5, VAR_6);
 }

 FUNC_5(VAR_6);

 return 0;
}
