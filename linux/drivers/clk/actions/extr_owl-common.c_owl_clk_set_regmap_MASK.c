
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct owl_clk_desc {int num_clks; struct owl_clk_common** clks; } ;
struct owl_clk_common {struct regmap* regmap; } ;



__attribute__((used)) static void FUNC_0(const struct owl_clk_desc *VAR_0,
    struct regmap *VAR_1)
{
 int VAR_2;
 struct owl_clk_common *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_clks; VAR_2++) {
  VAR_3 = VAR_0->clks[VAR_2];
  if (!VAR_3)
   continue;

  VAR_3->regmap = VAR_1;
 }
}
