
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_gpio_pin {TYPE_1__* funcs; int en; int id; } ;
struct gpio_service {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct hw_gpio_pin*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio_service*,int ,int ) ;
 int FUNC_2 (struct hw_gpio_pin*) ;

void FUNC_3(
 struct gpio_service *VAR_0,
 struct hw_gpio_pin **VAR_1)
{
 struct hw_gpio_pin *VAR_2;

 if (!VAR_1) {
  FUNC_0(0);
  return;
 }

 VAR_2 = *VAR_1;

 if (VAR_2) {
  FUNC_1(VAR_0, VAR_2->id, VAR_2->en);

  VAR_2->funcs->close(VAR_2);

  *VAR_1 = ((void*)0);
 }
}
