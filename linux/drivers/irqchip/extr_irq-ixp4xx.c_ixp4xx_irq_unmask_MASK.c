
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixp4xx_irq {scalar_t__ irqbase; scalar_t__ is_356; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct ixp4xx_irq* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 struct ixp4xx_irq *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 if (VAR_3->is_356 && VAR_2->hwirq >= 32) {
  VAR_4 = FUNC_1(VAR_3->irqbase + VAR_1);
  VAR_4 |= FUNC_0(VAR_2->hwirq - 32);
  FUNC_2(VAR_4, VAR_3->irqbase + VAR_1);
 } else {
  VAR_4 = FUNC_1(VAR_3->irqbase + VAR_0);
  VAR_4 |= FUNC_0(VAR_2->hwirq);
  FUNC_2(VAR_4, VAR_3->irqbase + VAR_0);
 }
}
