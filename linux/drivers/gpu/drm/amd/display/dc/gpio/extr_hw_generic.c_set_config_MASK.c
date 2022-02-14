
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_gpio_pin {int dummy; } ;
struct hw_generic {int dummy; } ;
struct TYPE_3__ {int mux_select; int enable_output_from_mux; } ;
struct TYPE_4__ {TYPE_1__ generic_mux; } ;
struct gpio_config_data {TYPE_2__ config; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hw_generic* FUNC_0 (struct hw_gpio_pin*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static enum gpio_result FUNC_2(
 struct hw_gpio_pin *VAR_5,
 const struct gpio_config_data *VAR_6)
{
 struct hw_generic *VAR_7 = FUNC_0(VAR_5);

 if (!VAR_6)
  return VAR_2;

 FUNC_1(VAR_4,
  VAR_0, VAR_6->config.generic_mux.enable_output_from_mux,
  VAR_1, VAR_6->config.generic_mux.mux_select);

 return VAR_3;
}
