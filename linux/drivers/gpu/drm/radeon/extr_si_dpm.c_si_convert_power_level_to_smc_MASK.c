
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct si_power_info {scalar_t__ force_pcie_gen; int max_cu; scalar_t__ vddc_phase_shed_control; } ;
struct rv7xx_power_info {scalar_t__ mclk_stutter_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; } ;
struct rv7xx_pl {scalar_t__ mclk; int sclk; int vddc; int vddci; scalar_t__ pcie_gen; } ;
struct TYPE_9__ {int phase_shedding_limits_table; } ;
struct TYPE_10__ {int new_active_crtc_count; TYPE_1__ dyn_state; } ;
struct TYPE_11__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct evergreen_power_info {scalar_t__ mclk_edc_wr_enable_threshold; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; int uvd_enabled; scalar_t__ pcie_performance_request; } ;
struct TYPE_13__ {int index; } ;
struct TYPE_12__ {int strobeMode; int mvdd; int MaxPoweredUpCU; TYPE_5__ vddc; TYPE_5__ vddci; int std_vddc; int mclk; int mcFlags; int sclk; void* gen2PCIE; } ;
typedef TYPE_4__ SISLANDS_SMC_HW_PERFORMANCE_LEVEL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (scalar_t__,int) ;
 struct si_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,TYPE_5__*,int *) ;
 void* FUNC_6 (struct radeon_device*,scalar_t__) ;
 int FUNC_7 (struct radeon_device*,int ,scalar_t__,int *,int,int) ;
 int FUNC_8 (struct radeon_device*,scalar_t__,int *) ;
 int FUNC_9 (struct radeon_device*,int *,int ,int ,scalar_t__,TYPE_5__*) ;
 int FUNC_10 (struct radeon_device*,int ,int *) ;
 int FUNC_11 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_12 (struct radeon_device*,int *,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_13(struct radeon_device *VAR_11,
      struct rv7xx_pl *VAR_12,
      SISLANDS_SMC_HW_PERFORMANCE_LEVEL *VAR_13)
{
 struct rv7xx_power_info *VAR_14 = FUNC_2(VAR_11);
 struct evergreen_power_info *VAR_15 = FUNC_1(VAR_11);
 struct si_power_info *VAR_16 = FUNC_4(VAR_11);
 int VAR_17;
 bool VAR_18;
 u16 VAR_19;
 bool VAR_20 = 0;

 if (VAR_15->pcie_performance_request &&
     (VAR_16->force_pcie_gen != VAR_4))
  VAR_13->gen2PCIE = (u8)VAR_16->force_pcie_gen;
 else
  VAR_13->gen2PCIE = (u8)VAR_12->pcie_gen;

 VAR_17 = FUNC_10(VAR_11, VAR_12->sclk, &VAR_13->sclk);
 if (VAR_17)
  return VAR_17;

 VAR_13->mcFlags = 0;

 if (VAR_14->mclk_stutter_mode_threshold &&
     (VAR_12->mclk <= VAR_14->mclk_stutter_mode_threshold) &&
     !VAR_15->uvd_enabled &&
     (FUNC_0(VAR_0) & VAR_10) &&
     (VAR_11->pm.dpm.new_active_crtc_count <= 2)) {
  VAR_13->mcFlags |= VAR_8;

  if (VAR_20)
   VAR_13->mcFlags |= VAR_7;
 }

 if (VAR_14->mem_gddr5) {
  if (VAR_12->mclk > VAR_14->mclk_edc_enable_threshold)
   VAR_13->mcFlags |= VAR_5;

  if (VAR_12->mclk > VAR_15->mclk_edc_wr_enable_threshold)
   VAR_13->mcFlags |= VAR_6;

  VAR_13->strobeMode = FUNC_6(VAR_11, VAR_12->mclk);

  if (VAR_13->strobeMode & VAR_9) {
   if (FUNC_3(VAR_12->mclk, 1) >=
       ((FUNC_0(VAR_3) >> 16) & 0xf))
    VAR_18 = ((FUNC_0(VAR_1) >> 1) & 0x1) ? 1 : 0;
   else
    VAR_18 = ((FUNC_0(VAR_2) >> 1) & 0x1) ? 1 : 0;
  } else {
   VAR_18 = 0;
  }
 } else {
  VAR_13->strobeMode = FUNC_6(VAR_11,
        VAR_12->mclk);

  VAR_18 = ((FUNC_0(VAR_1) >> 1) & 0x1) ? 1 : 0;
 }

 VAR_17 = FUNC_7(VAR_11,
         VAR_12->sclk,
         VAR_12->mclk,
         &VAR_13->mclk,
         (VAR_13->strobeMode & VAR_9) != 0, VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_12(VAR_11,
     &VAR_15->vddc_voltage_table,
     VAR_12->vddc, &VAR_13->vddc);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_5(VAR_11, &VAR_13->vddc, &VAR_19);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_11(VAR_11, VAR_19,
         VAR_13->vddc.index, &VAR_13->std_vddc);
 if (VAR_17)
  return VAR_17;

 if (VAR_15->vddci_control) {
  VAR_17 = FUNC_12(VAR_11, &VAR_15->vddci_voltage_table,
      VAR_12->vddci, &VAR_13->vddci);
  if (VAR_17)
   return VAR_17;
 }

 if (VAR_16->vddc_phase_shed_control) {
  VAR_17 = FUNC_9(VAR_11,
             &VAR_11->pm.dpm.dyn_state.phase_shedding_limits_table,
             VAR_12->vddc,
             VAR_12->sclk,
             VAR_12->mclk,
             &VAR_13->vddc);
  if (VAR_17)
   return VAR_17;
 }

 VAR_13->MaxPoweredUpCU = VAR_16->max_cu;

 VAR_17 = FUNC_8(VAR_11, VAR_12->mclk, &VAR_13->mvdd);

 return VAR_17;
}
