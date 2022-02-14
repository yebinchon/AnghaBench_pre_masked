
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; } ;
struct task_struct {TYPE_1__ thread; int pid; } ;
struct pt_regs {int dummy; } ;
struct pcpu {struct lowcore* lowcore; } ;
struct lowcore {unsigned long current_task; scalar_t__ steal_timer; int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; int current_pid; int lpp; scalar_t__ kernel_stack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct pcpu *VAR_3, struct task_struct *VAR_4)
{
 struct lowcore *VAR_5 = VAR_3->lowcore;

 VAR_5->kernel_stack = (unsigned long) FUNC_0(VAR_4)
  + VAR_2 - VAR_1 - sizeof(struct pt_regs);
 VAR_5->current_task = (unsigned long) VAR_4;
 VAR_5->lpp = VAR_0;
 VAR_5->current_pid = VAR_4->pid;
 VAR_5->user_timer = VAR_4->thread.user_timer;
 VAR_5->guest_timer = VAR_4->thread.guest_timer;
 VAR_5->system_timer = VAR_4->thread.system_timer;
 VAR_5->hardirq_timer = VAR_4->thread.hardirq_timer;
 VAR_5->softirq_timer = VAR_4->thread.softirq_timer;
 VAR_5->steal_timer = 0;
}
