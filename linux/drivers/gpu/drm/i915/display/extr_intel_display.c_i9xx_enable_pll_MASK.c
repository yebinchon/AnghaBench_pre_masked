
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dpll; int dpll_md; } ;
struct intel_crtc_state {TYPE_1__ dpll_hw_state; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_1,
       const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_8(VAR_1->base.dev);
 i915_reg_t VAR_4 = FUNC_0(VAR_1->pipe);
 u32 VAR_5 = VAR_2->dpll_hw_state.dpll;
 int VAR_6;

 FUNC_6(VAR_3, VAR_1->pipe);


 if (FUNC_7(VAR_3))
  FUNC_5(VAR_3, VAR_1->pipe);






 FUNC_2(VAR_4, VAR_5 & ~VAR_0);
 FUNC_2(VAR_4, VAR_5);


 FUNC_4(VAR_4);
 FUNC_9(150);

 if (FUNC_3(VAR_3) >= 4) {
  FUNC_2(FUNC_1(VAR_1->pipe),
      VAR_2->dpll_hw_state.dpll_md);
 } else {





  FUNC_2(VAR_4, VAR_5);
 }


 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  FUNC_2(VAR_4, VAR_5);
  FUNC_4(VAR_4);
  FUNC_9(150);
 }
}
