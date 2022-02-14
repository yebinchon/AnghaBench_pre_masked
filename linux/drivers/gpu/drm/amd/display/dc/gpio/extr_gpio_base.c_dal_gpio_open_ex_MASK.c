
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ddc; } ;
struct gpio {int mode; TYPE_1__ hw_container; scalar_t__ pin; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gpio*) ;

enum gpio_result FUNC_2(
 struct gpio *VAR_2,
 enum gpio_mode VAR_3)
{
 if (VAR_2->pin) {
  FUNC_0(0);
  return VAR_0;
 }


 if (!VAR_2->hw_container.ddc) {
  FUNC_0(0);
  return VAR_1;
 }
 VAR_2->mode = VAR_3;

 return FUNC_1(VAR_2);
}
