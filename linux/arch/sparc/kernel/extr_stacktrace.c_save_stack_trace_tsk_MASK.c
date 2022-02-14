
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct stack_trace {int dummy; } ;


 int FUNC_0 (struct thread_info*,struct stack_trace*,int) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_0, struct stack_trace *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1, 1);
}
