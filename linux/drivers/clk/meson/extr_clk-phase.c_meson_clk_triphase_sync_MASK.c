
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_triphase_data {int ph2; int ph1; int ph0; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_triphase_data* FUNC_0 (struct clk_regmap*) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_3(VAR_0);
 struct meson_clk_triphase_data *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;


 VAR_3 = FUNC_1(VAR_1->map, &VAR_2->ph0);
 FUNC_2(VAR_1->map, &VAR_2->ph1, VAR_3);
 FUNC_2(VAR_1->map, &VAR_2->ph2, VAR_3);
}
