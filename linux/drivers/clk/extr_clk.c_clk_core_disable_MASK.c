
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int enable_count; int flags; struct clk_core* parent; int hw; TYPE_1__* ops; int name; } ;
struct TYPE_2__ {int (* disable ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clk_core*) ;
 int FUNC_4 (struct clk_core*) ;

__attribute__((used)) static void FUNC_5(struct clk_core *VAR_2)
{
 FUNC_1(&VAR_1);

 if (!VAR_2)
  return;

 if (FUNC_0(VAR_2->enable_count == 0, "%s already disabled\n", VAR_2->name))
  return;

 if (FUNC_0(VAR_2->enable_count == 1 && VAR_2->flags & VAR_0,
     "Disabling critical %s\n", VAR_2->name))
  return;

 if (--VAR_2->enable_count > 0)
  return;

 FUNC_4(VAR_2);

 if (VAR_2->ops->disable)
  VAR_2->ops->disable(VAR_2->hw);

 FUNC_3(VAR_2);

 FUNC_5(VAR_2->parent);
}
