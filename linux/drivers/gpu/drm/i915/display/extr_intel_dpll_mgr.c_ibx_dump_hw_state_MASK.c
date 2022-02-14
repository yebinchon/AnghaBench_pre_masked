
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dpll_hw_state {int fp1; int fp0; int dpll_md; int dpll; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
         const struct intel_dpll_hw_state *VAR_1)
{
 FUNC_0("dpll_hw_state: dpll: 0x%x, dpll_md: 0x%x, "
        "fp0: 0x%x, fp1: 0x%x\n",
        VAR_1->dpll,
        VAR_1->dpll_md,
        VAR_1->fp0,
        VAR_1->fp1);
}
