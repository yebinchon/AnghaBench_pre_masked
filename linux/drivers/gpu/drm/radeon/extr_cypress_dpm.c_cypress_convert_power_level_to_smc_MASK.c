
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rv7xx_power_info {scalar_t__ mclk_stutter_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ pcie_gen2; } ;
struct rv7xx_pl {int flags; scalar_t__ mclk; int vddci; int vddc; int sclk; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ mclk_edc_wr_enable_threshold; int dll_default_on; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; scalar_t__ sclk_deep_sleep; int uvd_enabled; } ;
struct TYPE_3__ {int gen2PCIE; int gen2XSP; int backbias; int strobeMode; int mvdd; int vddci; int vddc; int mclk; int mcFlags; int stateFlags; int sclk; int displayWatermark; } ;
typedef TYPE_1__ RV770_SMC_HW_PERFORMANCE_LEVEL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int) ;
 int FUNC_2 (struct radeon_device*,scalar_t__) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__,int *,int,int) ;
 int FUNC_4 (struct radeon_device*,scalar_t__,int *) ;
 int FUNC_5 (struct radeon_device*,int *,int ,int *) ;
 struct evergreen_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int ,int *) ;
 struct rv7xx_power_info* FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_10,
           struct rv7xx_pl *VAR_11,
           RV770_SMC_HW_PERFORMANCE_LEVEL *VAR_12,
           u8 VAR_13)
{
 struct rv7xx_power_info *VAR_14 = FUNC_8(VAR_10);
 struct evergreen_power_info *VAR_15 = FUNC_6(VAR_10);
 int VAR_16;
 bool VAR_17;

 VAR_12->gen2PCIE = VAR_14->pcie_gen2 ?
  ((VAR_11->flags & VAR_1) ? 1 : 0) : 0;
 VAR_12->gen2XSP = (VAR_11->flags & VAR_1) ? 1 : 0;
 VAR_12->backbias = (VAR_11->flags & VAR_0) ? 1 : 0;
 VAR_12->displayWatermark = VAR_13;

 VAR_16 = FUNC_7(VAR_10, VAR_11->sclk, &VAR_12->sclk);
 if (VAR_16)
  return VAR_16;

 VAR_12->mcFlags = 0;
 if (VAR_14->mclk_stutter_mode_threshold &&
     (VAR_11->mclk <= VAR_14->mclk_stutter_mode_threshold) &&
     !VAR_15->uvd_enabled) {
  VAR_12->mcFlags |= VAR_8;
  if (VAR_15->sclk_deep_sleep)
   VAR_12->stateFlags |= VAR_5;
  else
   VAR_12->stateFlags &= ~VAR_5;
 }

 if (VAR_14->mem_gddr5) {
  if (VAR_11->mclk > VAR_14->mclk_edc_enable_threshold)
   VAR_12->mcFlags |= VAR_6;

  if (VAR_11->mclk > VAR_15->mclk_edc_wr_enable_threshold)
   VAR_12->mcFlags |= VAR_7;

  VAR_12->strobeMode = FUNC_2(VAR_10, VAR_11->mclk);

  if (VAR_12->strobeMode & VAR_9) {
   if (FUNC_1(VAR_10, VAR_11->mclk, 1) >=
       ((FUNC_0(VAR_4) >> 16) & 0xf))
    VAR_17 = ((FUNC_0(VAR_2) >> 1) & 0x1) ? 1 : 0;
   else
    VAR_17 = ((FUNC_0(VAR_3) >> 1) & 0x1) ? 1 : 0;
  } else
   VAR_17 = VAR_15->dll_default_on;

  VAR_16 = FUNC_3(VAR_10,
        VAR_11->sclk,
        VAR_11->mclk,
        &VAR_12->mclk,
        (VAR_12->strobeMode & VAR_9) != 0,
        VAR_17);
 } else {
  VAR_16 = FUNC_3(VAR_10,
        VAR_11->sclk,
        VAR_11->mclk,
        &VAR_12->mclk,
        1,
        1);
 }
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_10,
          &VAR_15->vddc_voltage_table,
          VAR_11->vddc,
          &VAR_12->vddc);
 if (VAR_16)
  return VAR_16;

 if (VAR_15->vddci_control) {
  VAR_16 = FUNC_5(VAR_10,
           &VAR_15->vddci_voltage_table,
           VAR_11->vddci,
           &VAR_12->vddci);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_4(VAR_10, VAR_11->mclk, &VAR_12->mvdd);

 return VAR_16;
}
