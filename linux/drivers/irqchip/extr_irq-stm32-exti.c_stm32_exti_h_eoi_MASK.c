
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_exti_chip_data {int rlock; struct stm32_exti_bank* reg_bank; } ;
struct stm32_exti_bank {scalar_t__ rpr_ofst; scalar_t__ fpr_ofst; } ;
struct irq_data {TYPE_1__* parent_data; } ;
struct TYPE_2__ {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 struct stm32_exti_chip_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct irq_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct stm32_exti_chip_data *VAR_2 = FUNC_1(VAR_1);
 const struct stm32_exti_bank *VAR_3 = VAR_2->reg_bank;

 FUNC_2(&VAR_2->rlock);

 FUNC_4(VAR_1, VAR_3->rpr_ofst);
 if (VAR_3->fpr_ofst != VAR_0)
  FUNC_4(VAR_1, VAR_3->fpr_ofst);

 FUNC_3(&VAR_2->rlock);

 if (VAR_1->parent_data->chip)
  FUNC_0(VAR_1);
}
