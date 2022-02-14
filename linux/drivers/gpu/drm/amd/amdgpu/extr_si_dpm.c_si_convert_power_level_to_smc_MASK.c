
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct si_power_info {scalar_t__ force_pcie_gen; int max_cu; scalar_t__ vddc_phase_shed_control; } ;
struct rv7xx_power_info {scalar_t__ mclk_stutter_mode_threshold; scalar_t__ mclk_edc_enable_threshold; } ;
struct rv7xx_pl {scalar_t__ mclk; int sclk; int vddc; int vddci; scalar_t__ pcie_gen; } ;
struct evergreen_power_info {scalar_t__ mclk_edc_wr_enable_threshold; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; int uvd_enabled; scalar_t__ pcie_performance_request; } ;
struct TYPE_11__ {int phase_shedding_limits_table; } ;
struct TYPE_12__ {int new_active_crtc_count; TYPE_2__ dyn_state; } ;
struct TYPE_13__ {TYPE_3__ dpm; } ;
struct TYPE_10__ {scalar_t__ vram_type; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_1__ gmc; } ;
struct TYPE_15__ {int index; } ;
struct TYPE_14__ {int strobeMode; int mvdd; int MaxPoweredUpCU; TYPE_6__ vddc; TYPE_6__ vddci; int std_vddc; int mclk; int mcFlags; int sclk; void* gen2PCIE; } ;
typedef TYPE_5__ SISLANDS_SMC_HW_PERFORMANCE_LEVEL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct evergreen_power_info* FUNC_1 (struct amdgpu_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (scalar_t__,int) ;
 struct si_power_info* FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,TYPE_6__*,int *) ;
 void* FUNC_6 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_7 (struct amdgpu_device*,int ,scalar_t__,int *,int,int) ;
 int FUNC_8 (struct amdgpu_device*,scalar_t__,int *) ;
 int FUNC_9 (struct amdgpu_device*,int *,int ,int ,scalar_t__,TYPE_6__*) ;
 int FUNC_10 (struct amdgpu_device*,int ,int *) ;
 int FUNC_11 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_12 (struct amdgpu_device*,int *,int ,TYPE_6__*) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_12,
      struct rv7xx_pl *VAR_13,
      SISLANDS_SMC_HW_PERFORMANCE_LEVEL *VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_2(VAR_12);
 struct evergreen_power_info *VAR_16 = FUNC_1(VAR_12);
 struct si_power_info *VAR_17 = FUNC_4(VAR_12);
 int VAR_18;
 bool VAR_19;
 u16 VAR_20;
 bool VAR_21 = 0;

 if (VAR_16->pcie_performance_request &&
     (VAR_17->force_pcie_gen != VAR_0))
  VAR_14->gen2PCIE = (u8)VAR_17->force_pcie_gen;
 else
  VAR_14->gen2PCIE = (u8)VAR_13->pcie_gen;

 VAR_18 = FUNC_10(VAR_12, VAR_13->sclk, &VAR_14->sclk);
 if (VAR_18)
  return VAR_18;

 VAR_14->mcFlags = 0;

 if (VAR_15->mclk_stutter_mode_threshold &&
     (VAR_13->mclk <= VAR_15->mclk_stutter_mode_threshold) &&
     !VAR_16->uvd_enabled &&
     (FUNC_0(VAR_2) & VAR_11) &&
     (VAR_12->pm.dpm.new_active_crtc_count <= 2)) {
  VAR_14->mcFlags |= VAR_9;

  if (VAR_21)
   VAR_14->mcFlags |= VAR_8;
 }

 if (VAR_12->gmc.vram_type == VAR_1) {
  if (VAR_13->mclk > VAR_15->mclk_edc_enable_threshold)
   VAR_14->mcFlags |= VAR_6;

  if (VAR_13->mclk > VAR_16->mclk_edc_wr_enable_threshold)
   VAR_14->mcFlags |= VAR_7;

  VAR_14->strobeMode = FUNC_6(VAR_12, VAR_13->mclk);

  if (VAR_14->strobeMode & VAR_10) {
   if (FUNC_3(VAR_13->mclk, 1) >=
       ((FUNC_0(VAR_5) >> 16) & 0xf))
    VAR_19 = ((FUNC_0(VAR_3) >> 1) & 0x1) ? 1 : 0;
   else
    VAR_19 = ((FUNC_0(VAR_4) >> 1) & 0x1) ? 1 : 0;
  } else {
   VAR_19 = 0;
  }
 } else {
  VAR_14->strobeMode = FUNC_6(VAR_12,
        VAR_13->mclk);

  VAR_19 = ((FUNC_0(VAR_3) >> 1) & 0x1) ? 1 : 0;
 }

 VAR_18 = FUNC_7(VAR_12,
         VAR_13->sclk,
         VAR_13->mclk,
         &VAR_14->mclk,
         (VAR_14->strobeMode & VAR_10) != 0, VAR_19);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_12(VAR_12,
     &VAR_16->vddc_voltage_table,
     VAR_13->vddc, &VAR_14->vddc);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_5(VAR_12, &VAR_14->vddc, &VAR_20);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_11(VAR_12, VAR_20,
         VAR_14->vddc.index, &VAR_14->std_vddc);
 if (VAR_18)
  return VAR_18;

 if (VAR_16->vddci_control) {
  VAR_18 = FUNC_12(VAR_12, &VAR_16->vddci_voltage_table,
      VAR_13->vddci, &VAR_14->vddci);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_17->vddc_phase_shed_control) {
  VAR_18 = FUNC_9(VAR_12,
             &VAR_12->pm.dpm.dyn_state.phase_shedding_limits_table,
             VAR_13->vddc,
             VAR_13->sclk,
             VAR_13->mclk,
             &VAR_14->vddc);
  if (VAR_18)
   return VAR_18;
 }

 VAR_14->MaxPoweredUpCU = VAR_17->max_cu;

 VAR_18 = FUNC_8(VAR_12, VAR_13->mclk, &VAR_14->mvdd);

 return VAR_18;
}
