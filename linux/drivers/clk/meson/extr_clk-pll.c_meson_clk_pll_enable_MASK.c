
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int rst; int en; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 struct meson_clk_pll_data* FUNC_1 (struct clk_regmap*) ;
 scalar_t__ FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ,int *,int) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_4(VAR_1);
 struct meson_clk_pll_data *VAR_3 = FUNC_1(VAR_2);


 if (FUNC_0(VAR_1))
  return 0;


 FUNC_3(VAR_2->map, &VAR_3->rst, 1);


 FUNC_3(VAR_2->map, &VAR_3->en, 1);


 FUNC_3(VAR_2->map, &VAR_3->rst, 0);

 if (FUNC_2(VAR_1))
  return -VAR_0;

 return 0;
}
