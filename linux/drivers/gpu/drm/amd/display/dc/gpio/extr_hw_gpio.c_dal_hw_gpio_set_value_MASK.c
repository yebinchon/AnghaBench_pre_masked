
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hw_gpio_pin {int mode; } ;
struct hw_gpio {int dummy; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hw_gpio* FUNC_0 (struct hw_gpio_pin const*) ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;

enum gpio_result FUNC_2(
 const struct hw_gpio_pin *VAR_6,
 uint32_t VAR_7)
{
 struct hw_gpio *VAR_8 = FUNC_0(VAR_6);





 switch (VAR_6->mode) {
 case 128:
  FUNC_1(VAR_1, VAR_0, VAR_7);
  return VAR_5;
 case 129:




  FUNC_1(VAR_3, VAR_2, ~VAR_7);
  return VAR_5;
 default:
  return VAR_4;
 }
}
