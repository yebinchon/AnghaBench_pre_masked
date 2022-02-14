
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hw_gpio_pin {int mode; } ;
struct hw_gpio {int dummy; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 struct hw_gpio* FUNC_0 (struct hw_gpio_pin const*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

enum gpio_result FUNC_2(
 const struct hw_gpio_pin *VAR_4,
 uint32_t *VAR_5)
{
 const struct hw_gpio *VAR_6 = FUNC_0(VAR_4);

 enum gpio_result VAR_7 = VAR_1;

 switch (VAR_4->mode) {
 case 129:
 case 128:
 case 130:
 case 131:
  FUNC_1(VAR_3, VAR_2, VAR_5);
  break;
 default:
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
