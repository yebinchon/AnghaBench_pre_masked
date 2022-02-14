
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_hpd_config {scalar_t__ delay_on_disconnect; scalar_t__ delay_on_connect; } ;
struct gpio {int dummy; } ;
struct dc_link {int is_hpd_filter_disabled; TYPE_1__* ctx; int link_id; } ;
struct TYPE_2__ {int gpio_service; int dc_bios; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gpio*) ;
 int FUNC_2 (struct gpio**) ;
 scalar_t__ FUNC_3 (struct gpio*,int ) ;
 int FUNC_4 (struct gpio*,struct gpio_hpd_config*) ;
 struct gpio* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dc_link*) ;

void FUNC_7(struct dc_link *VAR_2, bool VAR_3)
{
 struct gpio *VAR_4;

 if (VAR_3) {
  VAR_2->is_hpd_filter_disabled = 0;
  FUNC_6(VAR_2);
 } else {
  VAR_2->is_hpd_filter_disabled = 1;

  VAR_4 = FUNC_5(VAR_2->ctx->dc_bios, VAR_2->link_id, VAR_2->ctx->gpio_service);

  if (!VAR_4)
   return;


  if (FUNC_3(VAR_4, VAR_0) == VAR_1) {
   struct gpio_hpd_config VAR_5;

   VAR_5.delay_on_connect = 0;
   VAR_5.delay_on_disconnect = 0;

   FUNC_4(VAR_4, &VAR_5);

   FUNC_1(VAR_4);
  } else {
   FUNC_0(0);
  }

  FUNC_2(&VAR_4);
 }
}
