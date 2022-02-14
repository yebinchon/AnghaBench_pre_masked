
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dpll_hw_state {int mg_refclkin_ctl; int mg_clktop2_coreclkctl1; int mg_clktop2_hsclkctl; int mg_pll_div0; int mg_pll_div1; int mg_pll_lf; int mg_pll_frac_lock; int mg_pll_ssc; int mg_pll_bias_mask; int mg_pll_bias; int mg_pll_tdc_coldst_bias_mask; int mg_pll_tdc_coldst_bias; } ;
struct TYPE_3__ {struct intel_dpll_hw_state hw_state; } ;
struct intel_shared_dpll {TYPE_2__* info; TYPE_1__ state; } ;
struct drm_i915_private {int dummy; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct drm_i915_private *VAR_6,
        struct intel_shared_dpll *VAR_7)
{
 struct intel_dpll_hw_state *VAR_8 = &VAR_7->state.hw_state;
 enum tc_port VAR_9 = FUNC_13(VAR_7->info->id);
 u32 VAR_10;







 VAR_10 = FUNC_0(FUNC_11(VAR_9));
 VAR_10 &= ~VAR_5;
 VAR_10 |= VAR_8->mg_refclkin_ctl;
 FUNC_1(FUNC_11(VAR_9), VAR_10);

 VAR_10 = FUNC_0(FUNC_2(VAR_9));
 VAR_10 &= ~VAR_0;
 VAR_10 |= VAR_8->mg_clktop2_coreclkctl1;
 FUNC_1(FUNC_2(VAR_9), VAR_10);

 VAR_10 = FUNC_0(FUNC_3(VAR_9));
 VAR_10 &= ~(VAR_4 |
   VAR_1 |
   VAR_3 |
   VAR_2);
 VAR_10 |= VAR_8->mg_clktop2_hsclkctl;
 FUNC_1(FUNC_3(VAR_9), VAR_10);

 FUNC_1(FUNC_5(VAR_9), VAR_8->mg_pll_div0);
 FUNC_1(FUNC_6(VAR_9), VAR_8->mg_pll_div1);
 FUNC_1(FUNC_8(VAR_9), VAR_8->mg_pll_lf);
 FUNC_1(FUNC_7(VAR_9), VAR_8->mg_pll_frac_lock);
 FUNC_1(FUNC_9(VAR_9), VAR_8->mg_pll_ssc);

 VAR_10 = FUNC_0(FUNC_4(VAR_9));
 VAR_10 &= ~VAR_8->mg_pll_bias_mask;
 VAR_10 |= VAR_8->mg_pll_bias;
 FUNC_1(FUNC_4(VAR_9), VAR_10);

 VAR_10 = FUNC_0(FUNC_10(VAR_9));
 VAR_10 &= ~VAR_8->mg_pll_tdc_coldst_bias_mask;
 VAR_10 |= VAR_8->mg_pll_tdc_coldst_bias;
 FUNC_1(FUNC_10(VAR_9), VAR_10);

 FUNC_12(FUNC_10(VAR_9));
}
