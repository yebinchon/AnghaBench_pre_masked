
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intc_irqpin_irq {int domain_irq; int hw_irq; int requested_irq; TYPE_2__* p; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct intc_irqpin_irq *VAR_0, char *VAR_1)
{
 FUNC_0(&VAR_0->p->pdev->dev, "%s (%d:%d:%d)\n",
  VAR_1, VAR_0->requested_irq, VAR_0->hw_irq, VAR_0->domain_irq);
}
