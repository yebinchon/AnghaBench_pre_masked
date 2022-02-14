
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mtk_mux {int flags; int ops; int num_parents; int parent_names; int name; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct mtk_clk_mux {TYPE_1__ hw; int * lock; struct mtk_mux const* data; struct regmap* regmap; } ;
struct clk_init_data {int flags; int ops; int num_parents; int parent_names; int name; } ;
struct clk {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct mtk_clk_mux*) ;
 struct mtk_clk_mux* FUNC_4 (int,int ) ;

struct clk *FUNC_5(const struct mtk_mux *VAR_3,
     struct regmap *VAR_4,
     spinlock_t *VAR_5)
{
 struct mtk_clk_mux *VAR_6;
 struct clk_init_data VAR_7;
 struct clk *VAR_8;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_7.name = VAR_3->name;
 VAR_7.flags = VAR_3->flags | VAR_0;
 VAR_7.parent_names = VAR_3->parent_names;
 VAR_7.num_parents = VAR_3->num_parents;
 VAR_7.ops = VAR_3->ops;

 VAR_6->regmap = VAR_4;
 VAR_6->data = VAR_3;
 VAR_6->lock = VAR_5;
 VAR_6->hw.init = &VAR_7;

 VAR_8 = FUNC_2(((void*)0), &VAR_6->hw);
 if (FUNC_1(VAR_8)) {
  FUNC_3(VAR_6);
  return VAR_8;
 }

 return VAR_8;
}
