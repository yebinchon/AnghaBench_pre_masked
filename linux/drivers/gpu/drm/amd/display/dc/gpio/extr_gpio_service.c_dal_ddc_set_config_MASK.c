
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int data_en_bit_present; int clock_en_bit_present; } ;
struct TYPE_4__ {TYPE_1__ ddc; } ;
struct gpio_config_data {TYPE_2__ config; int type; } ;
struct ddc {int pin_data; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_ddc_config_type { ____Placeholder_gpio_ddc_config_type } gpio_ddc_config_type ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gpio_config_data*) ;

enum gpio_result FUNC_1(
 struct ddc *VAR_1,
 enum gpio_ddc_config_type VAR_2)
{
 struct gpio_config_data VAR_3;

 VAR_3.type = VAR_0;

 VAR_3.config.ddc.type = VAR_2;
 VAR_3.config.ddc.data_en_bit_present = 0;
 VAR_3.config.ddc.clock_en_bit_present = 0;

 return FUNC_0(VAR_1->pin_data, &VAR_3);
}
