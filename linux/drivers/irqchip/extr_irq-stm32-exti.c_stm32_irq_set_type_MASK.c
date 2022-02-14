
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_exti_chip_data {struct stm32_exti_bank* reg_bank; } ;
struct stm32_exti_bank {int ftsr_ofst; int rtsr_ofst; } ;
struct irq_data {int dummy; } ;
struct irq_chip_generic {struct stm32_exti_chip_data* private; } ;


 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*,int ) ;
 int FUNC_4 (struct irq_chip_generic*,int ,int ) ;
 int FUNC_5 (struct stm32_exti_chip_data*) ;
 int FUNC_6 (struct stm32_exti_chip_data*) ;
 int FUNC_7 (struct irq_data*,unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_0(VAR_0);
 struct stm32_exti_chip_data *VAR_3 = VAR_2->private;
 const struct stm32_exti_bank *VAR_4 = VAR_3->reg_bank;
 u32 VAR_5, VAR_6;
 int VAR_7;

 FUNC_1(VAR_2);

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7)
  goto unlock;

 VAR_5 = FUNC_3(VAR_2, VAR_4->rtsr_ofst);
 VAR_6 = FUNC_3(VAR_2, VAR_4->ftsr_ofst);

 VAR_7 = FUNC_7(VAR_0, VAR_1, &VAR_5, &VAR_6);
 if (VAR_7)
  goto unspinlock;

 FUNC_4(VAR_2, VAR_5, VAR_4->rtsr_ofst);
 FUNC_4(VAR_2, VAR_6, VAR_4->ftsr_ofst);

unspinlock:
 FUNC_6(VAR_3);
unlock:
 FUNC_2(VAR_2);

 return VAR_7;
}
