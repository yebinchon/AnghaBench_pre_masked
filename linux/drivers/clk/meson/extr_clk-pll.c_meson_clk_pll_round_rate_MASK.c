
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int frac; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 long FUNC_1 (unsigned long,unsigned int,unsigned int,unsigned int,struct meson_clk_pll_data*) ;
 unsigned int FUNC_2 (unsigned long,unsigned long,unsigned int,unsigned int,struct meson_clk_pll_data*) ;
 int FUNC_3 (unsigned long,unsigned long,unsigned int*,unsigned int*,struct meson_clk_pll_data*) ;
 struct meson_clk_pll_data* FUNC_4 (struct clk_regmap*) ;
 long FUNC_5 (struct clk_hw*,unsigned long) ;
 struct clk_regmap* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_7(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_6(VAR_0);
 struct meson_clk_pll_data *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_1, *VAR_2, &VAR_5, &VAR_6, VAR_4);
 if (VAR_9)
  return FUNC_5(VAR_0, *VAR_2);

 VAR_8 = FUNC_1(*VAR_2, VAR_5, VAR_6, 0, VAR_4);

 if (!FUNC_0(&VAR_4->frac) || VAR_1 == VAR_8)
  return VAR_8;





 VAR_7 = FUNC_2(VAR_1, *VAR_2, VAR_5, VAR_6, VAR_4);

 return FUNC_1(*VAR_2, VAR_5, VAR_6, VAR_7, VAR_4);
}
