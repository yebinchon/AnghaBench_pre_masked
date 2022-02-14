
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct clk_init_data {char const** parent_names; int num_parents; scalar_t__ flags; int name; int ops; } ;
struct TYPE_3__ {struct clk_init_data* init; } ;
struct clk_creg_data {TYPE_1__ hw; struct regmap* reg; int name; int ops; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int *,TYPE_1__*) ;
 struct clk* FUNC_1 (struct device*,TYPE_1__*) ;

__attribute__((used)) static struct clk *FUNC_2(struct device *VAR_0,
      struct clk_creg_data *VAR_1,
      const char **VAR_2,
      struct regmap *VAR_3)
{
 struct clk_init_data VAR_4;

 VAR_4.ops = VAR_1->ops;
 VAR_4.name = VAR_1->name;
 VAR_4.parent_names = VAR_2;
 VAR_4.num_parents = 1;
 VAR_4.flags = 0;

 VAR_1->reg = VAR_3;
 VAR_1->hw.init = &VAR_4;

 if (VAR_0)
  return FUNC_1(VAR_0, &VAR_1->hw);

 return FUNC_0(((void*)0), &VAR_1->hw);
}
