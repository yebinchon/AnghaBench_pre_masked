
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct gpio_service {TYPE_2__ translate; } ;
struct gpio_pin_info {int mask; int offset; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
struct TYPE_3__ {int (* id_to_offset ) (int,int ,struct gpio_pin_info*) ;} ;


 int FUNC_0 (int,int ,struct gpio_pin_info*) ;

struct gpio_pin_info FUNC_1(
 struct gpio_service *VAR_0,
 enum gpio_id VAR_1,
 uint32_t VAR_2)
{
 struct gpio_pin_info VAR_3;

 if (VAR_0->translate.funcs->id_to_offset) {
  VAR_0->translate.funcs->id_to_offset(VAR_1, VAR_2, &VAR_3);
 } else {
  VAR_3.mask = 0xFFFFFFFF;
  VAR_3.offset = 0xFFFFFFFF;
 }

 return VAR_3;
}
