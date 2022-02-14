
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_exti_drv_data {int irq_nr; struct stm32_desc_irq* desc_irqs; } ;
struct stm32_desc_irq {scalar_t__ exti; int irq_parent; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct stm32_exti_drv_data *VAR_1,
        irq_hw_number_t VAR_2)
{
 const struct stm32_desc_irq *VAR_3;
 int VAR_4;

 if (!VAR_1->desc_irqs)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->irq_nr; VAR_4++) {
  VAR_3 = &VAR_1->desc_irqs[VAR_4];
  if (VAR_3->exti == VAR_2)
   return VAR_3->irq_parent;
 }

 return -VAR_0;
}
