
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct gpio_service {TYPE_2__ translate; } ;
struct gpio {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
struct TYPE_3__ {int (* offset_to_id ) (int ,int ,int*,int *) ;} ;


 int FUNC_0 (int) ;
 struct gpio* FUNC_1 (struct gpio_service*,int,int ) ;
 int FUNC_2 (int ,int ,int*,int *) ;

struct gpio *FUNC_3(
 struct gpio_service *VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2)
{
 enum gpio_id VAR_3;
 uint32_t VAR_4;

 if (!VAR_0->translate.funcs->offset_to_id(VAR_1, VAR_2, &VAR_3, &VAR_4)) {
  FUNC_0(0);
  return ((void*)0);
 }

 return FUNC_1(VAR_0, VAR_3, VAR_4);
}
