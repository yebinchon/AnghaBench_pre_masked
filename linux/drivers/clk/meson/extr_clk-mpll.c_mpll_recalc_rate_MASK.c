
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_mpll_data {int n2; int sdm; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_mpll_data* FUNC_0 (struct clk_regmap*) ;
 unsigned int FUNC_1 (int ,int *) ;
 long FUNC_2 (unsigned long,unsigned int,unsigned int) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct meson_clk_mpll_data *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4, VAR_5;
 long VAR_6;

 VAR_4 = FUNC_1(VAR_2->map, &VAR_3->sdm);
 VAR_5 = FUNC_1(VAR_2->map, &VAR_3->n2);

 VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
 return VAR_6 < 0 ? 0 : VAR_6;
}
