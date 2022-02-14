
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 int VAR_3 = 140 - VAR_2->irq + 1;



 if (!VAR_1)
  VAR_1 = (unsigned char *)FUNC_0((VAR_0+0x23), 0x2);
 *VAR_1 |= 1 << VAR_3;
}
