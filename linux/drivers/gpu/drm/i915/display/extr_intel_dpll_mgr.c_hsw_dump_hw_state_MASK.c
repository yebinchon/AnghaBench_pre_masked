
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dpll_hw_state {int spll; int wrpll; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
         const struct intel_dpll_hw_state *VAR_1)
{
 FUNC_0("dpll_hw_state: wrpll: 0x%x spll: 0x%x\n",
        VAR_1->wrpll, VAR_1->spll);
}
