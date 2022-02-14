
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq;


 if (VAR_5 < VAR_0)
  *VAR_3 = (1 << (VAR_5 - VAR_1));
 else
  *VAR_2 = (1 << (VAR_5 - VAR_0));
}
