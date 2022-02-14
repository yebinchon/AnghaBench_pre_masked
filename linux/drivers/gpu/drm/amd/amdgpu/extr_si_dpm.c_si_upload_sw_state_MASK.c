
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si_ps {int performance_level_count; } ;
struct TYPE_2__ {int driverState; } ;
struct si_power_info {int state_table_start; int sram_end; TYPE_1__ smc_statetable; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef int SISLANDS_SMC_SWSTATE ;
typedef int SISLANDS_SMC_HW_PERFORMANCE_LEVEL ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int,int *,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ps*,int *) ;
 struct si_power_info* FUNC_4 (struct amdgpu_device*) ;
 struct si_ps* FUNC_5 (struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_2,
         struct amdgpu_ps *VAR_3)
{
 struct si_power_info *VAR_4 = FUNC_4(VAR_2);
 struct si_ps *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;
 u32 VAR_7 = VAR_4->state_table_start +
  FUNC_2(VAR_0, VAR_1);
 u32 VAR_8 = sizeof(SISLANDS_SMC_SWSTATE) +
  ((VAR_5->performance_level_count - 1) *
   sizeof(SISLANDS_SMC_HW_PERFORMANCE_LEVEL));
 SISLANDS_SMC_SWSTATE *VAR_9 = &VAR_4->smc_statetable.driverState;

 FUNC_1(VAR_9, 0, VAR_8);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_9);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_2, VAR_7, (u8 *)VAR_9,
        VAR_8, VAR_4->sram_end);
}
