
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_alpha_pll {int flags; } ;
struct alpha_pll_config {int vco_mask; int post_div_mask; int pre_div_mask; int early_output_mask; int aux2_output_mask; int aux_output_mask; int main_output_mask; int alpha_mode_mask; int alpha_en_mask; int vco_val; int post_div_val; int pre_div_val; int alpha_hi; int config_ctl_hi_val; int config_ctl_val; int alpha; int l; } ;


 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 int FUNC_4 (struct clk_alpha_pll*) ;
 int FUNC_5 (struct clk_alpha_pll*) ;
 int FUNC_6 (struct clk_alpha_pll*) ;
 int VAR_0 ;
 int FUNC_7 (struct clk_alpha_pll*) ;
 scalar_t__ FUNC_8 (struct clk_alpha_pll*) ;
 int FUNC_9 (struct regmap*,int ,int,int ) ;
 int FUNC_10 (struct regmap*,int ,int ,int ) ;
 int FUNC_11 (struct regmap*,int ,int ) ;

void FUNC_12(struct clk_alpha_pll *VAR_1, struct regmap *VAR_2,
        const struct alpha_pll_config *VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_11(VAR_2, FUNC_4(VAR_1), VAR_3->l);
 FUNC_11(VAR_2, FUNC_0(VAR_1), VAR_3->alpha);
 FUNC_11(VAR_2, FUNC_2(VAR_1), VAR_3->config_ctl_val);

 if (FUNC_8(VAR_1))
  FUNC_11(VAR_2, FUNC_3(VAR_1),
        VAR_3->config_ctl_hi_val);

 if (FUNC_7(VAR_1) > 32)
  FUNC_11(VAR_2, FUNC_1(VAR_1), VAR_3->alpha_hi);

 VAR_4 = VAR_3->main_output_mask;
 VAR_4 |= VAR_3->aux_output_mask;
 VAR_4 |= VAR_3->aux2_output_mask;
 VAR_4 |= VAR_3->early_output_mask;
 VAR_4 |= VAR_3->pre_div_val;
 VAR_4 |= VAR_3->post_div_val;
 VAR_4 |= VAR_3->vco_val;
 VAR_4 |= VAR_3->alpha_en_mask;
 VAR_4 |= VAR_3->alpha_mode_mask;

 VAR_5 = VAR_3->main_output_mask;
 VAR_5 |= VAR_3->aux_output_mask;
 VAR_5 |= VAR_3->aux2_output_mask;
 VAR_5 |= VAR_3->early_output_mask;
 VAR_5 |= VAR_3->pre_div_mask;
 VAR_5 |= VAR_3->post_div_mask;
 VAR_5 |= VAR_3->vco_mask;

 FUNC_10(VAR_2, FUNC_6(VAR_1), VAR_5, VAR_4);

 if (VAR_1->flags & VAR_0)
  FUNC_9(VAR_2, FUNC_5(VAR_1), 6, 0);
}
