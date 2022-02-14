
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gpio {int dummy; } ;
struct dc_link {scalar_t__ connector_signal; TYPE_3__* ctx; int link_id; TYPE_2__* dc; } ;
typedef enum dc_connection_type { ____Placeholder_dc_connection_type } dc_connection_type ;
struct TYPE_6__ {int gpio_service; int dc_bios; } ;
struct TYPE_4__ {int (* edp_wait_for_hpd_ready ) (struct dc_link*,int) ;int (* edp_power_control ) (struct dc_link*,int) ;} ;
struct TYPE_5__ {TYPE_1__ hwss; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gpio*) ;
 int FUNC_1 (struct gpio**) ;
 int FUNC_2 (struct gpio*,scalar_t__*) ;
 int FUNC_3 (struct gpio*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct gpio* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct dc_link*,int) ;
 int FUNC_6 (struct dc_link*,int) ;

bool FUNC_7(struct dc_link *VAR_5, enum dc_connection_type *VAR_6)
{
 uint32_t VAR_7 = 0;
 struct gpio *VAR_8;

 if (VAR_5->connector_signal == VAR_2) {
  *VAR_6 = VAR_4;
  return 1;
 }

 if (VAR_5->connector_signal == VAR_1) {

  VAR_5->dc->hwss.edp_power_control(VAR_5, 1);
  VAR_5->dc->hwss.edp_wait_for_hpd_ready(VAR_5, 1);
 }


 VAR_8 = FUNC_4(VAR_5->ctx->dc_bios, VAR_5->link_id, VAR_5->ctx->gpio_service);
 if (VAR_8 == ((void*)0))
  goto hpd_gpio_failure;

 FUNC_3(VAR_8, VAR_0);
 FUNC_2(VAR_8, &VAR_7);
 FUNC_0(VAR_8);
 FUNC_1(&VAR_8);

 if (VAR_7) {
  *VAR_6 = VAR_4;

 } else {
  *VAR_6 = VAR_3;
 }

 return 1;

hpd_gpio_failure:
 return 0;
}
