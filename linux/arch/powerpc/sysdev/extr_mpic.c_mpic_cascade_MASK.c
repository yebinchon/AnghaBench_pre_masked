
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int flags; } ;
struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct mpic* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (struct mpic*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1)
{
 struct irq_chip *VAR_2 = FUNC_2(VAR_1);
 struct mpic *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;

 FUNC_0(!(VAR_3->flags & VAR_0));

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4);

 VAR_2->irq_eoi(&VAR_1->irq_data);
}
