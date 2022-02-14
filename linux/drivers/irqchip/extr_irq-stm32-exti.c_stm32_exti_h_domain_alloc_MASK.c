
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_exti_host_data {int drv_data; struct stm32_exti_chip_data* chips_data; } ;
struct stm32_exti_chip_data {int dummy; } ;
struct irq_fwspec {int* param; int param_count; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct stm32_exti_host_data* host_data; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int,int *,struct stm32_exti_chip_data*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6, void *VAR_7)
{
 struct stm32_exti_host_data *VAR_8 = VAR_4->host_data;
 struct stm32_exti_chip_data *VAR_9;
 struct irq_fwspec *VAR_10 = VAR_7;
 struct irq_fwspec VAR_11;
 irq_hw_number_t VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = VAR_10->param[0];
 VAR_14 = VAR_12 / VAR_1;
 VAR_9 = &VAR_8->chips_data[VAR_14];

 FUNC_1(VAR_4, VAR_5, VAR_12,
          &VAR_3, VAR_9);

 VAR_13 = FUNC_2(VAR_8->drv_data, VAR_12);
 if (VAR_13 >= 0) {
  VAR_11.fwnode = VAR_4->parent->fwnode;
  VAR_11.param_count = 3;
  VAR_11.param[0] = VAR_0;
  VAR_11.param[1] = VAR_13;
  VAR_11.param[2] = VAR_2;

  return FUNC_0(VAR_4, VAR_5, 1, &VAR_11);
 }

 return 0;
}
