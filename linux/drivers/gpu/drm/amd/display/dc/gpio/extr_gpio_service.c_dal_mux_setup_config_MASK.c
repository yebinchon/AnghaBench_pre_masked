
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_generic_mux_config {int dummy; } ;
struct TYPE_2__ {struct gpio_generic_mux_config generic_mux; } ;
struct gpio_config_data {int type; TYPE_1__ config; } ;
struct gpio {int dummy; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio*,struct gpio_config_data*) ;

enum gpio_result FUNC_1(
 struct gpio *VAR_2,
 struct gpio_generic_mux_config *VAR_3)
{
 struct gpio_config_data VAR_4;

 if (!VAR_3)
  return VAR_1;

 VAR_4.config.generic_mux = *VAR_3;
 VAR_4.type = VAR_0;

 return FUNC_0(VAR_2, &VAR_4);
}
