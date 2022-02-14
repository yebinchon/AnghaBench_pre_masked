
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqc_irq {int hw_irq; int requested_irq; TYPE_1__* p; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct irqc_irq *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_0->p->dev, "%s (%d:%d)\n", VAR_1, VAR_0->requested_irq, VAR_0->hw_irq);
}
