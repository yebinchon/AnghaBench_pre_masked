
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {int ** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct task_struct *VAR_0)
{
 struct thread_struct *VAR_1 = &VAR_0->thread;

 FUNC_0(VAR_1->ptrace_bps[0]);
 VAR_1->ptrace_bps[0] = ((void*)0);
}
