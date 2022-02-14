
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_cpugear_data {int mask; int regbase; int num_parents; int parent_names; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct uniphier_clk_cpugear {struct clk_hw hw; int mask; int regbase; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; int num_parents; int parent_names; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 struct uniphier_clk_cpugear* FUNC_2 (struct device*,int,int ) ;
 int VAR_3 ;

struct clk_hw *FUNC_3(struct device *VAR_4,
      struct regmap *VAR_5,
      const char *VAR_6,
    const struct uniphier_clk_cpugear_data *VAR_7)
{
 struct uniphier_clk_cpugear *VAR_8;
 struct clk_init_data VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_4, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_9.name = VAR_6;
 VAR_9.ops = &VAR_3;
 VAR_9.flags = VAR_0;
 VAR_9.parent_names = VAR_7->parent_names;
 VAR_9.num_parents = VAR_7->num_parents,

 VAR_8->regmap = VAR_5;
 VAR_8->regbase = VAR_7->regbase;
 VAR_8->mask = VAR_7->mask;
 VAR_8->hw.init = &VAR_9;

 VAR_10 = FUNC_1(VAR_4, &VAR_8->hw);
 if (VAR_10)
  return FUNC_0(VAR_10);

 return &VAR_8->hw;
}
