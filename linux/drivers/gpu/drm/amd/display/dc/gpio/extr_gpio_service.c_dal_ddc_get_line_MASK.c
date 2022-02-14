
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc {int pin_data; } ;
typedef enum gpio_ddc_line { ____Placeholder_gpio_ddc_line } gpio_ddc_line ;


 int FUNC_0 (int ) ;

enum gpio_ddc_line FUNC_1(
 const struct ddc *VAR_0)
{
 return (enum gpio_ddc_line)FUNC_0(VAR_0->pin_data);
}
