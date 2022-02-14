
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int en; int rst; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_pll_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (int ,int *,int) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_2(VAR_0);
 struct meson_clk_pll_data *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_1->map, &VAR_2->rst, 1);


 FUNC_1(VAR_1->map, &VAR_2->en, 0);
}
