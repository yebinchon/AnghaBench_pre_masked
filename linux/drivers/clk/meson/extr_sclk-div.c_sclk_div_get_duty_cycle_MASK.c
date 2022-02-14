
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sclk_div_data {int cached_div; int hi; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;
struct clk_duty {int num; int den; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct meson_sclk_div_data* FUNC_2 (struct clk_regmap*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
       struct clk_duty *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct meson_sclk_div_data *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (!FUNC_0(&VAR_3->hi)) {
  VAR_1->num = 1;
  VAR_1->den = 2;
  return 0;
 }

 VAR_4 = FUNC_1(VAR_2->map, &VAR_3->hi);
 VAR_1->num = VAR_4 + 1;
 VAR_1->den = VAR_3->cached_div;
 return 0;
}
