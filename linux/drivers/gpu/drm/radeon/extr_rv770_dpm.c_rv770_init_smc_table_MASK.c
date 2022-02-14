
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int sclk; } ;
struct rv7xx_ps {TYPE_1__ low; } ;
struct TYPE_16__ {int initialState; int driverState; int systemFlags; int extraFlags; int thermalProtectType; } ;
struct rv7xx_power_info {int sram_end; int state_table_start; scalar_t__ mem_gddr5; int boot_sclk; TYPE_4__ smc_statetable; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_14__ {int platform_caps; } ;
struct TYPE_15__ {int int_thermal_type; TYPE_2__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ pm; } ;
typedef TYPE_4__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*,TYPE_4__*) ;
 int FUNC_3 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_4 (struct radeon_device*,int ,int const*,int,int ) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_6 (struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,TYPE_4__*) ;
 int FUNC_9 (struct radeon_device*,TYPE_4__*) ;
 int FUNC_10 (struct radeon_device*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_15,
    struct radeon_ps *VAR_16)
{
 struct rv7xx_power_info *VAR_17 = FUNC_5(VAR_15);
 struct rv7xx_ps *VAR_18 = FUNC_6(VAR_16);
 RV770_SMC_STATETABLE *VAR_19 = &VAR_17->smc_statetable;
 int VAR_20;

 FUNC_0(VAR_19, 0, sizeof(RV770_SMC_STATETABLE));

 VAR_17->boot_sclk = VAR_18->low.sclk;

 FUNC_10(VAR_15, VAR_19);
 FUNC_9(VAR_15, VAR_19);

 switch (VAR_15->pm.int_thermal_type) {
 case 128:
 case 131:
  VAR_19->thermalProtectType = VAR_13;
  break;
 case 129:
  VAR_19->thermalProtectType = VAR_14;
  break;
 case 130:
 default:
  VAR_19->thermalProtectType = VAR_12;
  break;
 }

 if (VAR_15->pm.dpm.platform_caps & VAR_2) {
  VAR_19->systemFlags |= VAR_10;

  if (VAR_15->pm.dpm.platform_caps & VAR_0)
   VAR_19->extraFlags |= VAR_8;

  if (VAR_15->pm.dpm.platform_caps & VAR_1)
   VAR_19->extraFlags |= VAR_7;
 }

 if (VAR_15->pm.dpm.platform_caps & VAR_3)
  VAR_19->systemFlags |= VAR_11;

 if (VAR_17->mem_gddr5)
  VAR_19->systemFlags |= VAR_9;

 if ((VAR_15->family == VAR_5) || (VAR_15->family == VAR_4))
  VAR_20 = FUNC_2(VAR_15, VAR_16, VAR_19);
 else
  VAR_20 = FUNC_8(VAR_15, VAR_16, VAR_19);
 if (VAR_20)
  return VAR_20;

 if (VAR_15->family == VAR_6)
  VAR_20 = FUNC_3(VAR_15, VAR_19);
 else if ((VAR_15->family == VAR_5) || (VAR_15->family == VAR_4))
  VAR_20 = FUNC_1(VAR_15, VAR_19);
 else
  VAR_20 = FUNC_7(VAR_15, VAR_19);
 if (VAR_20)
  return VAR_20;

 VAR_19->driverState = VAR_19->initialState;

 return FUNC_4(VAR_15,
           VAR_17->state_table_start,
           (const u8 *)VAR_19,
           sizeof(RV770_SMC_STATETABLE),
           VAR_17->sram_end);
}
