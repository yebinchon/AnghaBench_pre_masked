
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {scalar_t__ ptrace_dr7; scalar_t__ debugreg6; int ** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct task_struct *VAR_1)
{
 int VAR_2;
 struct thread_struct *VAR_3 = &VAR_1->thread;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_3->ptrace_bps[VAR_2]);
  VAR_3->ptrace_bps[VAR_2] = ((void*)0);
 }

 VAR_3->debugreg6 = 0;
 VAR_3->ptrace_dr7 = 0;
}
