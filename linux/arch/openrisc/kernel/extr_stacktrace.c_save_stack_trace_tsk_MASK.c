
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct stack_trace*,unsigned long*,int ) ;

void FUNC_2(struct task_struct *VAR_2, struct stack_trace *VAR_3)
{
 unsigned long *VAR_4 = ((void*)0);

 if (VAR_2 == VAR_0)
  VAR_4 = (unsigned long *) &VAR_4;
 else
  VAR_4 = (unsigned long *) FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_4, VAR_1);
}
