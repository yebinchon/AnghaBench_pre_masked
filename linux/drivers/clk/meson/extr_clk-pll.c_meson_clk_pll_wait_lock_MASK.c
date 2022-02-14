
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int l; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct meson_clk_pll_data* FUNC_0 (struct clk_regmap*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_2(VAR_1);
 struct meson_clk_pll_data *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 24000000;

 do {

  if (FUNC_1(VAR_2->map, &VAR_3->l))
   return 0;

  VAR_4--;
 } while (VAR_4 > 0);

 return -VAR_0;
}
