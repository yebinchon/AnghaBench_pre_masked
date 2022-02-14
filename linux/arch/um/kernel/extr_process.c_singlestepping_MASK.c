
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ singlestep_syscall; } ;
struct task_struct {int ptrace; TYPE_1__ thread; } ;


 int VAR_0 ;
 void* VAR_1 ;

int FUNC_0(void * VAR_2)
{
 struct task_struct *VAR_3 = VAR_2 ? VAR_2 : VAR_1;

 if (!(VAR_3->ptrace & VAR_0))
  return 0;

 if (VAR_3->thread.singlestep_syscall)
  return 1;

 return 2;
}
