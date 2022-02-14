
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct hub_irq_data {int * irq_mask; int cpu; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ,unsigned long*) ;
 struct hub_irq_data* FUNC_2 (struct irq_data*) ;
 int VAR_0 ;
 unsigned long* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct hub_irq_data *VAR_2 = FUNC_2(VAR_1);
 unsigned long *VAR_3 = FUNC_3(VAR_0, VAR_2->cpu);

 FUNC_1(VAR_1->hwirq, VAR_3);
 FUNC_0(VAR_3[0], VAR_2->irq_mask[0]);
 FUNC_0(VAR_3[1], VAR_2->irq_mask[1]);
}
