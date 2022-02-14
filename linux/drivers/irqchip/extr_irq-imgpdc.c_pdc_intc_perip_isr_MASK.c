
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_intc_priv {unsigned int nr_perips; unsigned int* perip_irqs; int domain; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 unsigned int FUNC_2 (struct irq_desc*) ;
 unsigned int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0)
{
 unsigned int VAR_1 = FUNC_2(VAR_0);
 struct pdc_intc_priv *VAR_2;
 unsigned int VAR_3, VAR_4;

 VAR_2 = (struct pdc_intc_priv *)FUNC_1(VAR_0);


 for (VAR_3 = 0; VAR_3 < VAR_2->nr_perips; ++VAR_3)
  if (VAR_1 == VAR_2->perip_irqs[VAR_3])
   goto found;


 return;
found:


 VAR_4 = FUNC_3(VAR_2->domain, VAR_3);
 FUNC_0(VAR_4);
}
