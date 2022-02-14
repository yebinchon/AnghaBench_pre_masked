
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_exti_chip_data {struct stm32_exti_bank* reg_bank; } ;
struct stm32_exti_bank {scalar_t__ rpr_ofst; scalar_t__ fpr_ofst; } ;
struct irq_chip_generic {struct stm32_exti_chip_data* private; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (struct irq_chip_generic*,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(struct irq_chip_generic *VAR_1)
{
 struct stm32_exti_chip_data *VAR_2 = VAR_1->private;
 const struct stm32_exti_bank *VAR_3 = VAR_2->reg_bank;
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->rpr_ofst);
 if (VAR_3->fpr_ofst != VAR_0)
  VAR_4 |= FUNC_0(VAR_1, VAR_3->fpr_ofst);

 return VAR_4;
}
