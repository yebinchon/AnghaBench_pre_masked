
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptrace_wp; int ptrace_bp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0(VAR_0->thread.ptrace_bp, 0, sizeof(VAR_0->thread.ptrace_bp));
 FUNC_0(VAR_0->thread.ptrace_wp, 0, sizeof(VAR_0->thread.ptrace_wp));
}
