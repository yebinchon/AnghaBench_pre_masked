
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {int lock; int irq_route; } ;
struct irq_data {int mask; } ;


 int VAR_0 ;
 struct pdc_intc_priv* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct pdc_intc_priv*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct pdc_intc_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->lock);
 VAR_2->irq_route &= ~VAR_1->mask;
 FUNC_1(VAR_2, VAR_0, VAR_2->irq_route);
 FUNC_3(&VAR_2->lock);
}
