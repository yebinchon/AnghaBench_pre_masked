
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {int cached_div; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk_hw*) ;
 struct meson_sclk_div_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (struct clk_regmap*,struct meson_sclk_div_data*) ;
 int FUNC_3 (struct clk_hw*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct meson_sclk_div_data*) ;
 struct clk_regmap* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_5(VAR_0);
 struct meson_sclk_div_data *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5 = FUNC_4(VAR_4);

 VAR_4->cached_div = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_3, VAR_4);

 return 0;
}
