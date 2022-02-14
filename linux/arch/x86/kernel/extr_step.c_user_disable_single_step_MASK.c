
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int) ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*,int ) ;
 scalar_t__ FUNC_4 (struct task_struct*,int ) ;

void FUNC_5(struct task_struct *VAR_4)
{



 if (FUNC_4(VAR_4, VAR_0))
  FUNC_1(VAR_4, 0);


 FUNC_0(VAR_4, VAR_2);


 if (FUNC_3(VAR_4, VAR_1))
  FUNC_2(VAR_4)->flags &= ~VAR_3;
}
