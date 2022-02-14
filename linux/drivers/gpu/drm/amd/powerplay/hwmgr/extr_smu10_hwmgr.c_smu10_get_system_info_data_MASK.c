
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int htc_hyst_lmt; int htc_tmp_lmt; } ;
struct smu10_hwmgr {int thermal_auto_throttling_treshold; TYPE_1__ sys_info; } ;
struct TYPE_4__ {int max_clock_voltage_on_ac; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ backend; } ;


 int FUNC_0 (struct pp_hwmgr*,int *) ;
 int FUNC_1 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0)
{
 struct smu10_hwmgr *VAR_1 = (struct smu10_hwmgr *)VAR_0->backend;

 VAR_1->sys_info.htc_hyst_lmt = 5;
 VAR_1->sys_info.htc_tmp_lmt = 203;

 if (VAR_1->thermal_auto_throttling_treshold == 0)
   VAR_1->thermal_auto_throttling_treshold = 203;

 FUNC_0 (VAR_0,
        &VAR_0->dyn_state.max_clock_voltage_on_ac);

 FUNC_1(VAR_0);

 return 0;
}
