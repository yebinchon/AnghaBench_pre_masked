
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_12__ {scalar_t__ vddc; } ;
struct si_ulv_param {int cg_ulv_parameter; int cg_ulv_control; TYPE_4__ pl; scalar_t__ supported; } ;
struct TYPE_13__ {int initialState; int ULVState; int driverState; int systemFlags; int extraFlags; int thermalProtectType; } ;
struct si_power_info {int sram_end; int state_table_start; TYPE_5__ smc_statetable; struct si_ulv_param ulv; } ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_10__ {int platform_caps; int backbias_response_time; struct radeon_ps* boot_ps; } ;
struct TYPE_11__ {int int_thermal_type; TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; TYPE_1__* pdev; } ;
struct TYPE_9__ {int device; } ;
typedef TYPE_5__ SISLANDS_SMC_STATETABLE ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ,int *,int,int ) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,int ) ;
 struct si_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,TYPE_5__*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*,TYPE_5__*) ;
 int FUNC_8 (struct radeon_device*,TYPE_5__*) ;
 int FUNC_9 (struct radeon_device*,int *) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_19)
{
 struct rv7xx_power_info *VAR_20 = FUNC_2(VAR_19);
 struct si_power_info *VAR_21 = FUNC_5(VAR_19);
 struct radeon_ps *VAR_22 = VAR_19->pm.dpm.boot_ps;
 const struct si_ulv_param *VAR_23 = &VAR_21->ulv;
 SISLANDS_SMC_STATETABLE *VAR_24 = &VAR_21->smc_statetable;
 int VAR_25;
 u32 VAR_26;
 u32 VAR_27;

 FUNC_8(VAR_19, VAR_24);

 switch (VAR_19->pm.int_thermal_type) {
 case 128:
 case 130:
  VAR_24->thermalProtectType = VAR_14;
  break;
 case 129:
  VAR_24->thermalProtectType = VAR_15;
  break;
 default:
  VAR_24->thermalProtectType = VAR_13;
  break;
 }

 if (VAR_19->pm.dpm.platform_caps & VAR_0)
  VAR_24->systemFlags |= VAR_9;

 if (VAR_19->pm.dpm.platform_caps & VAR_1) {
  if ((VAR_19->pdev->device != 0x6818) && (VAR_19->pdev->device != 0x6819))
   VAR_24->systemFlags |= VAR_10;
 }

 if (VAR_19->pm.dpm.platform_caps & VAR_3)
  VAR_24->systemFlags |= VAR_12;

 if (VAR_20->mem_gddr5)
  VAR_24->systemFlags |= VAR_8;

 if (VAR_19->pm.dpm.platform_caps & VAR_2)
  VAR_24->extraFlags |= VAR_7;

 if (VAR_19->pm.dpm.platform_caps & VAR_4) {
  VAR_24->systemFlags |= VAR_11;
  VAR_27 = VAR_19->pm.dpm.backbias_response_time;
  FUNC_11(VAR_19, VAR_18,
        VAR_27);
 }

 VAR_25 = FUNC_7(VAR_19, VAR_22, VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_6(VAR_19, VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_24->driverState = VAR_24->initialState;

 VAR_25 = FUNC_4(VAR_19, VAR_22,
           VAR_16);
 if (VAR_25)
  return VAR_25;

 if (VAR_23->supported && VAR_23->pl.vddc) {
  VAR_25 = FUNC_9(VAR_19, &VAR_24->ULVState);
  if (VAR_25)
   return VAR_25;

  VAR_25 = FUNC_10(VAR_19);
  if (VAR_25)
   return VAR_25;

  FUNC_0(VAR_5, VAR_23->cg_ulv_control);
  FUNC_0(VAR_6, VAR_23->cg_ulv_parameter);

  VAR_26 = FUNC_1(VAR_19);
  FUNC_11(VAR_19, VAR_17, VAR_26);
 } else {
  VAR_24->ULVState = VAR_24->initialState;
 }

 return FUNC_3(VAR_19, VAR_21->state_table_start,
        (u8 *)VAR_24, sizeof(SISLANDS_SMC_STATETABLE),
        VAR_21->sram_end);
}
