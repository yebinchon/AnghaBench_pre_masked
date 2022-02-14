
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timbgpio {int irq_base; unsigned long last_ier; int lock; scalar_t__ membase; } ;
struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 struct timbgpio* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct timbgpio *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_1->irq - VAR_2->irq_base;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_2->last_ier |= 1UL << VAR_3;
 FUNC_0(VAR_2->last_ier, VAR_2->membase + VAR_0);
 FUNC_3(&VAR_2->lock, VAR_4);
}
