
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int htc_hyst_lmt; } ;
struct smu8_hwmgr {int thermal_auto_throttling_treshold; TYPE_1__ sys_info; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;
struct PP_TemperatureRange {int max; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct PP_TemperatureRange*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2,
  struct PP_TemperatureRange *VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_2->backend;

 FUNC_0(VAR_3, &VAR_1[0], sizeof(struct PP_TemperatureRange));

 VAR_3->max = (VAR_4->thermal_auto_throttling_treshold +
   VAR_4->sys_info.htc_hyst_lmt) *
   VAR_0;

 return 0;
}
