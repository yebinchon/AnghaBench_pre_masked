
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_trace {int dummy; } ;


 struct task_struct* VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct stack_trace*,unsigned long,struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_1, struct stack_trace *VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_3(VAR_1))
  return;

 if (VAR_1 == VAR_0)
  VAR_3 = FUNC_0();
 else
  VAR_3 = VAR_1->thread.ksp;

 FUNC_2(VAR_2, VAR_3, VAR_1, 0);

 FUNC_1(VAR_1);
}
