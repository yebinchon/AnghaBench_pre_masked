
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct irq_data *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 & VAR_1)
  VAR_3 |= 1 << (VAR_4->irq - VAR_2);

 if (VAR_5 & VAR_0)
  VAR_3 |= 1 << (VAR_4->irq - VAR_2 + 2);

 return 0;
}
