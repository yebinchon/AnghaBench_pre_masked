
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {int dummy; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct meson_sclk_div_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (struct clk_regmap*,struct meson_sclk_div_data*) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_2(VAR_0);
 struct meson_sclk_div_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_2);

 return 0;
}
