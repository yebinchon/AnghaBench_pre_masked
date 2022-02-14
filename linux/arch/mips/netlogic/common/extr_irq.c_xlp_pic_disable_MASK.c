
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_pic_irq {TYPE_1__* node; int irt; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int piclock; int picbase; } ;


 int FUNC_0 (int) ;
 struct nlm_pic_irq* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct nlm_pic_irq *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_0(!VAR_1);
 FUNC_3(&VAR_1->node->piclock, VAR_2);
 FUNC_2(VAR_1->node->picbase, VAR_1->irt);
 FUNC_4(&VAR_1->node->piclock, VAR_2);
}
