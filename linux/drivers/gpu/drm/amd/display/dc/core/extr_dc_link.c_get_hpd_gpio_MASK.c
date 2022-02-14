
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graphics_object_id {int dummy; } ;
struct graphics_object_hpd_info {int hpd_int_gpio_uid; } ;
struct gpio_service {int dummy; } ;
struct gpio_pin_info {int mask; int offset; } ;
struct gpio {int dummy; } ;
struct dc_bios {TYPE_1__* funcs; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_2__ {scalar_t__ (* get_hpd_info ) (struct dc_bios*,struct graphics_object_id,struct graphics_object_hpd_info*) ;int (* get_gpio_pin_info ) (struct dc_bios*,int ,struct gpio_pin_info*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gpio* FUNC_1 (struct gpio_service*,int ,int ) ;
 scalar_t__ FUNC_2 (struct dc_bios*,struct graphics_object_id,struct graphics_object_hpd_info*) ;
 int FUNC_3 (struct dc_bios*,int ,struct gpio_pin_info*) ;

struct gpio *FUNC_4(struct dc_bios *VAR_2,
  struct graphics_object_id VAR_3,
  struct gpio_service *VAR_4)
{
 enum bp_result VAR_5;
 struct graphics_object_hpd_info VAR_6;
 struct gpio_pin_info VAR_7;

 if (VAR_2->funcs->get_hpd_info(VAR_2, VAR_3, &VAR_6) != VAR_1)
  return ((void*)0);

 VAR_5 = VAR_2->funcs->get_gpio_pin_info(VAR_2,
  VAR_6.hpd_int_gpio_uid, &VAR_7);

 if (VAR_5 != VAR_1) {
  FUNC_0(VAR_5 == VAR_0);
  return ((void*)0);
 }

 return FUNC_1(
  VAR_4,
  VAR_7.offset,
  VAR_7.mask);
}
