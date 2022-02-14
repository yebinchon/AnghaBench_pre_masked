
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gpio_pin_info {int dummy; } ;
struct gpio {int en; int id; TYPE_3__* service; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ translate; } ;
struct TYPE_4__ {scalar_t__ (* id_to_offset ) (int ,int ,struct gpio_pin_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct gpio_pin_info*) ;

enum gpio_result FUNC_1(
 const struct gpio *VAR_2,
 struct gpio_pin_info *VAR_3)
{
 return VAR_2->service->translate.funcs->id_to_offset(
  VAR_2->id, VAR_2->en, VAR_3) ?
  VAR_1 : VAR_0;
}
