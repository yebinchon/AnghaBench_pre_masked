
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {scalar_t__ cached_div; int div; int hi; } ;
struct clk_regmap {int map; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (struct clk_regmap*,struct meson_sclk_div_data*) ;

__attribute__((used)) static void FUNC_3(struct clk_regmap *VAR_0,
          struct meson_sclk_div_data *VAR_1)
{
 if (FUNC_0(&VAR_1->hi))
  FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_0->map, &VAR_1->div, VAR_1->cached_div - 1);
}
