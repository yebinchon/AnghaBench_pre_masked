
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int initialState; int driverState; int systemFlags; int thermalProtectType; } ;
struct rv7xx_power_info {int sram_end; int state_table_start; scalar_t__ mem_gddr5; TYPE_3__ smc_statetable; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_8__ {int platform_caps; } ;
struct TYPE_9__ {int int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef TYPE_3__ RV770_SMC_STATETABLE ;


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



 int FUNC_0 (struct radeon_device*,TYPE_3__*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,TYPE_3__*) ;
 int FUNC_2 (struct radeon_device*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_10,
      struct radeon_ps *VAR_11)
{
 struct rv7xx_power_info *VAR_12 = FUNC_5(VAR_10);
 RV770_SMC_STATETABLE *VAR_13 = &VAR_12->smc_statetable;
 int VAR_14;

 FUNC_3(VAR_13, 0, sizeof(RV770_SMC_STATETABLE));

 FUNC_2(VAR_10, VAR_13);

 switch (VAR_10->pm.int_thermal_type) {
 case 129:
 case 130:
  VAR_13->thermalProtectType = VAR_8;
  break;
 case 128:
  VAR_13->thermalProtectType = VAR_9;
  break;
 default:
  VAR_13->thermalProtectType = VAR_7;
  break;
 }

 if (VAR_10->pm.dpm.platform_caps & VAR_0)
  VAR_13->systemFlags |= VAR_4;

 if (VAR_10->pm.dpm.platform_caps & VAR_1)
  VAR_13->systemFlags |= VAR_5;

 if (VAR_10->pm.dpm.platform_caps & VAR_2)
  VAR_13->systemFlags |= VAR_6;

 if (VAR_12->mem_gddr5)
  VAR_13->systemFlags |= VAR_3;

 VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_10, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_13->driverState = VAR_13->initialState;

 return FUNC_4(VAR_10,
           VAR_12->state_table_start,
           (u8 *)VAR_13, sizeof(RV770_SMC_STATETABLE),
           VAR_12->sram_end);
}
