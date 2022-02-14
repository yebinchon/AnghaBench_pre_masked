
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned long* VAR_0 ;
 int FUNC_0 (unsigned int,unsigned long) ;

__attribute__((used)) static inline void
FUNC_1(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = VAR_1->irq;
 unsigned long VAR_3;
 VAR_3 = (VAR_0[VAR_2 >= 64] &= ~(1UL << (VAR_2 & 63)));
 FUNC_0(VAR_2, VAR_3);
}
