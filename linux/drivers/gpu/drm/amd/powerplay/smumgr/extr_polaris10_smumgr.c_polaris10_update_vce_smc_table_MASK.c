
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; int device; scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct TYPE_8__ {int VceBootLevel; } ;
struct TYPE_6__ {int dpm_table_start; } ;
struct polaris10_smumgr {TYPE_4__ smc_state_table; TYPE_2__ smu7_data; } ;
struct phm_ppt_v1_information {TYPE_1__* mm_dep_table; } ;
struct TYPE_5__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_5)
{
 struct polaris10_smumgr *VAR_6 = (struct polaris10_smumgr *)(VAR_5->smu_backend);
 uint32_t VAR_7, VAR_8;
 struct phm_ppt_v1_information *VAR_9 =
   (struct phm_ppt_v1_information *)(VAR_5->pptable);

 if (FUNC_3(VAR_5->platform_descriptor.platformCaps,
     VAR_1))
  VAR_6->smc_state_table.VceBootLevel =
   (uint8_t) (VAR_9->mm_dep_table->count - 1);
 else
  VAR_6->smc_state_table.VceBootLevel = 0;

 VAR_7 = VAR_6->smu7_data.dpm_table_start +
     FUNC_2(VAR_3, VAR_4);
 VAR_7 /= 4;
 VAR_7 *= 4;
 VAR_8 = FUNC_0(VAR_5->device,
   VAR_0, VAR_7);
 VAR_8 &= 0xFF00FFFF;
 VAR_8 |= VAR_6->smc_state_table.VceBootLevel << 16;
 FUNC_1(VAR_5->device,
   VAR_0, VAR_7, VAR_8);

 if (FUNC_3(VAR_5->platform_descriptor.platformCaps, VAR_1))
  FUNC_4(VAR_5,
    VAR_2,
    (uint32_t)1 << VAR_6->smc_state_table.VceBootLevel);
 return 0;
}
