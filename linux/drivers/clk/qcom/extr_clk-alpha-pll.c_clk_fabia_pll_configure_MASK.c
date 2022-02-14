
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct clk_alpha_pll {int dummy; } ;
struct alpha_pll_config {scalar_t__ post_div_val; scalar_t__ post_div_mask; scalar_t__ config_ctl_val; scalar_t__ alpha; scalar_t__ l; } ;


 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct clk_alpha_pll*) ;
 int FUNC_5 (struct regmap*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct regmap*,int ,scalar_t__) ;

void FUNC_7(struct clk_alpha_pll *VAR_2, struct regmap *VAR_3,
        const struct alpha_pll_config *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (VAR_4->l)
  FUNC_6(VAR_3, FUNC_2(VAR_2), VAR_4->l);

 if (VAR_4->alpha)
  FUNC_6(VAR_3, FUNC_1(VAR_2), VAR_4->alpha);

 if (VAR_4->config_ctl_val)
  FUNC_6(VAR_3, FUNC_0(VAR_2),
      VAR_4->config_ctl_val);

 if (VAR_4->post_div_mask) {
  VAR_6 = VAR_4->post_div_mask;
  VAR_5 = VAR_4->post_div_val;
  FUNC_5(VAR_3, FUNC_4(VAR_2), VAR_6, VAR_5);
 }

 FUNC_5(VAR_3, FUNC_3(VAR_2), VAR_1,
       VAR_1);

 FUNC_5(VAR_3, FUNC_3(VAR_2), VAR_0, VAR_0);
}
