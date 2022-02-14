
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct pll_config {int aux_output_mask; int main_output_mask; int mn_ena_mask; int post_div_mask; int pre_div_mask; int vco_mask; int post_div_val; int pre_div_val; int vco_val; int n; int m; int l; } ;
struct clk_pll {int config_reg; int n_reg; int m_reg; int l_reg; } ;


 int FUNC_0 (struct regmap*,int ,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clk_pll *VAR_0, struct regmap *VAR_1,
 const struct pll_config *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 FUNC_1(VAR_1, VAR_0->l_reg, VAR_2->l);
 FUNC_1(VAR_1, VAR_0->m_reg, VAR_2->m);
 FUNC_1(VAR_1, VAR_0->n_reg, VAR_2->n);

 VAR_3 = VAR_2->vco_val;
 VAR_3 |= VAR_2->pre_div_val;
 VAR_3 |= VAR_2->post_div_val;
 VAR_3 |= VAR_2->mn_ena_mask;
 VAR_3 |= VAR_2->main_output_mask;
 VAR_3 |= VAR_2->aux_output_mask;

 VAR_4 = VAR_2->vco_mask;
 VAR_4 |= VAR_2->pre_div_mask;
 VAR_4 |= VAR_2->post_div_mask;
 VAR_4 |= VAR_2->mn_ena_mask;
 VAR_4 |= VAR_2->main_output_mask;
 VAR_4 |= VAR_2->aux_output_mask;

 FUNC_0(VAR_1, VAR_0->config_reg, VAR_4, VAR_3);
}
