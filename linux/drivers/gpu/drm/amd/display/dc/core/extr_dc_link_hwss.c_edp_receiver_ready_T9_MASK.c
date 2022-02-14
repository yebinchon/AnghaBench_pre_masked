
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc_link {TYPE_3__* local_sink; } ;
typedef int sinkstatus ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
typedef int edpRev ;
struct TYPE_4__ {int extra_delay_backlight_off; } ;
struct TYPE_5__ {TYPE_1__ panel_patch; } ;
struct TYPE_6__ {TYPE_2__ edid_caps; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_link*,int ,unsigned char*,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct dc_link *VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned char VAR_6 = 0;
 unsigned char VAR_7 = 0;
 enum dc_status VAR_8 = VAR_0;
 VAR_8 = FUNC_0(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7));
 if (VAR_7 < VAR_1)
  return 1;

 do {
  VAR_6 = 1;
  VAR_8 = FUNC_0(VAR_4, VAR_3, &VAR_6, sizeof(VAR_6));
  if (VAR_6 == 0)
   break;
  if (VAR_8 != VAR_0)
   break;
  FUNC_1(100);
 } while (++VAR_5 < 50);

 if (VAR_4->local_sink->edid_caps.panel_patch.extra_delay_backlight_off > 0)
  FUNC_1(VAR_4->local_sink->edid_caps.panel_patch.extra_delay_backlight_off * 1000);

 return VAR_8;
}
