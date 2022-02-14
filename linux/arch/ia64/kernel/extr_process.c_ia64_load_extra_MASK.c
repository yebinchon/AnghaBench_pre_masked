
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int * dbr; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_3 ;
 int FUNC_3 (struct task_struct*,unsigned long,int) ;

void
FUNC_4 (struct task_struct *VAR_4)
{




 if ((VAR_4->thread.flags & VAR_0) != 0)
  FUNC_1(&VAR_4->thread.dbr[0]);
}
