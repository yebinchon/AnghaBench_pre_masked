
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu8_hwmgr {int dummy; } ;
struct TYPE_2__ {int hardwareActivityPerformanceLevels; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smu8_hwmgr* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_3)
{
 int VAR_4 = 0;
 struct smu8_hwmgr *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct smu8_hwmgr), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_3->backend = VAR_5;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 != 0) {
  FUNC_1("smu8_initialize_dpm_defaults failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 != 0) {
  FUNC_1("smu8_get_system_info_data failed\n");
  return VAR_4;
 }

 FUNC_2(VAR_3);

 VAR_3->platform_descriptor.hardwareActivityPerformanceLevels = VAR_2;

 return VAR_4;
}
