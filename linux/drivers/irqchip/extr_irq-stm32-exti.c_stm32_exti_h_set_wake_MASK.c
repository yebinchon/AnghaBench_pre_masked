
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_exti_chip_data {int rlock; int wake_active; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct stm32_exti_chip_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct stm32_exti_chip_data *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_1->hwirq % VAR_0);

 FUNC_2(&VAR_3->rlock);

 if (VAR_2)
  VAR_3->wake_active |= VAR_4;
 else
  VAR_3->wake_active &= ~VAR_4;

 FUNC_3(&VAR_3->rlock);

 return 0;
}
