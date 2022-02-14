
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct intc_irqpin_priv {TYPE_1__* irq; } ;
struct TYPE_4__ {int (* irq_unmask ) (int ) ;} ;
struct TYPE_3__ {int requested_irq; } ;


 int FUNC_0 (struct irq_data*) ;
 struct intc_irqpin_priv* FUNC_1 (struct irq_data*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct intc_irqpin_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_1->irq[FUNC_4(VAR_0)].requested_irq;

 FUNC_0(VAR_0);





 FUNC_2(VAR_2)->irq_unmask(FUNC_3(VAR_2));
}
