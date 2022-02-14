
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mtk_composite {int mux_width; int mux_shift; int mux_reg; int flags; int num_parents; int parent_names; int name; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct mtk_clk_cpumux {TYPE_1__ hw; struct regmap* regmap; scalar_t__ mask; int shift; int reg; } ;
struct clk_init_data {int flags; int num_parents; int parent_names; int * ops; int name; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct clk* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int VAR_2 ;
 struct clk* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (struct mtk_clk_cpumux*) ;
 struct mtk_clk_cpumux* FUNC_5 (int,int ) ;

__attribute__((used)) static struct clk *
FUNC_6(const struct mtk_composite *VAR_3,
   struct regmap *VAR_4)
{
 struct mtk_clk_cpumux *VAR_5;
 struct clk *VAR_6;
 struct clk_init_data VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_7.name = VAR_3->name;
 VAR_7.ops = &VAR_2;
 VAR_7.parent_names = VAR_3->parent_names;
 VAR_7.num_parents = VAR_3->num_parents;
 VAR_7.flags = VAR_3->flags;

 VAR_5->reg = VAR_3->mux_reg;
 VAR_5->shift = VAR_3->mux_shift;
 VAR_5->mask = FUNC_0(VAR_3->mux_width) - 1;
 VAR_5->regmap = VAR_4;
 VAR_5->hw.init = &VAR_7;

 VAR_6 = FUNC_3(((void*)0), &VAR_5->hw);
 if (FUNC_2(VAR_6))
  FUNC_4(VAR_5);

 return VAR_6;
}
