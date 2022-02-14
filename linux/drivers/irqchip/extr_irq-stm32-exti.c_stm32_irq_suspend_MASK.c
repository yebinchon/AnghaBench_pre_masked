
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_exti_chip_data {int dummy; } ;
struct irq_chip_generic {int wake_active; struct stm32_exti_chip_data* private; } ;


 int FUNC_0 (struct irq_chip_generic*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct stm32_exti_chip_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_chip_generic *VAR_0)
{
 struct stm32_exti_chip_data *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0);
 FUNC_2(VAR_1, VAR_0->wake_active);
 FUNC_1(VAR_0);
}
