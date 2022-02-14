
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int num_parents; int name; TYPE_1__* parents; struct clk_core* parent; } ;
struct clk {struct clk_core* core; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;

bool FUNC_1(struct clk *VAR_0, struct clk *VAR_1)
{
 struct clk_core *VAR_2, *VAR_3;
 int VAR_4;


 if (!VAR_0 || !VAR_1)
  return 1;

 VAR_2 = VAR_0->core;
 VAR_3 = VAR_1->core;


 if (VAR_2->parent == VAR_3)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_parents; VAR_4++)
  if (!FUNC_0(VAR_2->parents[VAR_4].name, VAR_3->name))
   return 1;

 return 0;
}
