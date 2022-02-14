
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio {int dummy; } ;
struct dc_link {TYPE_1__* ctx; int link_id; } ;
typedef enum hpd_source_id { ____Placeholder_hpd_source_id } hpd_source_id ;
struct TYPE_2__ {int gpio_service; int dc_bios; } ;


 int FUNC_0 () ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct gpio**) ;
 int FUNC_2 (struct gpio*) ;
 struct gpio* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static enum hpd_source_id FUNC_4(
  struct dc_link *VAR_7)
{
 struct gpio *VAR_8;
 enum hpd_source_id VAR_9 = VAR_6;

 VAR_8 = FUNC_3(VAR_7->ctx->dc_bios, VAR_7->link_id, VAR_7->ctx->gpio_service);

 if (VAR_8) {
  switch (FUNC_2(VAR_8)) {
  case 133:
   VAR_9 = VAR_0;
  break;
  case 132:
   VAR_9 = VAR_1;
  break;
  case 131:
   VAR_9 = VAR_2;
  break;
  case 130:
   VAR_9 = VAR_3;
  break;
  case 129:
   VAR_9 = VAR_4;
  break;
  case 128:
   VAR_9 = VAR_5;
  break;
  default:
   FUNC_0();
  break;
  }

  FUNC_1(&VAR_8);
 }

 return VAR_9;
}
