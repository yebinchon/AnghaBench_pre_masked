
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {unsigned int cached_div; int cached_duty; int div; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ,int *) ;
 struct meson_sclk_div_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (struct clk_hw*,int *) ;
 unsigned int FUNC_3 (struct meson_sclk_div_data*) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_4(VAR_0);
 struct meson_sclk_div_data *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1->map, &VAR_2->div);


 if (!VAR_3)
  VAR_2->cached_div = FUNC_3(VAR_2);
 else
  VAR_2->cached_div = VAR_3 + 1;

 FUNC_2(VAR_0, &VAR_2->cached_duty);
}
