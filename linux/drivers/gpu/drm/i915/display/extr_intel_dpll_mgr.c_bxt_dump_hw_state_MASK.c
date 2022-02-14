
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dpll_hw_state {int pcsdw12; int pll10; int pll9; int pll8; int pll6; int pll3; int pll2; int pll1; int pll0; int ebb4; int ebb0; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
         const struct intel_dpll_hw_state *VAR_1)
{
 FUNC_0("dpll_hw_state: ebb0: 0x%x, ebb4: 0x%x,"
        "pll0: 0x%x, pll1: 0x%x, pll2: 0x%x, pll3: 0x%x, "
        "pll6: 0x%x, pll8: 0x%x, pll9: 0x%x, pll10: 0x%x, pcsdw12: 0x%x\n",
        VAR_1->ebb0,
        VAR_1->ebb4,
        VAR_1->pll0,
        VAR_1->pll1,
        VAR_1->pll2,
        VAR_1->pll3,
        VAR_1->pll6,
        VAR_1->pll8,
        VAR_1->pll9,
        VAR_1->pll10,
        VAR_1->pcsdw12);
}
