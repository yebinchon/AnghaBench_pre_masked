
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int rst; scalar_t__ init_count; int init_regs; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_pll_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_3(VAR_0);
 struct meson_clk_pll_data *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->init_count) {
  FUNC_1(VAR_1->map, &VAR_2->rst, 1);
  FUNC_2(VAR_1->map, VAR_2->init_regs,
           VAR_2->init_count);
  FUNC_1(VAR_1->map, &VAR_2->rst, 0);
 }
}
