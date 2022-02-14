
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_service {int dummy; } ;
struct gpio {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 struct gpio* FUNC_1 (struct gpio_service*,int,int ,int ) ;

struct gpio *FUNC_2(
 struct gpio_service *VAR_1,
 enum gpio_id VAR_2,
 uint32_t VAR_3)
{
 struct gpio *VAR_4;

 switch (VAR_2) {
 case 128:
 case 129:
 break;
 default:
  VAR_2 = 128;
  FUNC_0(0);
  return ((void*)0);
 }

 VAR_4 = FUNC_1(
  VAR_1, VAR_2, VAR_3, VAR_0);

 if (VAR_4)
  return VAR_4;

 FUNC_0(0);
 return ((void*)0);
}
