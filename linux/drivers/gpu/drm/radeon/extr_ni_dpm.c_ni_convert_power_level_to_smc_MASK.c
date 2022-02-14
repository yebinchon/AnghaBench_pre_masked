
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rv7xx_power_info {scalar_t__ mclk_stutter_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ pcie_gen2; } ;
struct rv7xx_pl {int flags; scalar_t__ mclk; int vddci; int vddc; int sclk; } ;
struct radeon_device {int dummy; } ;
struct ni_power_info {scalar_t__ mclk_rtt_mode_threshold; } ;
struct evergreen_power_info {scalar_t__ mclk_edc_wr_enable_threshold; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; int uvd_enabled; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int gen2PCIE; int strobeMode; int mvdd; TYPE_2__ vddci; int std_vddc; TYPE_2__ vddc; int mclk; int mcFlags; int sclk; } ;
typedef TYPE_1__ NISLANDS_SMC_HW_PERFORMANCE_LEVEL ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int) ;
 int FUNC_2 (struct radeon_device*,scalar_t__) ;
 struct evergreen_power_info* FUNC_3 (struct radeon_device*) ;
 struct ni_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,TYPE_2__*,int *) ;
 int FUNC_6 (struct radeon_device*,int ,scalar_t__,int *,int,int) ;
 int FUNC_7 (struct radeon_device*,scalar_t__,int *) ;
 int FUNC_8 (struct radeon_device*,int ,int *) ;
 int FUNC_9 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_10 (struct radeon_device*,int *,int ,TYPE_2__*) ;
 struct rv7xx_power_info* FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_12,
      struct rv7xx_pl *VAR_13,
      NISLANDS_SMC_HW_PERFORMANCE_LEVEL *VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_11(VAR_12);
 struct evergreen_power_info *VAR_16 = FUNC_3(VAR_12);
 struct ni_power_info *VAR_17 = FUNC_4(VAR_12);
 int VAR_18;
 bool VAR_19;
 u16 VAR_20;
 u32 VAR_21 = FUNC_0(VAR_1);

 VAR_14->gen2PCIE = VAR_15->pcie_gen2 ?
  ((VAR_13->flags & VAR_0) ? 1 : 0) : 0;

 VAR_18 = FUNC_8(VAR_12, VAR_13->sclk, &VAR_14->sclk);
 if (VAR_18)
  return VAR_18;

 VAR_14->mcFlags = 0;
 if (VAR_15->mclk_stutter_mode_threshold &&
     (VAR_13->mclk <= VAR_15->mclk_stutter_mode_threshold) &&
     !VAR_16->uvd_enabled &&
     (VAR_21 & VAR_2) &&
     (VAR_21 & VAR_3))
  VAR_14->mcFlags |= VAR_10;

 if (VAR_15->mem_gddr5) {
  if (VAR_13->mclk > VAR_15->mclk_edc_enable_threshold)
   VAR_14->mcFlags |= VAR_7;
  if (VAR_13->mclk > VAR_16->mclk_edc_wr_enable_threshold)
   VAR_14->mcFlags |= VAR_8;

  VAR_14->strobeMode = FUNC_2(VAR_12, VAR_13->mclk);

  if (VAR_14->strobeMode & VAR_11) {
   if (FUNC_1(VAR_12, VAR_13->mclk, 1) >=
       ((FUNC_0(VAR_6) >> 16) & 0xf))
    VAR_19 = ((FUNC_0(VAR_4) >> 1) & 0x1) ? 1 : 0;
   else
    VAR_19 = ((FUNC_0(VAR_5) >> 1) & 0x1) ? 1 : 0;
  } else {
   VAR_19 = 0;
   if (VAR_13->mclk > VAR_17->mclk_rtt_mode_threshold)
    VAR_14->mcFlags |= VAR_9;
  }

  VAR_18 = FUNC_6(VAR_12, VAR_13->sclk, VAR_13->mclk,
          &VAR_14->mclk,
          (VAR_14->strobeMode & VAR_11) != 0,
          VAR_19);
 } else
  VAR_18 = FUNC_6(VAR_12, VAR_13->sclk, VAR_13->mclk, &VAR_14->mclk, 1, 1);

 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_10(VAR_12, &VAR_16->vddc_voltage_table,
     VAR_13->vddc, &VAR_14->vddc);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_12, &VAR_14->vddc, &VAR_20);
 if (VAR_18)
  return VAR_18;

 FUNC_9(VAR_12, VAR_20,
          VAR_14->vddc.index, &VAR_14->std_vddc);

 if (VAR_16->vddci_control) {
  VAR_18 = FUNC_10(VAR_12, &VAR_16->vddci_voltage_table,
      VAR_13->vddci, &VAR_14->vddci);
  if (VAR_18)
   return VAR_18;
 }

 FUNC_7(VAR_12, VAR_13->mclk, &VAR_14->mvdd);

 return VAR_18;
}
