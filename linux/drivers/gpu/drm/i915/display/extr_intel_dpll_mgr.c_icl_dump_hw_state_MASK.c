
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dpll_hw_state {int mg_pll_tdc_coldst_bias; int mg_pll_bias; int mg_pll_ssc; int mg_pll_frac_lock; int mg_pll_lf; int mg_pll_div1; int mg_pll_div0; int mg_clktop2_hsclkctl; int mg_clktop2_coreclkctl1; int mg_refclkin_ctl; int cfgcr1; int cfgcr0; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
         const struct intel_dpll_hw_state *VAR_1)
{
 FUNC_0("dpll_hw_state: cfgcr0: 0x%x, cfgcr1: 0x%x, "
        "mg_refclkin_ctl: 0x%x, hg_clktop2_coreclkctl1: 0x%x, "
        "mg_clktop2_hsclkctl: 0x%x, mg_pll_div0: 0x%x, "
        "mg_pll_div2: 0x%x, mg_pll_lf: 0x%x, "
        "mg_pll_frac_lock: 0x%x, mg_pll_ssc: 0x%x, "
        "mg_pll_bias: 0x%x, mg_pll_tdc_coldst_bias: 0x%x\n",
        VAR_1->cfgcr0, VAR_1->cfgcr1,
        VAR_1->mg_refclkin_ctl,
        VAR_1->mg_clktop2_coreclkctl1,
        VAR_1->mg_clktop2_hsclkctl,
        VAR_1->mg_pll_div0,
        VAR_1->mg_pll_div1,
        VAR_1->mg_pll_lf,
        VAR_1->mg_pll_frac_lock,
        VAR_1->mg_pll_ssc,
        VAR_1->mg_pll_bias,
        VAR_1->mg_pll_tdc_coldst_bias);
}
