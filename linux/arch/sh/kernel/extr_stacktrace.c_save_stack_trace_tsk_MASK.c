
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_trace {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,unsigned long*,int *,struct stack_trace*) ;

void FUNC_1(struct task_struct *VAR_2, struct stack_trace *VAR_3)
{
 unsigned long *VAR_4 = (unsigned long *)VAR_2->thread.sp;

 FUNC_0(VAR_0, ((void*)0), VAR_4, &VAR_1, VAR_3);
}
