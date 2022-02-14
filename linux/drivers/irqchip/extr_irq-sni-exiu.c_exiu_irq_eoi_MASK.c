
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct exiu_irq_data {scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct irq_data*) ;
 struct exiu_irq_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct exiu_irq_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(FUNC_0(VAR_1->hwirq), VAR_2->base + VAR_0);
 FUNC_1(VAR_1);
}
