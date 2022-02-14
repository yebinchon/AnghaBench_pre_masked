
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ smu_backend; } ;
struct ci_smumgr {int power_tune_table; } ;
struct SMU7_Discrete_PmFuses {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *,int,int ) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_9 (struct pp_hwmgr*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct pp_hwmgr *VAR_6)
{
 struct ci_smumgr *VAR_7 = (struct ci_smumgr *)(VAR_6->smu_backend);
 uint32_t VAR_8;
 int VAR_9 = 0;

 if (FUNC_11(VAR_6->platform_descriptor.platformCaps,
   VAR_1)) {
  if (FUNC_9(VAR_6,
    VAR_4 +
    FUNC_10(VAR_5, VAR_2),
    &VAR_8, VAR_3)) {
   FUNC_12("Attempt to get pm_fuse_table_offset Failed!\n");
   return -VAR_0;
  }


  VAR_9 = FUNC_3(VAR_6);

  VAR_9 |= FUNC_8(VAR_6);

  VAR_9 |= FUNC_6(VAR_6);

  VAR_9 |= FUNC_7(VAR_6);

  VAR_9 |= FUNC_4(VAR_6, VAR_8);

  VAR_9 |= FUNC_5(VAR_6, VAR_8);

  VAR_9 |= FUNC_1(VAR_6);

  VAR_9 |= FUNC_2(VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_0(VAR_6, VAR_8,
    (uint8_t *)&VAR_7->power_tune_table,
    sizeof(struct SMU7_Discrete_PmFuses), VAR_3);
 }
 return VAR_9;
}
