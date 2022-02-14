
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_dualdiv_param {void* m2; void* n2; void* m1; void* n1; void* dual; } ;
struct meson_clk_dualdiv_data {int m2; int n2; int m1; int n1; int dual; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,struct meson_clk_dualdiv_param*) ;
 struct meson_clk_dualdiv_data* FUNC_1 (struct clk_regmap*) ;
 void* FUNC_2 (int ,int *) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct meson_clk_dualdiv_data *VAR_3 = FUNC_1(VAR_2);
 struct meson_clk_dualdiv_param VAR_4;

 VAR_4.dual = FUNC_2(VAR_2->map, &VAR_3->dual);
 VAR_4.n1 = FUNC_2(VAR_2->map, &VAR_3->n1) + 1;
 VAR_4.m1 = FUNC_2(VAR_2->map, &VAR_3->m1) + 1;
 VAR_4.n2 = FUNC_2(VAR_2->map, &VAR_3->n2) + 1;
 VAR_4.m2 = FUNC_2(VAR_2->map, &VAR_3->m2) + 1;

 return FUNC_0(VAR_1, &VAR_4);
}
