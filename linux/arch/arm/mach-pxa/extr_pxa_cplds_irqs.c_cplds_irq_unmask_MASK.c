
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cplds {unsigned int irq_mask; scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cplds* FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct cplds *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5, VAR_6 = FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_3->base + VAR_1);
 FUNC_4(VAR_5 & ~VAR_6, VAR_3->base + VAR_1);

 VAR_3->irq_mask |= VAR_6;
 FUNC_4(VAR_3->irq_mask, VAR_3->base + VAR_0);
}
