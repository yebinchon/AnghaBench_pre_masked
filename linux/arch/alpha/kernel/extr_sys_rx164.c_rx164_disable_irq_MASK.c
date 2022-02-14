
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void
FUNC_1(struct irq_data *VAR_1)
{
 FUNC_0(VAR_0 &= ~(1UL << (VAR_1->irq - 16)));
}
