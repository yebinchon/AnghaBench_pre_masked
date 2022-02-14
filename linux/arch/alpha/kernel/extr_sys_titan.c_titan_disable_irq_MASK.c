
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq;
 FUNC_0(&VAR_1);
 VAR_0 &= ~(1UL << (VAR_3 - 16));
 FUNC_2(VAR_0);
 FUNC_1(&VAR_1);
}
