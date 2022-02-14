
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned long irq; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct irq_data *VAR_1)
{
 FUNC_0(VAR_1->irq, VAR_0 &= ~(1UL << VAR_1->irq));
}
