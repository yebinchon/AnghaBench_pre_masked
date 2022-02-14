
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_hpd_config {int delay_on_connect; int delay_on_disconnect; } ;
struct gpio {int dummy; } ;
struct dc_link {int connector_signal; TYPE_1__* ctx; int link_id; scalar_t__ is_hpd_filter_disabled; } ;
struct TYPE_2__ {int gpio_service; int dc_bios; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;







 int FUNC_1 (struct gpio*) ;
 int FUNC_2 (struct gpio**) ;
 scalar_t__ FUNC_3 (struct gpio*,int ) ;
 int FUNC_4 (struct gpio*,struct gpio_hpd_config*) ;
 struct gpio* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_6(
 const struct dc_link *VAR_2)
{
 bool VAR_3 = 0;

 struct gpio *VAR_4;

 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_2->is_hpd_filter_disabled)
  return 0;

 switch (VAR_2->connector_signal) {
 case 131:
 case 132:
 case 129:

  VAR_5 = 500;
  VAR_6 = 100;
  break;
 case 134:
 case 133:







  VAR_5 = 80;
  VAR_6 = 0;
  break;
 case 128:
 case 130:
 default:

  return 0;
 }


 VAR_4 = FUNC_5(VAR_2->ctx->dc_bios, VAR_2->link_id, VAR_2->ctx->gpio_service);

 if (!VAR_4)
  return VAR_3;


 if (FUNC_3(VAR_4, VAR_0) == VAR_1) {
  struct gpio_hpd_config VAR_7;

  VAR_7.delay_on_connect = VAR_5;
  VAR_7.delay_on_disconnect = VAR_6;

  FUNC_4(VAR_4, &VAR_7);

  FUNC_1(VAR_4);

  VAR_3 = 1;
 } else {
  FUNC_0(0);
 }


 FUNC_2(&VAR_4);

 return VAR_3;
}
