
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {int div; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 struct meson_sclk_div_data* FUNC_1 (struct clk_regmap*) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_2(VAR_0);
 struct meson_sclk_div_data *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_1->map, &VAR_2->div))
  return 1;

 return 0;
}
