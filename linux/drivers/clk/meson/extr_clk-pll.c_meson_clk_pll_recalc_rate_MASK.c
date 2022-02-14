
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int frac; int m; int n; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned long FUNC_1 (unsigned long,unsigned int,unsigned int,unsigned int,struct meson_clk_pll_data*) ;
 struct meson_clk_pll_data* FUNC_2 (struct clk_regmap*) ;
 unsigned int FUNC_3 (int ,int *) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_4(VAR_0);
 struct meson_clk_pll_data *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_2->map, &VAR_3->n);
 VAR_4 = FUNC_3(VAR_2->map, &VAR_3->m);

 VAR_6 = FUNC_0(&VAR_3->frac) ?
  FUNC_3(VAR_2->map, &VAR_3->frac) :
  0;

 return FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6, VAR_3);
}
