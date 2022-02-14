
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct gpio {TYPE_2__* pin; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_value ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;

enum gpio_result FUNC_2(
 const struct gpio *VAR_1,
 uint32_t *VAR_2)
{
 if (!VAR_1->pin) {
  FUNC_0();
  return VAR_0;
 }

 return VAR_1->pin->funcs->get_value(VAR_1->pin, VAR_2);
}
