
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc {int pin_data; int pin_clock; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

enum gpio_result FUNC_2(
 struct ddc *VAR_1,
 enum gpio_mode VAR_2)
{
 enum gpio_result VAR_3;

 enum gpio_mode VAR_4 =
  FUNC_1(VAR_1->pin_data);

 VAR_3 = FUNC_0(VAR_1->pin_data, VAR_2);






 if (VAR_3 != VAR_0)
  goto failure;

 VAR_3 = FUNC_0(VAR_1->pin_clock, VAR_2);

 if (VAR_3 == VAR_0)
  return VAR_3;

 FUNC_0(VAR_1->pin_clock, VAR_4);

failure:
 FUNC_0(VAR_1->pin_data, VAR_4);

 return VAR_3;
}
