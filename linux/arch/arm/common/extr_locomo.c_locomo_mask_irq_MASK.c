
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo {int irq_base; scalar_t__ base; } ;
struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 struct locomo* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct locomo *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;
 VAR_3 = FUNC_1(VAR_2->base + VAR_0);
 VAR_3 &= ~(0x0010 << (VAR_1->irq - VAR_2->irq_base));
 FUNC_2(VAR_3, VAR_2->base + VAR_0);
}
