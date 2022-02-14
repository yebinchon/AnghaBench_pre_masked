
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {int ** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_2__ {int num_events; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct task_struct *VAR_1)
{
 int VAR_2;
 struct thread_struct *VAR_3 = &VAR_1->thread;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_events; VAR_2++) {
  FUNC_0(VAR_3->ptrace_bps[VAR_2]);
  VAR_3->ptrace_bps[VAR_2] = ((void*)0);
 }
}
