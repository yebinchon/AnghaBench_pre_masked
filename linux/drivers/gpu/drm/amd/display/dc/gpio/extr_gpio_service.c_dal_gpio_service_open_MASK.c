
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct hw_gpio_pin {TYPE_3__* funcs; } ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct gpio_service {TYPE_2__ factory; int * busyness; } ;
struct gpio {int id; int mode; struct hw_gpio_pin* pin; int en; struct gpio_service* service; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
struct TYPE_6__ {int (* open ) (struct hw_gpio_pin*,int) ;} ;
struct TYPE_4__ {int (* define_hpd_registers ) (struct hw_gpio_pin*,int ) ;struct hw_gpio_pin* (* get_hpd_pin ) (struct gpio*) ;int (* define_generic_registers ) (struct hw_gpio_pin*,int ) ;struct hw_gpio_pin* (* get_generic_pin ) (struct gpio*) ;int (* define_ddc_registers ) (struct hw_gpio_pin*,int ) ;struct hw_gpio_pin* (* get_ddc_pin ) (struct gpio*) ;} ;


 int FUNC_0 (int) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gpio_service*,struct hw_gpio_pin**) ;
 scalar_t__ FUNC_2 (struct gpio_service*,int,int ) ;
 int FUNC_3 (struct gpio_service*,int,int ) ;
 struct hw_gpio_pin* FUNC_4 (struct gpio*) ;
 int FUNC_5 (struct hw_gpio_pin*,int ) ;
 struct hw_gpio_pin* FUNC_6 (struct gpio*) ;
 int FUNC_7 (struct hw_gpio_pin*,int ) ;
 struct hw_gpio_pin* FUNC_8 (struct gpio*) ;
 int FUNC_9 (struct hw_gpio_pin*,int ) ;
 struct hw_gpio_pin* FUNC_10 (struct gpio*) ;
 int FUNC_11 (struct hw_gpio_pin*,int ) ;
 int FUNC_12 (struct hw_gpio_pin*,int) ;

enum gpio_result FUNC_13(
 struct gpio *VAR_4)
{
 struct gpio_service *VAR_5 = VAR_4->service;
 enum gpio_id VAR_6 = VAR_4->id;
 uint32_t VAR_7 = VAR_4->en;
 enum gpio_mode VAR_8 = VAR_4->mode;

 struct hw_gpio_pin **VAR_9 = &VAR_4->pin;


 if (!VAR_5->busyness[VAR_6]) {
  FUNC_0(0);
  return VAR_3;
 }

 if (FUNC_2(VAR_5, VAR_6, VAR_7)) {
  FUNC_0(0);
  return VAR_0;
 }

 switch (VAR_6) {
 case 132:
  *VAR_9 = VAR_5->factory.funcs->get_ddc_pin(VAR_4);
  VAR_5->factory.funcs->define_ddc_registers(*VAR_9, VAR_7);
 break;
 case 133:
  *VAR_9 = VAR_5->factory.funcs->get_ddc_pin(VAR_4);
  VAR_5->factory.funcs->define_ddc_registers(*VAR_9, VAR_7);
 break;
 case 131:
  *VAR_9 = VAR_5->factory.funcs->get_generic_pin(VAR_4);
  VAR_5->factory.funcs->define_generic_registers(*VAR_9, VAR_7);
 break;
 case 129:
  *VAR_9 = VAR_5->factory.funcs->get_hpd_pin(VAR_4);
  VAR_5->factory.funcs->define_hpd_registers(*VAR_9, VAR_7);
 break;


 case 128:
 case 130:
 break;
 default:
  FUNC_0(0);
  return VAR_1;
 }

 if (!*VAR_9) {
  FUNC_0(0);
  return VAR_1;
 }

 if (!(*VAR_9)->funcs->open(*VAR_9, VAR_8)) {
  FUNC_0(0);
  FUNC_1(VAR_5, VAR_9);
  return VAR_3;
 }

 FUNC_3(VAR_5, VAR_6, VAR_7);
 return VAR_2;
}
