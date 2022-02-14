
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* display_config; } ;
struct TYPE_2__ {int num_display; int multi_monitor_in_sync; } ;


 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int
FUNC_1(struct pp_hwmgr *VAR_0)
{
 if (VAR_0->display_config->num_display > 1 &&
   !VAR_0->display_config->multi_monitor_in_sync)
  FUNC_0(VAR_0, 0);

 return 0;
}
