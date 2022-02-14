
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sve_state; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_4__ {scalar_t__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct task_struct*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 () ;

int FUNC_4(struct task_struct *VAR_3, struct task_struct *VAR_4)
{
 if (VAR_2->mm)
  FUNC_3();
 *VAR_3 = *VAR_4;


 FUNC_0(!FUNC_1(VAR_0));
 VAR_3->thread.sve_state = ((void*)0);
 FUNC_2(VAR_3, VAR_1);

 return 0;
}
