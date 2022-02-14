
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {int ** ptrace_wp; int ** ptrace_bp; } ;
struct task_struct {struct thread_struct thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct task_struct *VAR_2)
{
 int VAR_3;
 struct thread_struct *VAR_4 = &VAR_2->thread;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_4->ptrace_bp[VAR_3]) {
   FUNC_0(VAR_4->ptrace_bp[VAR_3]);
   VAR_4->ptrace_bp[VAR_3] = ((void*)0);
  }
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_4->ptrace_wp[VAR_3]) {
   FUNC_0(VAR_4->ptrace_wp[VAR_3]);
   VAR_4->ptrace_wp[VAR_3] = ((void*)0);
  }
 }
}
