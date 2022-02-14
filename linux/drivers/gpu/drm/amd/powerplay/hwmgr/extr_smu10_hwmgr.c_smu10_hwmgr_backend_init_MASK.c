
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu10_hwmgr {int dummy; } ;
struct TYPE_3__ {int engineClock; int memoryClock; } ;
struct TYPE_4__ {int minimumClocksReductionPercentage; TYPE_1__ clockStep; scalar_t__ vbiosInterruptId; void* hardwarePerformanceLevels; void* hardwareActivityPerformanceLevels; } ;
struct pp_hwmgr {int pstate_sclk; int pstate_mclk; TYPE_2__ platform_descriptor; struct smu10_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct smu10_hwmgr* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_5)
{
 int VAR_6 = 0;
 struct smu10_hwmgr *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct smu10_hwmgr), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_5->backend = VAR_7;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 != 0) {
  FUNC_1("smu10_initialize_dpm_defaults failed\n");
  return VAR_6;
 }

 FUNC_5(VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 != 0) {
  FUNC_1("smu10_get_system_info_data failed\n");
  return VAR_6;
 }

 FUNC_2(VAR_5);

 VAR_5->platform_descriptor.hardwareActivityPerformanceLevels =
      VAR_2;

 VAR_5->platform_descriptor.hardwarePerformanceLevels =
      VAR_2;

 VAR_5->platform_descriptor.vbiosInterruptId = 0;

 VAR_5->platform_descriptor.clockStep.engineClock = 500;

 VAR_5->platform_descriptor.clockStep.memoryClock = 500;

 VAR_5->platform_descriptor.minimumClocksReductionPercentage = 50;

 VAR_5->pstate_sclk = VAR_4 * 100;
 VAR_5->pstate_mclk = VAR_3 * 100;

 return VAR_6;
}
