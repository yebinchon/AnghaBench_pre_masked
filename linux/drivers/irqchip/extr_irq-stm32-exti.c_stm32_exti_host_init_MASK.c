
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_exti_host_data {struct stm32_exti_host_data* chips_data; int base; struct stm32_exti_drv_data const* drv_data; } ;
struct stm32_exti_drv_data {int bank_nr; } ;
struct stm32_exti_chip_data {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct stm32_exti_host_data* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct stm32_exti_host_data*) ;
 struct stm32_exti_host_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (char*,struct device_node*) ;
 struct stm32_exti_host_data* VAR_1 ;

__attribute__((used)) static struct
stm32_exti_host_data *FUNC_5(const struct stm32_exti_drv_data *VAR_2,
        struct device_node *VAR_3)
{
 struct stm32_exti_host_data *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->drv_data = VAR_2;
 VAR_4->chips_data = FUNC_0(VAR_2->bank_nr,
     sizeof(struct stm32_exti_chip_data),
     VAR_0);
 if (!VAR_4->chips_data)
  goto free_host_data;

 VAR_4->base = FUNC_3(VAR_3, 0);
 if (!VAR_4->base) {
  FUNC_4("%pOF: Unable to map registers\n", VAR_3);
  goto free_chips_data;
 }

 VAR_1 = VAR_4;

 return VAR_4;

free_chips_data:
 FUNC_1(VAR_4->chips_data);
free_host_data:
 FUNC_1(VAR_4);

 return ((void*)0);
}
