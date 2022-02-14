
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int irqhost; scalar_t__ dcrbase; } ;
struct irq_desc {int lock; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int (* irq_unmask ) (struct irq_data*) ;int (* irq_ack ) (struct irq_data*) ;int (* irq_mask_ack ) (struct irq_data*) ;int (* irq_mask ) (struct irq_data*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct uic* FUNC_3 (struct irq_desc*) ;
 struct irq_data* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct irq_data*) ;
 scalar_t__ FUNC_7 (struct irq_data*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct irq_data*) ;
 int FUNC_12 (struct irq_data*) ;
 int FUNC_13 (struct irq_data*) ;
 int FUNC_14 (struct irq_data*) ;

__attribute__((used)) static void FUNC_15(struct irq_desc *VAR_1)
{
 struct irq_chip *VAR_2 = FUNC_2(VAR_1);
 struct irq_data *VAR_3 = FUNC_4(VAR_1);
 struct uic *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_9(&VAR_1->lock);
 if (FUNC_7(VAR_3))
  VAR_2->irq_mask(VAR_3);
 else
  VAR_2->irq_mask_ack(VAR_3);
 FUNC_10(&VAR_1->lock);

 VAR_5 = FUNC_8(VAR_4->dcrbase + VAR_0);
 if (!VAR_5)
  goto uic_irq_ret;

 VAR_6 = 32 - FUNC_0(VAR_5);

 VAR_7 = FUNC_5(VAR_4->irqhost, VAR_6);
 FUNC_1(VAR_7);

uic_irq_ret:
 FUNC_9(&VAR_1->lock);
 if (FUNC_7(VAR_3))
  VAR_2->irq_ack(VAR_3);
 if (!FUNC_6(VAR_3) && VAR_2->irq_unmask)
  VAR_2->irq_unmask(VAR_3);
 FUNC_10(&VAR_1->lock);
}
