
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int timer_running; int si_timer; int last_timeout_jiffies; int timer_can_start; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_1, unsigned long VAR_2)
{
 if (!VAR_1->timer_can_start)
  return;
 VAR_1->last_timeout_jiffies = VAR_0;
 FUNC_0(&VAR_1->si_timer, VAR_2);
 VAR_1->timer_running = 1;
}
