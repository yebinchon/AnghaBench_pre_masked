
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct intc_irqpin_priv {int wakeup_path; TYPE_1__* irq; } ;
struct TYPE_2__ {int requested_irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct intc_irqpin_priv* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct intc_irqpin_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_4(VAR_0);

 FUNC_3(VAR_2->irq[VAR_3].requested_irq, VAR_1);
 if (VAR_1)
  FUNC_1(&VAR_2->wakeup_path);
 else
  FUNC_0(&VAR_2->wakeup_path);

 return 0;
}
