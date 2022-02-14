
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wake_irq {int status; int irq; } ;
struct TYPE_2__ {struct wake_irq* wakeirq; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct device *VAR_1)
{
 struct wake_irq *VAR_2 = VAR_1->power.wakeirq;

 if (VAR_2 && (VAR_2->status & VAR_0))
  FUNC_0(VAR_2->irq);
}
