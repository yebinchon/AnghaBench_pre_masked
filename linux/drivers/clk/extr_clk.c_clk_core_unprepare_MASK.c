
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int prepare_count; int flags; scalar_t__ enable_count; struct clk_core* parent; int hw; TYPE_1__* ops; int name; } ;
struct TYPE_2__ {int (* unprepare ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct clk_core*) ;
 int FUNC_2 (struct clk_core*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct clk_core*) ;
 int FUNC_6 (struct clk_core*) ;

__attribute__((used)) static void FUNC_7(struct clk_core *VAR_3)
{
 FUNC_3(&VAR_2);

 if (!VAR_3)
  return;

 if (FUNC_0(VAR_3->prepare_count == 0,
     "%s already unprepared\n", VAR_3->name))
  return;

 if (FUNC_0(VAR_3->prepare_count == 1 && VAR_3->flags & VAR_0,
     "Unpreparing critical %s\n", VAR_3->name))
  return;

 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_3);

 if (--VAR_3->prepare_count > 0)
  return;

 FUNC_0(VAR_3->enable_count > 0, "Unpreparing enabled %s\n", VAR_3->name);

 FUNC_5(VAR_3);

 if (VAR_3->ops->unprepare)
  VAR_3->ops->unprepare(VAR_3->hw);

 FUNC_2(VAR_3);

 FUNC_6(VAR_3);
 FUNC_7(VAR_3->parent);
}
