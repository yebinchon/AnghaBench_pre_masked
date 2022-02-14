
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

unsigned int FUNC_0(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq;

 if (VAR_3 < 8)
  *(volatile unsigned char *)(VAR_0+1) &= ~(1 << VAR_3);
 else
  *(volatile unsigned char *)(VAR_1+1) &= ~(1 << (VAR_3 - 8));
 return 0;
}
