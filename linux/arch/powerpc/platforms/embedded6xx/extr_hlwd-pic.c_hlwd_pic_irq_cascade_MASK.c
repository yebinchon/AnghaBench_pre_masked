
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_desc {int lock; int irq_data; } ;
struct irq_chip {int (* irq_unmask ) (int *) ;int (* irq_ack ) (int *) ;int (* irq_mask ) (int *) ;} ;


 unsigned int FUNC_0 (struct irq_domain*) ;
 int FUNC_1 (unsigned int) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct irq_domain* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_2(VAR_0);
 struct irq_domain *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;

 FUNC_6(&VAR_0->lock);
 VAR_1->irq_mask(&VAR_0->irq_data);
 FUNC_7(&VAR_0->lock);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_3);
 else
  FUNC_5("spurious interrupt!\n");

 FUNC_6(&VAR_0->lock);
 VAR_1->irq_ack(&VAR_0->irq_data);
 if (!FUNC_4(&VAR_0->irq_data) && VAR_1->irq_unmask)
  VAR_1->irq_unmask(&VAR_0->irq_data);
 FUNC_7(&VAR_0->lock);
}
