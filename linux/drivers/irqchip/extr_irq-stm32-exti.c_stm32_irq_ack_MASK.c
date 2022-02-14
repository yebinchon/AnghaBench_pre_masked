
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_exti_chip_data {struct stm32_exti_bank* reg_bank; } ;
struct stm32_exti_bank {scalar_t__ rpr_ofst; scalar_t__ fpr_ofst; } ;
struct irq_data {int mask; } ;
struct irq_chip_generic {struct stm32_exti_chip_data* private; } ;


 scalar_t__ VAR_0 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_0(VAR_1);
 struct stm32_exti_chip_data *VAR_3 = VAR_2->private;
 const struct stm32_exti_bank *VAR_4 = VAR_3->reg_bank;

 FUNC_1(VAR_2);

 FUNC_3(VAR_2, VAR_1->mask, VAR_4->rpr_ofst);
 if (VAR_4->fpr_ofst != VAR_0)
  FUNC_3(VAR_2, VAR_1->mask, VAR_4->fpr_ofst);

 FUNC_2(VAR_2);
}
