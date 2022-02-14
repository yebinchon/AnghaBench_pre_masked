
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_pic_irq {int picirq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nlm_pic_irq* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct nlm_pic_irq *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->picirq);
 FUNC_0(VAR_1->picirq);
}
