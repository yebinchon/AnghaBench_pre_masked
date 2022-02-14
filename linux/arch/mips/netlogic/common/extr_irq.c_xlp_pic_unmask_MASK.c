
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_pic_irq {int irt; TYPE_1__* node; int picirq; int (* extra_ack ) (struct irq_data*) ;} ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int picbase; } ;


 int FUNC_0 (int) ;
 struct nlm_pic_irq* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct nlm_pic_irq *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!VAR_1);

 if (VAR_1->extra_ack)
  VAR_1->extra_ack(VAR_0);


 FUNC_3(VAR_1->picirq);


 FUNC_2(VAR_1->node->picbase, VAR_1->irt);
}
