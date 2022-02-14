
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ en; } ;
struct hw_gpio {TYPE_3__ store; } ;
struct TYPE_7__ {int type; int data_en_bit_present; int clock_en_bit_present; } ;
struct TYPE_8__ {TYPE_1__ ddc; } ;
struct gpio_config_data {TYPE_2__ config; int type; } ;
struct ddc {TYPE_4__* pin_data; TYPE_4__* pin_clock; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;
typedef enum gpio_ddc_config_type { ____Placeholder_gpio_ddc_config_type } gpio_ddc_config_type ;
struct TYPE_10__ {int pin; } ;


 int FUNC_0 () ;
 struct hw_gpio* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,struct gpio_config_data*) ;

enum gpio_result FUNC_5(
 struct ddc *VAR_4,
 enum gpio_mode VAR_5,
 enum gpio_ddc_config_type VAR_6)
{
 enum gpio_result VAR_7;

 struct gpio_config_data VAR_8;
 struct hw_gpio *VAR_9;
 struct hw_gpio *VAR_10;

 VAR_7 = FUNC_3(VAR_4->pin_data, VAR_5);

 if (VAR_7 != VAR_3) {
  FUNC_0();
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_4->pin_clock, VAR_5);

 if (VAR_7 != VAR_3) {
  FUNC_0();
  goto failure;
 }





 if (VAR_5 == VAR_2)


  VAR_8.type = VAR_1;
 else
  VAR_8.type = VAR_0;

 VAR_8.config.ddc.type = VAR_6;

 VAR_9 = FUNC_1(VAR_4->pin_data->pin);
 VAR_10 = FUNC_1(VAR_4->pin_clock->pin);

 VAR_8.config.ddc.data_en_bit_present = VAR_9->store.en != 0;
 VAR_8.config.ddc.clock_en_bit_present = VAR_10->store.en != 0;

 VAR_7 = FUNC_4(VAR_4->pin_data, &VAR_8);

 if (VAR_7 == VAR_3)
  return VAR_7;

 FUNC_0();

 FUNC_2(VAR_4->pin_clock);

failure:
 FUNC_2(VAR_4->pin_data);

 return VAR_7;
}
