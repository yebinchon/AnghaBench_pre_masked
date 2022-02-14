
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wake_irq {int status; struct wake_irq* name; int irq; } ;
struct TYPE_2__ {int lock; struct wake_irq* wakeirq; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct wake_irq*) ;
 int FUNC_2 (struct wake_irq*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct device *VAR_2)
{
 struct wake_irq *VAR_3 = VAR_2->power.wakeirq;
 unsigned long VAR_4;

 if (!VAR_3)
  return;

 FUNC_3(&VAR_2->power.lock, VAR_4);
 FUNC_0(VAR_2);
 VAR_2->power.wakeirq = ((void*)0);
 FUNC_4(&VAR_2->power.lock, VAR_4);

 if (VAR_3->status & VAR_0) {
  FUNC_1(VAR_3->irq, VAR_3);
  VAR_3->status &= ~VAR_1;
 }
 FUNC_2(VAR_3->name);
 FUNC_2(VAR_3);
}
