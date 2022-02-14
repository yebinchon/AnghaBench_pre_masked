
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {int cached_duty; int hi; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk_duty {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct clk_duty*,int) ;
 struct meson_sclk_div_data* FUNC_2 (struct clk_regmap*) ;
 int FUNC_3 (struct clk_regmap*,struct meson_sclk_div_data*) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0,
       struct clk_duty *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_4(VAR_0);
 struct meson_sclk_div_data *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(&VAR_3->hi)) {
  FUNC_1(&VAR_3->cached_duty, VAR_1, sizeof(*VAR_1));
  FUNC_3(VAR_2, VAR_3);
 }

 return 0;
}
