
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = 1 << (VAR_2->irq - VAR_1);

 *(volatile u8 *) VAR_0 |= VAR_3;
}
