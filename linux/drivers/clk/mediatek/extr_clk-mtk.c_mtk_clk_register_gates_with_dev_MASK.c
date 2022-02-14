
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mtk_gate {size_t id; struct device_node* name; int flags; int ops; int shift; TYPE_1__* regs; int parent_name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk_onecell_data {struct regmap** clks; } ;
typedef struct regmap clk ;
struct TYPE_2__ {int sta_ofs; int clr_ofs; int set_ofs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 struct regmap* FUNC_3 (struct device_node*,int ,struct regmap*,int ,int ,int ,int ,int ,int ,struct device*) ;
 int FUNC_4 (char*,struct device_node*,int) ;
 struct regmap* FUNC_5 (struct device_node*) ;

int FUNC_6(struct device_node *VAR_1,
  const struct mtk_gate *VAR_2,
  int VAR_3, struct clk_onecell_data *VAR_4,
  struct device *VAR_5)
{
 int VAR_6;
 struct clk *VAR_7;
 struct regmap *VAR_8;

 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_8)) {
  FUNC_4("Cannot find regmap for %pOF: %ld\n", VAR_1,
    FUNC_2(VAR_8));
  return FUNC_2(VAR_8);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  const struct mtk_gate *VAR_9 = &VAR_2[VAR_6];

  if (!FUNC_1(VAR_4->clks[VAR_9->id]))
   continue;

  VAR_7 = FUNC_3(VAR_9->name, VAR_9->parent_name,
    VAR_8,
    VAR_9->regs->set_ofs,
    VAR_9->regs->clr_ofs,
    VAR_9->regs->sta_ofs,
    VAR_9->shift, VAR_9->ops, VAR_9->flags, VAR_5);

  if (FUNC_0(VAR_7)) {
   FUNC_4("Failed to register clk %s: %ld\n",
     VAR_9->name, FUNC_2(VAR_7));
   continue;
  }

  VAR_4->clks[VAR_9->id] = VAR_7;
 }

 return 0;
}
