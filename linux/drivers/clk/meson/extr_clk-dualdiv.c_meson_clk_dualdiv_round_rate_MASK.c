
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_dualdiv_param {int dummy; } ;
struct meson_clk_dualdiv_data {int dummy; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_dualdiv_param* FUNC_0 (unsigned long,unsigned long,struct meson_clk_dualdiv_data*) ;
 long FUNC_1 (unsigned long,struct meson_clk_dualdiv_param const*) ;
 struct meson_clk_dualdiv_data* FUNC_2 (struct clk_regmap*) ;
 long FUNC_3 (struct clk_hw*,unsigned long) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_4(VAR_0);
 struct meson_clk_dualdiv_data *VAR_4 = FUNC_2(VAR_3);
 const struct meson_clk_dualdiv_param *VAR_5 =
  FUNC_0(VAR_1, *VAR_2, VAR_4);

 if (!VAR_5)
  return FUNC_3(VAR_0, *VAR_2);

 return FUNC_1(*VAR_2, VAR_5);
}
