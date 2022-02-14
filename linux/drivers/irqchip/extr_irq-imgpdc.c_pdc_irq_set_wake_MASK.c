
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {unsigned int irq_route; unsigned int syswake_irq; unsigned int* perip_irqs; int lock; } ;
struct irq_data {int hwirq; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 struct pdc_intc_priv* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct pdc_intc_priv*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct pdc_intc_priv *VAR_3 = FUNC_2(VAR_1);
 irq_hw_number_t VAR_4 = VAR_1->hwirq;
 unsigned int VAR_5 = (1 << 16) << VAR_4;
 unsigned int VAR_6;

 FUNC_4(&VAR_3->lock);
 if (VAR_2)
  VAR_3->irq_route |= VAR_5;
 else
  VAR_3->irq_route &= ~VAR_5;
 FUNC_3(VAR_3, VAR_0, VAR_3->irq_route);
 FUNC_5(&VAR_3->lock);


 if (FUNC_0(VAR_4))
  VAR_6 = VAR_3->syswake_irq;
 else
  VAR_6 = VAR_3->perip_irqs[VAR_4];
 FUNC_1(VAR_6, VAR_2);

 return 0;
}
