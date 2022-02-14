
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cplds {unsigned int irq_mask; scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct cplds* FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct cplds *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_3);

 VAR_2->irq_mask &= ~VAR_4;
 FUNC_3(VAR_2->irq_mask, VAR_2->base + VAR_0);
}
