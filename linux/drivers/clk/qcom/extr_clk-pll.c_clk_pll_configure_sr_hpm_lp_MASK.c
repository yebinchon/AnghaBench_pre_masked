
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pll_config {int dummy; } ;
struct clk_pll {int mode_reg; } ;


 int FUNC_0 (struct clk_pll*,struct regmap*,struct pll_config const*) ;
 int FUNC_1 (struct regmap*,int ,int,int ) ;

void FUNC_2(struct clk_pll *VAR_0, struct regmap *VAR_1,
  const struct pll_config *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_1, VAR_0->mode_reg, 1, 0);
}
