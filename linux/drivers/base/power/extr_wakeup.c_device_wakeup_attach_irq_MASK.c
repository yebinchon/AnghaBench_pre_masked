
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {struct wake_irq* wakeirq; } ;
struct wake_irq {int dummy; } ;
struct TYPE_2__ {struct wakeup_source* wakeup; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (struct device*,char*) ;

void FUNC_1(struct device *VAR_0,
        struct wake_irq *VAR_1)
{
 struct wakeup_source *VAR_2;

 VAR_2 = VAR_0->power.wakeup;
 if (!VAR_2)
  return;

 if (VAR_2->wakeirq)
  FUNC_0(VAR_0, "Leftover wakeup IRQ found, overriding\n");

 VAR_2->wakeirq = VAR_1;
}
