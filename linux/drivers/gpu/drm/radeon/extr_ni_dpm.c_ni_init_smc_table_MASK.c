
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct rv7xx_power_info {int sram_end; int state_table_start; scalar_t__ mem_gddr5; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_8__ {int platform_caps; struct radeon_ps* boot_ps; } ;
struct TYPE_9__ {int int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_10__ {int initialState; int ULVState; int driverState; int systemFlags; int thermalProtectType; } ;
struct ni_power_info {TYPE_3__ smc_statetable; } ;
typedef TYPE_3__ NISLANDS_SMC_STATETABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,int ) ;
 struct ni_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,TYPE_3__*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,TYPE_3__*) ;
 int FUNC_5 (struct radeon_device*,TYPE_3__*) ;
 int FUNC_6 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_7 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_11)
{
 struct rv7xx_power_info *VAR_12 = FUNC_7(VAR_11);
 struct ni_power_info *VAR_13 = FUNC_2(VAR_11);
 int VAR_14;
 struct radeon_ps *VAR_15 = VAR_11->pm.dpm.boot_ps;
 NISLANDS_SMC_STATETABLE *VAR_16 = &VAR_13->smc_statetable;

 FUNC_0(VAR_16, 0, sizeof(NISLANDS_SMC_STATETABLE));

 FUNC_5(VAR_11, VAR_16);

 switch (VAR_11->pm.int_thermal_type) {
 case 129:
 case 130:
  VAR_16->thermalProtectType = VAR_9;
  break;
 case 128:
  VAR_16->thermalProtectType = VAR_10;
  break;
 default:
  VAR_16->thermalProtectType = VAR_8;
  break;
 }

 if (VAR_11->pm.dpm.platform_caps & VAR_0)
  VAR_16->systemFlags |= VAR_5;

 if (VAR_11->pm.dpm.platform_caps & VAR_1)
  VAR_16->systemFlags |= VAR_6;

 if (VAR_11->pm.dpm.platform_caps & VAR_2)
  VAR_16->systemFlags |= VAR_7;

 if (VAR_12->mem_gddr5)
  VAR_16->systemFlags |= VAR_4;

 VAR_14 = FUNC_4(VAR_11, VAR_15, VAR_16);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_16);
 if (VAR_14)
  return VAR_14;

 VAR_16->driverState = VAR_16->initialState;

 VAR_16->ULVState = VAR_16->initialState;

 VAR_14 = FUNC_1(VAR_11, VAR_15,
           VAR_3);
 if (VAR_14)
  return VAR_14;

 return FUNC_6(VAR_11, VAR_12->state_table_start, (u8 *)VAR_16,
           sizeof(NISLANDS_SMC_STATETABLE), VAR_12->sram_end);
}
