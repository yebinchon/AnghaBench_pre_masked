
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
struct TYPE_8__ {int UvdBootLevel; } ;
struct TYPE_6__ {int dpm_table_start; } ;
struct vegam_smumgr {TYPE_4__ smc_state_table; TYPE_2__ smu7_data; } ;
struct TYPE_7__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; int device; scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct phm_ppt_v1_information {TYPE_1__* mm_dep_table; } ;
struct TYPE_5__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_6)
{
 struct vegam_smumgr *VAR_7 = (struct vegam_smumgr *)(VAR_6->smu_backend);
 uint32_t VAR_8, VAR_9;
 struct phm_ppt_v1_information *VAR_10 =
   (struct phm_ppt_v1_information *)(VAR_6->pptable);

 VAR_7->smc_state_table.UvdBootLevel = 0;
 if (VAR_10->mm_dep_table->count > 0)
  VAR_7->smc_state_table.UvdBootLevel =
    (uint8_t) (VAR_10->mm_dep_table->count - 1);
 VAR_8 = VAR_7->smu7_data.dpm_table_start + FUNC_2(VAR_4,
      VAR_5);
 VAR_8 /= 4;
 VAR_8 *= 4;
 VAR_9 = FUNC_0(VAR_6->device,
   VAR_0, VAR_8);
 VAR_9 &= 0x00FFFFFF;
 VAR_9 |= VAR_7->smc_state_table.UvdBootLevel << 24;
 FUNC_1(VAR_6->device,
   VAR_0, VAR_8, VAR_9);

 if (!FUNC_3(VAR_6->platform_descriptor.platformCaps,
   VAR_2) ||
  FUNC_3(VAR_6->platform_descriptor.platformCaps,
   VAR_1))
  FUNC_4(VAR_6,
    VAR_3,
    (uint32_t)(1 << VAR_7->smc_state_table.UvdBootLevel));
 return 0;
}
