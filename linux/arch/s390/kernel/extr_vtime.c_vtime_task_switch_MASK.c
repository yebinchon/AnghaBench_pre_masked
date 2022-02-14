
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_8__ {int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; } ;
struct TYPE_6__ {int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; } ;
struct TYPE_7__ {TYPE_2__ thread; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct task_struct*) ;

void FUNC_1(struct task_struct *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->thread.user_timer = VAR_0.user_timer;
 VAR_2->thread.guest_timer = VAR_0.guest_timer;
 VAR_2->thread.system_timer = VAR_0.system_timer;
 VAR_2->thread.hardirq_timer = VAR_0.hardirq_timer;
 VAR_2->thread.softirq_timer = VAR_0.softirq_timer;
 VAR_0.user_timer = VAR_1->thread.user_timer;
 VAR_0.guest_timer = VAR_1->thread.guest_timer;
 VAR_0.system_timer = VAR_1->thread.system_timer;
 VAR_0.hardirq_timer = VAR_1->thread.hardirq_timer;
 VAR_0.softirq_timer = VAR_1->thread.softirq_timer;
}
