
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;


 int FUNC_0 (unsigned int) ;
 struct irq_chip* FUNC_1 (struct irq_desc*) ;
 unsigned int FUNC_2 (struct irq_desc*) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;





 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3)
  FUNC_0(VAR_3);
 VAR_1->irq_eoi(&VAR_0->irq_data);
}
