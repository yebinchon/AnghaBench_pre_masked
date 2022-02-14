
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {void* fp1; void* fp0; } ;
struct dpll {int dummy; } ;
struct intel_crtc_state {TYPE_1__ dpll_hw_state; struct dpll dpll; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 void* FUNC_1 (struct dpll*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*,int ) ;
 void* FUNC_3 (struct dpll*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc *VAR_1,
         struct intel_crtc_state *VAR_2,
         struct dpll *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_1->base.dev);
 u32 VAR_5, VAR_6 = 0;

 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_3(&VAR_2->dpll);
  if (VAR_3)
   VAR_6 = FUNC_3(VAR_3);
 } else {
  VAR_5 = FUNC_1(&VAR_2->dpll);
  if (VAR_3)
   VAR_6 = FUNC_1(VAR_3);
 }

 VAR_2->dpll_hw_state.fp0 = VAR_5;

 if (FUNC_2(VAR_2, VAR_0) &&
     VAR_3) {
  VAR_2->dpll_hw_state.fp1 = VAR_6;
 } else {
  VAR_2->dpll_hw_state.fp1 = VAR_5;
 }
}
