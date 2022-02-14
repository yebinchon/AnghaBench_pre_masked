
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct irq_data*) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = (unsigned int)FUNC_1(VAR_2);

 FUNC_2("ics-hal: mask virq %d [hw 0x%x]\n", VAR_2->irq, VAR_3);

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  return;
 FUNC_0(VAR_3);
}
