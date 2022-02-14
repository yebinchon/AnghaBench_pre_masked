
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int (* irq_unmask ) (struct irq_data*) ;int (* irq_ack ) (struct irq_data*) ;int (* irq_mask ) (struct irq_data*) ;int (* irq_mask_ack ) (struct irq_data*) ;} ;
struct TYPE_3__ {int (* get_irq ) (unsigned int) ;} ;
typedef TYPE_1__ irq_cascade_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_1 ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct irq_data* FUNC_3 (struct irq_desc*) ;
 int VAR_2 ;
 struct irq_desc* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (struct irq_data*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct irq_data*) ;

__attribute__((used)) static void FUNC_11(unsigned int VAR_3)
{
 irq_cascade_t *VAR_4;

 if (VAR_3 >= VAR_0) {
  FUNC_0(&VAR_2);
  return;
 }

 VAR_4 = VAR_1 + VAR_3;
 if (VAR_4->get_irq != ((void*)0)) {
  struct irq_desc *VAR_5 = FUNC_4(VAR_3);
  struct irq_data *VAR_6 = FUNC_3(VAR_5);
  struct irq_chip *VAR_7 = FUNC_2(VAR_5);
  int VAR_8;

  if (VAR_7->irq_mask_ack)
   VAR_7->irq_mask_ack(VAR_6);
  else {
   VAR_7->irq_mask(VAR_6);
   VAR_7->irq_ack(VAR_6);
  }
  VAR_8 = VAR_4->get_irq(VAR_3);
  VAR_3 = VAR_8;
  if (VAR_8 < 0)
   FUNC_0(&VAR_2);
  else
   FUNC_11(VAR_3);
  if (!FUNC_5(VAR_6) && VAR_7->irq_unmask)
   VAR_7->irq_unmask(VAR_6);
 } else
  FUNC_1(VAR_3);
}
