
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int initialState; int driverState; int systemFlags; int thermalProtectType; } ;
struct rv7xx_power_info {int sram_end; int state_table_start; scalar_t__ mem_gddr5; TYPE_4__ smc_statetable; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_10__ {int platform_caps; } ;
struct TYPE_11__ {int int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_12__ {int supported; } ;
struct evergreen_power_info {TYPE_3__ ulv; scalar_t__ sclk_deep_sleep; } ;
typedef TYPE_4__ RV770_SMC_STATETABLE ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_3 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,TYPE_4__*) ;
 int FUNC_5 (struct radeon_device*,TYPE_4__*) ;
 struct evergreen_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_12,
         struct radeon_ps *VAR_13)
{
 struct rv7xx_power_info *VAR_14 = FUNC_9(VAR_12);
 struct evergreen_power_info *VAR_15 = FUNC_6(VAR_12);
 RV770_SMC_STATETABLE *VAR_16 = &VAR_14->smc_statetable;
 int VAR_17;

 FUNC_7(VAR_16, 0, sizeof(RV770_SMC_STATETABLE));

 FUNC_5(VAR_12, VAR_16);

 switch (VAR_12->pm.int_thermal_type) {
 case 129:
 case 130:
  VAR_16->thermalProtectType = VAR_8;
  break;
 case 128:
  VAR_16->thermalProtectType = VAR_9;
  break;
 default:
  VAR_16->thermalProtectType = VAR_7;
  break;
 }

 if (VAR_12->pm.dpm.platform_caps & VAR_0)
  VAR_16->systemFlags |= VAR_4;

 if (VAR_12->pm.dpm.platform_caps & VAR_1)
  VAR_16->systemFlags |= VAR_5;

 if (VAR_12->pm.dpm.platform_caps & VAR_2)
  VAR_16->systemFlags |= VAR_6;

 if (VAR_14->mem_gddr5)
  VAR_16->systemFlags |= VAR_3;

 VAR_17 = FUNC_4(VAR_12, VAR_13, VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_15->sclk_deep_sleep)
  FUNC_1(VAR_11, FUNC_0(32),
    ~VAR_10);

 VAR_17 = FUNC_2(VAR_12, VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_15->ulv.supported) {
  VAR_17 = FUNC_3(VAR_12, VAR_16);
  if (VAR_17)
   VAR_15->ulv.supported = 0;
 }

 VAR_16->driverState = VAR_16->initialState;

 return FUNC_8(VAR_12,
           VAR_14->state_table_start,
           (u8 *)VAR_16,
           sizeof(RV770_SMC_STATETABLE),
           VAR_14->sram_end);
}
