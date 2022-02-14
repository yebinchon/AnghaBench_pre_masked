
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_exti_chip_data {int rlock; int mask_cache; struct stm32_exti_bank* reg_bank; } ;
struct stm32_exti_bank {int imr_ofst; } ;
struct irq_data {TYPE_1__* parent_data; } ;
struct TYPE_2__ {scalar_t__ chip; } ;


 int FUNC_0 (struct irq_data*) ;
 struct stm32_exti_chip_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct irq_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct stm32_exti_chip_data *VAR_1 = FUNC_1(VAR_0);
 const struct stm32_exti_bank *VAR_2 = VAR_1->reg_bank;

 FUNC_2(&VAR_1->rlock);
 VAR_1->mask_cache = FUNC_4(VAR_0, VAR_2->imr_ofst);
 FUNC_3(&VAR_1->rlock);

 if (VAR_0->parent_data->chip)
  FUNC_0(VAR_0);
}
