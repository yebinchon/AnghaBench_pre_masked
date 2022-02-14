
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_108__ TYPE_9__ ;
typedef struct TYPE_107__ TYPE_8__ ;
typedef struct TYPE_106__ TYPE_7__ ;
typedef struct TYPE_105__ TYPE_6__ ;
typedef struct TYPE_104__ TYPE_5__ ;
typedef struct TYPE_103__ TYPE_54__ ;
typedef struct TYPE_102__ TYPE_53__ ;
typedef struct TYPE_101__ TYPE_52__ ;
typedef struct TYPE_100__ TYPE_51__ ;
typedef struct TYPE_99__ TYPE_50__ ;
typedef struct TYPE_98__ TYPE_4__ ;
typedef struct TYPE_97__ TYPE_49__ ;
typedef struct TYPE_96__ TYPE_48__ ;
typedef struct TYPE_95__ TYPE_47__ ;
typedef struct TYPE_94__ TYPE_46__ ;
typedef struct TYPE_93__ TYPE_45__ ;
typedef struct TYPE_92__ TYPE_44__ ;
typedef struct TYPE_91__ TYPE_43__ ;
typedef struct TYPE_90__ TYPE_42__ ;
typedef struct TYPE_89__ TYPE_41__ ;
typedef struct TYPE_88__ TYPE_40__ ;
typedef struct TYPE_87__ TYPE_3__ ;
typedef struct TYPE_86__ TYPE_39__ ;
typedef struct TYPE_85__ TYPE_38__ ;
typedef struct TYPE_84__ TYPE_37__ ;
typedef struct TYPE_83__ TYPE_36__ ;
typedef struct TYPE_82__ TYPE_35__ ;
typedef struct TYPE_81__ TYPE_34__ ;
typedef struct TYPE_80__ TYPE_33__ ;
typedef struct TYPE_79__ TYPE_32__ ;
typedef struct TYPE_78__ TYPE_31__ ;
typedef struct TYPE_77__ TYPE_30__ ;
typedef struct TYPE_76__ TYPE_2__ ;
typedef struct TYPE_75__ TYPE_29__ ;
typedef struct TYPE_74__ TYPE_28__ ;
typedef struct TYPE_73__ TYPE_27__ ;
typedef struct TYPE_72__ TYPE_26__ ;
typedef struct TYPE_71__ TYPE_25__ ;
typedef struct TYPE_70__ TYPE_24__ ;
typedef struct TYPE_69__ TYPE_23__ ;
typedef struct TYPE_68__ TYPE_22__ ;
typedef struct TYPE_67__ TYPE_21__ ;
typedef struct TYPE_66__ TYPE_20__ ;
typedef struct TYPE_65__ TYPE_1__ ;
typedef struct TYPE_64__ TYPE_19__ ;
typedef struct TYPE_63__ TYPE_18__ ;
typedef struct TYPE_62__ TYPE_17__ ;
typedef struct TYPE_61__ TYPE_16__ ;
typedef struct TYPE_60__ TYPE_15__ ;
typedef struct TYPE_59__ TYPE_14__ ;
typedef struct TYPE_58__ TYPE_13__ ;
typedef struct TYPE_57__ TYPE_12__ ;
typedef struct TYPE_56__ TYPE_11__ ;
typedef struct TYPE_55__ TYPE_10__ ;


struct TYPE_58__ {scalar_t__ usExtendendedHeaderOffset; scalar_t__ usFanTableOffset; } ;
struct TYPE_57__ {scalar_t__ usTableSize; } ;
struct TYPE_108__ {scalar_t__ usCACLeakageTableOffset; scalar_t__ usLoadLineSlope; int ulCACLeakage; int ulSQRampingThreshold; scalar_t__ usTDPODLimit; int ulNearTDPLimit; int ulTDPLimit; } ;
struct TYPE_106__ {scalar_t__ usVddcPhaseShedLimitsTableOffset; scalar_t__ usMaxClockVoltageOnDCOffset; scalar_t__ usMvddDependencyOnMCLKOffset; scalar_t__ usVddcDependencyOnMCLKOffset; scalar_t__ usVddciDependencyOnMCLKOffset; scalar_t__ usVddcDependencyOnSCLKOffset; } ;
union power_info {TYPE_13__ pplib3; TYPE_12__ pplib; TYPE_9__ pplib5; TYPE_7__ pplib4; } ;
struct TYPE_87__ {scalar_t__ usFanOutputSensitivity; scalar_t__ usFanPWMMax; int ucFanControlMode; } ;
struct TYPE_76__ {int ucFanTableFormat; scalar_t__ usPWMHigh; scalar_t__ usPWMMed; scalar_t__ usPWMMin; scalar_t__ usTHigh; scalar_t__ usTMed; scalar_t__ usTMin; int ucTHyst; } ;
struct TYPE_65__ {scalar_t__ usTMax; } ;
union fan_info {TYPE_3__ fan3; TYPE_2__ fan; TYPE_1__ fan2; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct radeon_vce_clock_voltage_dependency_entry {int dummy; } ;
struct radeon_uvd_clock_voltage_dependency_entry {int dummy; } ;
struct radeon_ppm_table {int dummy; } ;
struct radeon_phase_shedding_limits_entry {int dummy; } ;
struct radeon_mode_info {TYPE_54__* atom_context; } ;
struct TYPE_69__ {int count; TYPE_22__* entries; } ;
struct TYPE_66__ {int count; TYPE_19__* entries; } ;
struct TYPE_63__ {int count; TYPE_17__* entries; } ;
struct TYPE_60__ {int count; TYPE_14__* entries; } ;
struct TYPE_56__ {int count; TYPE_10__* entries; } ;
struct TYPE_107__ {int count; TYPE_53__* entries; } ;
struct TYPE_104__ {int sclk; int mclk; scalar_t__ vddci; scalar_t__ vddc; } ;
struct TYPE_101__ {int entries; } ;
struct TYPE_71__ {TYPE_24__* cac_tdp_table; TYPE_23__ acp_clock_voltage_dependency_table; TYPE_21__* ppm_table; TYPE_20__ samu_clock_voltage_dependency_table; TYPE_18__ uvd_clock_voltage_dependency_table; TYPE_15__ vce_clock_voltage_dependency_table; TYPE_11__ cac_leakage_table; TYPE_8__ phase_shedding_limits_table; TYPE_5__ max_clock_voltage_on_dc; TYPE_52__ vddc_dependency_on_mclk; TYPE_52__ vddci_dependency_on_mclk; TYPE_52__ vddc_dependency_on_sclk; TYPE_52__ mvdd_dependency_on_mclk; } ;
struct TYPE_98__ {int t_max; int cycle_delay; int default_fan_output_sensitivity; int ucode_fan_control; scalar_t__ fan_output_sensitivity; scalar_t__ default_max_fan_pwm; int control_mode; scalar_t__ pwm_high; scalar_t__ pwm_med; scalar_t__ pwm_min; scalar_t__ t_high; scalar_t__ t_med; scalar_t__ t_min; int t_hyst; } ;
struct TYPE_72__ {int tdp_od_limit; int power_control; int platform_caps; TYPE_25__ dyn_state; TYPE_16__* vce_states; scalar_t__ load_line_slope; void* cac_leakage; void* sq_ramping_threshold; scalar_t__ tdp_adjustment; void* near_tdp_limit; void* near_tdp_limit_adjusted; void* tdp_limit; TYPE_4__ fan; } ;
struct TYPE_73__ {TYPE_26__ dpm; } ;
struct radeon_device {TYPE_27__ pm; struct radeon_mode_info mode_info; } ;
struct radeon_clock_voltage_dependency_entry {int dummy; } ;
struct radeon_cac_tdp_table {int dummy; } ;
struct radeon_cac_leakage_table {int dummy; } ;
struct _ATOM_PPLIB_POWERPLAYTABLE5 {int dummy; } ;
struct _ATOM_PPLIB_POWERPLAYTABLE4 {int dummy; } ;
struct _ATOM_PPLIB_POWERPLAYTABLE3 {int dummy; } ;
struct TYPE_74__ {int ucNumEntries; int * entries; } ;
typedef TYPE_28__ VCEClockInfoArray ;
struct TYPE_75__ {int ucEVClkHigh; int ucECClkHigh; scalar_t__ usECClkLow; scalar_t__ usEVClkLow; } ;
typedef TYPE_29__ VCEClockInfo ;
struct TYPE_77__ {int ucNumEntries; int * entries; } ;
typedef TYPE_30__ UVDClockInfoArray ;
struct TYPE_78__ {int ucVClkHigh; int ucDClkHigh; scalar_t__ usDClkLow; scalar_t__ usVClkLow; } ;
typedef TYPE_31__ UVDClockInfo ;
struct TYPE_105__ {int ucSclkHigh; int ucMclkHigh; scalar_t__ usVddci; scalar_t__ usVddc; scalar_t__ usMclkLow; scalar_t__ usSclkLow; } ;
struct TYPE_103__ {scalar_t__ bios; } ;
struct TYPE_102__ {int sclk; int mclk; scalar_t__ voltage; } ;
struct TYPE_100__ {int ucACPClockHigh; scalar_t__ usVoltage; scalar_t__ usACPClockLow; } ;
struct TYPE_99__ {int numEntries; TYPE_51__* entries; } ;
struct TYPE_97__ {int ulLeakageValue; scalar_t__ usVddc; scalar_t__ usVddc3; scalar_t__ usVddc2; scalar_t__ usVddc1; } ;
struct TYPE_96__ {int ucNumEntries; TYPE_49__* entries; } ;
struct TYPE_95__ {TYPE_6__* entries; scalar_t__ ucNumEntries; } ;
struct TYPE_94__ {scalar_t__ usPowerTuneTableOffset; scalar_t__ usSize; scalar_t__ usACPTableOffset; scalar_t__ usPPMTableOffset; scalar_t__ usSAMUTableOffset; scalar_t__ usUVDTableOffset; scalar_t__ usVCETableOffset; } ;
struct TYPE_79__ {scalar_t__ usHighCACLeakage; scalar_t__ usLowCACLeakage; scalar_t__ usSmallPowerLimit; scalar_t__ usBatteryPowerLimit; scalar_t__ usTDC; scalar_t__ usConfigurableTDP; scalar_t__ usTDP; } ;
struct TYPE_93__ {TYPE_32__ power_tune_table; } ;
struct TYPE_92__ {TYPE_32__ power_tune_table; scalar_t__ usMaximumPowerDeliveryLimit; } ;
struct TYPE_91__ {int ulTjmax; int ulDGpuUlvPower; int ulDGpuTDP; int ulApuTDP; int ulSmallACPlatformTDC; int ulPlatformTDC; int ulSmallACPlatformTDP; int ulPlatformTDP; scalar_t__ usCpuCoreNumber; int ucPpmDesign; } ;
struct TYPE_90__ {int ucSclkHigh; int ucMclkHigh; scalar_t__ usVoltage; scalar_t__ usMclkLow; scalar_t__ usSclkLow; } ;
struct TYPE_89__ {int ucNumEntries; TYPE_42__* entries; } ;
struct TYPE_88__ {int ucSAMClockHigh; scalar_t__ usVoltage; scalar_t__ usSAMClockLow; } ;
struct TYPE_86__ {int numEntries; TYPE_40__* entries; } ;
struct TYPE_85__ {int ucUVDClockInfoIndex; scalar_t__ usVoltage; } ;
struct TYPE_84__ {int numEntries; TYPE_38__* entries; } ;
struct TYPE_83__ {int ucVCEClockInfoIndex; scalar_t__ usVoltage; } ;
struct TYPE_82__ {int numEntries; TYPE_36__* entries; } ;
struct TYPE_81__ {int ucVCEClockInfoIndex; int ucClockInfoIndex; } ;
struct TYPE_80__ {int numEntries; TYPE_34__* entries; } ;
struct TYPE_70__ {int maximum_power_delivery_limit; scalar_t__ high_cac_leakage; scalar_t__ low_cac_leakage; scalar_t__ small_power_limit; scalar_t__ battery_power_limit; scalar_t__ tdc; scalar_t__ configurable_tdp; scalar_t__ tdp; } ;
struct TYPE_68__ {int clk; scalar_t__ v; } ;
struct TYPE_67__ {void* tj_max; void* dgpu_ulv_power; void* dgpu_tdp; void* apu_tdp; void* small_ac_platform_tdc; void* platform_tdc; void* small_ac_platform_tdp; void* platform_tdp; scalar_t__ cpu_core_number; int ppm_design; } ;
struct TYPE_64__ {int clk; scalar_t__ v; } ;
struct TYPE_62__ {int vclk; int dclk; scalar_t__ v; } ;
struct TYPE_61__ {int evclk; int ecclk; int clk_idx; int pstate; } ;
struct TYPE_59__ {int evclk; int ecclk; scalar_t__ v; } ;
struct TYPE_55__ {void* leakage; scalar_t__ vddc; scalar_t__ vddc3; scalar_t__ vddc2; scalar_t__ vddc1; } ;
typedef TYPE_32__ ATOM_PowerTune_Table ;
typedef TYPE_33__ ATOM_PPLIB_VCE_State_Table ;
typedef TYPE_34__ ATOM_PPLIB_VCE_State_Record ;
typedef TYPE_35__ ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table ;
typedef TYPE_36__ ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record ;
typedef TYPE_37__ ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table ;
typedef TYPE_38__ ATOM_PPLIB_UVD_Clock_Voltage_Limit_Record ;
typedef TYPE_39__ ATOM_PPLIB_SAMClk_Voltage_Limit_Table ;
typedef TYPE_40__ ATOM_PPLIB_SAMClk_Voltage_Limit_Record ;
typedef TYPE_41__ ATOM_PPLIB_PhaseSheddingLimits_Table ;
typedef TYPE_42__ ATOM_PPLIB_PhaseSheddingLimits_Record ;
typedef TYPE_43__ ATOM_PPLIB_PPM_Table ;
typedef TYPE_44__ ATOM_PPLIB_POWERTUNE_Table_V1 ;
typedef TYPE_45__ ATOM_PPLIB_POWERTUNE_Table ;
typedef TYPE_46__ ATOM_PPLIB_EXTENDEDHEADER ;
typedef TYPE_47__ ATOM_PPLIB_Clock_Voltage_Limit_Table ;
typedef int ATOM_PPLIB_Clock_Voltage_Dependency_Table ;
typedef TYPE_48__ ATOM_PPLIB_CAC_Leakage_Table ;
typedef TYPE_49__ ATOM_PPLIB_CAC_Leakage_Record ;
typedef TYPE_50__ ATOM_PPLIB_ACPClk_Voltage_Limit_Table ;
typedef TYPE_51__ ATOM_PPLIB_ACPClk_Voltage_Limit_Record ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_54__*,int,int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_53__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (TYPE_52__*,int *) ;

int FUNC_9(struct radeon_device *VAR_13)
{
 struct radeon_mode_info *VAR_14 = &VAR_13->mode_info;
 union power_info *VAR_15;
 union fan_info *VAR_16;
 ATOM_PPLIB_Clock_Voltage_Dependency_Table *VAR_17;
 int VAR_18 = FUNC_0(VAR_1, VAR_5);
 u16 VAR_19;
 u8 VAR_20, VAR_21;
 int VAR_22, VAR_23;

 if (!FUNC_1(VAR_14->atom_context, VAR_18, ((void*)0),
       &VAR_20, &VAR_21, &VAR_19))
  return -VAR_2;
 VAR_15 = (union power_info *)(VAR_14->atom_context->bios + VAR_19);


 if (FUNC_5(VAR_15->pplib.usTableSize) >=
     sizeof(struct _ATOM_PPLIB_POWERPLAYTABLE3)) {
  if (VAR_15->pplib3.usFanTableOffset) {
   VAR_16 = (union fan_info *)(VAR_14->atom_context->bios + VAR_19 +
            FUNC_5(VAR_15->pplib3.usFanTableOffset));
   VAR_13->pm.dpm.fan.t_hyst = VAR_16->fan.ucTHyst;
   VAR_13->pm.dpm.fan.t_min = FUNC_5(VAR_16->fan.usTMin);
   VAR_13->pm.dpm.fan.t_med = FUNC_5(VAR_16->fan.usTMed);
   VAR_13->pm.dpm.fan.t_high = FUNC_5(VAR_16->fan.usTHigh);
   VAR_13->pm.dpm.fan.pwm_min = FUNC_5(VAR_16->fan.usPWMMin);
   VAR_13->pm.dpm.fan.pwm_med = FUNC_5(VAR_16->fan.usPWMMed);
   VAR_13->pm.dpm.fan.pwm_high = FUNC_5(VAR_16->fan.usPWMHigh);
   if (VAR_16->fan.ucFanTableFormat >= 2)
    VAR_13->pm.dpm.fan.t_max = FUNC_5(VAR_16->fan2.usTMax);
   else
    VAR_13->pm.dpm.fan.t_max = 10900;
   VAR_13->pm.dpm.fan.cycle_delay = 100000;
   if (VAR_16->fan.ucFanTableFormat >= 3) {
    VAR_13->pm.dpm.fan.control_mode = VAR_16->fan3.ucFanControlMode;
    VAR_13->pm.dpm.fan.default_max_fan_pwm =
     FUNC_5(VAR_16->fan3.usFanPWMMax);
    VAR_13->pm.dpm.fan.default_fan_output_sensitivity = 4836;
    VAR_13->pm.dpm.fan.fan_output_sensitivity =
     FUNC_5(VAR_16->fan3.usFanOutputSensitivity);
   }
   VAR_13->pm.dpm.fan.ucode_fan_control = 1;
  }
 }


 if (FUNC_5(VAR_15->pplib.usTableSize) >=
     sizeof(struct _ATOM_PPLIB_POWERPLAYTABLE4)) {
  if (VAR_15->pplib4.usVddcDependencyOnSCLKOffset) {
   VAR_17 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usVddcDependencyOnSCLKOffset));
   VAR_22 = FUNC_8(&VAR_13->pm.dpm.dyn_state.vddc_dependency_on_sclk,
              VAR_17);
   if (VAR_22)
    return VAR_22;
  }
  if (VAR_15->pplib4.usVddciDependencyOnMCLKOffset) {
   VAR_17 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usVddciDependencyOnMCLKOffset));
   VAR_22 = FUNC_8(&VAR_13->pm.dpm.dyn_state.vddci_dependency_on_mclk,
              VAR_17);
   if (VAR_22) {
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries);
    return VAR_22;
   }
  }
  if (VAR_15->pplib4.usVddcDependencyOnMCLKOffset) {
   VAR_17 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usVddcDependencyOnMCLKOffset));
   VAR_22 = FUNC_8(&VAR_13->pm.dpm.dyn_state.vddc_dependency_on_mclk,
              VAR_17);
   if (VAR_22) {
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries);
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddci_dependency_on_mclk.entries);
    return VAR_22;
   }
  }
  if (VAR_15->pplib4.usMvddDependencyOnMCLKOffset) {
   VAR_17 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usMvddDependencyOnMCLKOffset));
   VAR_22 = FUNC_8(&VAR_13->pm.dpm.dyn_state.mvdd_dependency_on_mclk,
              VAR_17);
   if (VAR_22) {
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries);
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddci_dependency_on_mclk.entries);
    FUNC_3(VAR_13->pm.dpm.dyn_state.vddc_dependency_on_mclk.entries);
    return VAR_22;
   }
  }
  if (VAR_15->pplib4.usMaxClockVoltageOnDCOffset) {
   ATOM_PPLIB_Clock_Voltage_Limit_Table *VAR_24 =
    (ATOM_PPLIB_Clock_Voltage_Limit_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usMaxClockVoltageOnDCOffset));
   if (VAR_24->ucNumEntries) {
    VAR_13->pm.dpm.dyn_state.max_clock_voltage_on_dc.sclk =
     FUNC_5(VAR_24->entries[0].usSclkLow) |
     (VAR_24->entries[0].ucSclkHigh << 16);
    VAR_13->pm.dpm.dyn_state.max_clock_voltage_on_dc.mclk =
     FUNC_5(VAR_24->entries[0].usMclkLow) |
     (VAR_24->entries[0].ucMclkHigh << 16);
    VAR_13->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc =
     FUNC_5(VAR_24->entries[0].usVddc);
    VAR_13->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddci =
     FUNC_5(VAR_24->entries[0].usVddci);
   }
  }
  if (VAR_15->pplib4.usVddcPhaseShedLimitsTableOffset) {
   ATOM_PPLIB_PhaseSheddingLimits_Table *VAR_25 =
    (ATOM_PPLIB_PhaseSheddingLimits_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib4.usVddcPhaseShedLimitsTableOffset));
   ATOM_PPLIB_PhaseSheddingLimits_Record *VAR_26;

   VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.entries =
    FUNC_2(VAR_25->ucNumEntries,
     sizeof(struct radeon_phase_shedding_limits_entry),
     VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }

   VAR_26 = &VAR_25->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_25->ucNumEntries; VAR_23++) {
    VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.entries[VAR_23].sclk =
     FUNC_5(VAR_26->usSclkLow) | (VAR_26->ucSclkHigh << 16);
    VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.entries[VAR_23].mclk =
     FUNC_5(VAR_26->usMclkLow) | (VAR_26->ucMclkHigh << 16);
    VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.entries[VAR_23].voltage =
     FUNC_5(VAR_26->usVoltage);
    VAR_26 = (ATOM_PPLIB_PhaseSheddingLimits_Record *)
     ((u8 *)VAR_26 + sizeof(ATOM_PPLIB_PhaseSheddingLimits_Record));
   }
   VAR_13->pm.dpm.dyn_state.phase_shedding_limits_table.count =
    VAR_25->ucNumEntries;
  }
 }


 if (FUNC_5(VAR_15->pplib.usTableSize) >=
     sizeof(struct _ATOM_PPLIB_POWERPLAYTABLE5)) {
  VAR_13->pm.dpm.tdp_limit = FUNC_6(VAR_15->pplib5.ulTDPLimit);
  VAR_13->pm.dpm.near_tdp_limit = FUNC_6(VAR_15->pplib5.ulNearTDPLimit);
  VAR_13->pm.dpm.near_tdp_limit_adjusted = VAR_13->pm.dpm.near_tdp_limit;
  VAR_13->pm.dpm.tdp_od_limit = FUNC_5(VAR_15->pplib5.usTDPODLimit);
  if (VAR_13->pm.dpm.tdp_od_limit)
   VAR_13->pm.dpm.power_control = 1;
  else
   VAR_13->pm.dpm.power_control = 0;
  VAR_13->pm.dpm.tdp_adjustment = 0;
  VAR_13->pm.dpm.sq_ramping_threshold = FUNC_6(VAR_15->pplib5.ulSQRampingThreshold);
  VAR_13->pm.dpm.cac_leakage = FUNC_6(VAR_15->pplib5.ulCACLeakage);
  VAR_13->pm.dpm.load_line_slope = FUNC_5(VAR_15->pplib5.usLoadLineSlope);
  if (VAR_15->pplib5.usCACLeakageTableOffset) {
   ATOM_PPLIB_CAC_Leakage_Table *VAR_27 =
    (ATOM_PPLIB_CAC_Leakage_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_15->pplib5.usCACLeakageTableOffset));
   ATOM_PPLIB_CAC_Leakage_Record *VAR_28;
   u32 VAR_29 = VAR_27->ucNumEntries * sizeof(struct radeon_cac_leakage_table);
   VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries = FUNC_4(VAR_29, VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_28 = &VAR_27->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_27->ucNumEntries; VAR_23++) {
    if (VAR_13->pm.dpm.platform_caps & VAR_0) {
     VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_23].vddc1 =
      FUNC_5(VAR_28->usVddc1);
     VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_23].vddc2 =
      FUNC_5(VAR_28->usVddc2);
     VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_23].vddc3 =
      FUNC_5(VAR_28->usVddc3);
    } else {
     VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_23].vddc =
      FUNC_5(VAR_28->usVddc);
     VAR_13->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_23].leakage =
      FUNC_6(VAR_28->ulLeakageValue);
    }
    VAR_28 = (ATOM_PPLIB_CAC_Leakage_Record *)
     ((u8 *)VAR_28 + sizeof(ATOM_PPLIB_CAC_Leakage_Record));
   }
   VAR_13->pm.dpm.dyn_state.cac_leakage_table.count = VAR_27->ucNumEntries;
  }
 }


 if (FUNC_5(VAR_15->pplib.usTableSize) >=
     sizeof(struct _ATOM_PPLIB_POWERPLAYTABLE3)) {
  ATOM_PPLIB_EXTENDEDHEADER *VAR_30 = (ATOM_PPLIB_EXTENDEDHEADER *)
   (VAR_14->atom_context->bios + VAR_19 +
    FUNC_5(VAR_15->pplib3.usExtendendedHeaderOffset));
  if ((FUNC_5(VAR_30->usSize) >= VAR_7) &&
   VAR_30->usVCETableOffset) {
   VCEClockInfoArray *VAR_31 = (VCEClockInfoArray *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usVCETableOffset) + 1);
   ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *VAR_32 =
    (ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usVCETableOffset) + 1 +
     1 + VAR_31->ucNumEntries * sizeof(VCEClockInfo));
   ATOM_PPLIB_VCE_State_Table *VAR_33 =
    (ATOM_PPLIB_VCE_State_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usVCETableOffset) + 1 +
     1 + (VAR_31->ucNumEntries * sizeof (VCEClockInfo)) +
     1 + (VAR_32->numEntries * sizeof(ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record)));
   ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record *VAR_34;
   ATOM_PPLIB_VCE_State_Record *VAR_35;
   VCEClockInfo *VAR_36;
   u32 VAR_37 = VAR_32->numEntries *
    sizeof(struct radeon_vce_clock_voltage_dependency_entry);
   VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries =
    FUNC_4(VAR_37, VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.count =
    VAR_32->numEntries;
   VAR_34 = &VAR_32->entries[0];
   VAR_35 = &VAR_33->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_32->numEntries; VAR_23++) {
    VAR_36 = (VCEClockInfo *)
     ((u8 *)&VAR_31->entries[0] +
      (VAR_34->ucVCEClockInfoIndex * sizeof(VCEClockInfo)));
    VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries[VAR_23].evclk =
     FUNC_5(VAR_36->usEVClkLow) | (VAR_36->ucEVClkHigh << 16);
    VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries[VAR_23].ecclk =
     FUNC_5(VAR_36->usECClkLow) | (VAR_36->ucECClkHigh << 16);
    VAR_13->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries[VAR_23].v =
     FUNC_5(VAR_34->usVoltage);
    VAR_34 = (ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record *)
     ((u8 *)VAR_34 + sizeof(ATOM_PPLIB_VCE_Clock_Voltage_Limit_Record));
   }
   for (VAR_23 = 0; VAR_23 < VAR_33->numEntries; VAR_23++) {
    if (VAR_23 >= VAR_6)
     break;
    VAR_36 = (VCEClockInfo *)
     ((u8 *)&VAR_31->entries[0] +
      (VAR_35->ucVCEClockInfoIndex * sizeof(VCEClockInfo)));
    VAR_13->pm.dpm.vce_states[VAR_23].evclk =
     FUNC_5(VAR_36->usEVClkLow) | (VAR_36->ucEVClkHigh << 16);
    VAR_13->pm.dpm.vce_states[VAR_23].ecclk =
     FUNC_5(VAR_36->usECClkLow) | (VAR_36->ucECClkHigh << 16);
    VAR_13->pm.dpm.vce_states[VAR_23].clk_idx =
     VAR_35->ucClockInfoIndex & 0x3f;
    VAR_13->pm.dpm.vce_states[VAR_23].pstate =
     (VAR_35->ucClockInfoIndex & 0xc0) >> 6;
    VAR_35 = (ATOM_PPLIB_VCE_State_Record *)
     ((u8 *)VAR_35 + sizeof(ATOM_PPLIB_VCE_State_Record));
   }
  }
  if ((FUNC_5(VAR_30->usSize) >= VAR_8) &&
   VAR_30->usUVDTableOffset) {
   UVDClockInfoArray *VAR_38 = (UVDClockInfoArray *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usUVDTableOffset) + 1);
   ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table *VAR_39 =
    (ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usUVDTableOffset) + 1 +
     1 + (VAR_38->ucNumEntries * sizeof (UVDClockInfo)));
   ATOM_PPLIB_UVD_Clock_Voltage_Limit_Record *VAR_40;
   u32 VAR_41 = VAR_39->numEntries *
    sizeof(struct radeon_uvd_clock_voltage_dependency_entry);
   VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries =
    FUNC_4(VAR_41, VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.count =
    VAR_39->numEntries;
   VAR_40 = &VAR_39->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_39->numEntries; VAR_23++) {
    UVDClockInfo *VAR_42 = (UVDClockInfo *)
     ((u8 *)&VAR_38->entries[0] +
      (VAR_40->ucUVDClockInfoIndex * sizeof(UVDClockInfo)));
    VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_23].vclk =
     FUNC_5(VAR_42->usVClkLow) | (VAR_42->ucVClkHigh << 16);
    VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_23].dclk =
     FUNC_5(VAR_42->usDClkLow) | (VAR_42->ucDClkHigh << 16);
    VAR_13->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.entries[VAR_23].v =
     FUNC_5(VAR_40->usVoltage);
    VAR_40 = (ATOM_PPLIB_UVD_Clock_Voltage_Limit_Record *)
     ((u8 *)VAR_40 + sizeof(ATOM_PPLIB_UVD_Clock_Voltage_Limit_Record));
   }
  }
  if ((FUNC_5(VAR_30->usSize) >= VAR_9) &&
   VAR_30->usSAMUTableOffset) {
   ATOM_PPLIB_SAMClk_Voltage_Limit_Table *VAR_43 =
    (ATOM_PPLIB_SAMClk_Voltage_Limit_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usSAMUTableOffset) + 1);
   ATOM_PPLIB_SAMClk_Voltage_Limit_Record *VAR_44;
   u32 VAR_45 = VAR_43->numEntries *
    sizeof(struct radeon_clock_voltage_dependency_entry);
   VAR_13->pm.dpm.dyn_state.samu_clock_voltage_dependency_table.entries =
    FUNC_4(VAR_45, VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.samu_clock_voltage_dependency_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_13->pm.dpm.dyn_state.samu_clock_voltage_dependency_table.count =
    VAR_43->numEntries;
   VAR_44 = &VAR_43->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_43->numEntries; VAR_23++) {
    VAR_13->pm.dpm.dyn_state.samu_clock_voltage_dependency_table.entries[VAR_23].clk =
     FUNC_5(VAR_44->usSAMClockLow) | (VAR_44->ucSAMClockHigh << 16);
    VAR_13->pm.dpm.dyn_state.samu_clock_voltage_dependency_table.entries[VAR_23].v =
     FUNC_5(VAR_44->usVoltage);
    VAR_44 = (ATOM_PPLIB_SAMClk_Voltage_Limit_Record *)
     ((u8 *)VAR_44 + sizeof(ATOM_PPLIB_SAMClk_Voltage_Limit_Record));
   }
  }
  if ((FUNC_5(VAR_30->usSize) >= VAR_10) &&
      VAR_30->usPPMTableOffset) {
   ATOM_PPLIB_PPM_Table *VAR_46 = (ATOM_PPLIB_PPM_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usPPMTableOffset));
   VAR_13->pm.dpm.dyn_state.ppm_table =
    FUNC_4(sizeof(struct radeon_ppm_table), VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.ppm_table) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_13->pm.dpm.dyn_state.ppm_table->ppm_design = VAR_46->ucPpmDesign;
   VAR_13->pm.dpm.dyn_state.ppm_table->cpu_core_number =
    FUNC_5(VAR_46->usCpuCoreNumber);
   VAR_13->pm.dpm.dyn_state.ppm_table->platform_tdp =
    FUNC_6(VAR_46->ulPlatformTDP);
   VAR_13->pm.dpm.dyn_state.ppm_table->small_ac_platform_tdp =
    FUNC_6(VAR_46->ulSmallACPlatformTDP);
   VAR_13->pm.dpm.dyn_state.ppm_table->platform_tdc =
    FUNC_6(VAR_46->ulPlatformTDC);
   VAR_13->pm.dpm.dyn_state.ppm_table->small_ac_platform_tdc =
    FUNC_6(VAR_46->ulSmallACPlatformTDC);
   VAR_13->pm.dpm.dyn_state.ppm_table->apu_tdp =
    FUNC_6(VAR_46->ulApuTDP);
   VAR_13->pm.dpm.dyn_state.ppm_table->dgpu_tdp =
    FUNC_6(VAR_46->ulDGpuTDP);
   VAR_13->pm.dpm.dyn_state.ppm_table->dgpu_ulv_power =
    FUNC_6(VAR_46->ulDGpuUlvPower);
   VAR_13->pm.dpm.dyn_state.ppm_table->tj_max =
    FUNC_6(VAR_46->ulTjmax);
  }
  if ((FUNC_5(VAR_30->usSize) >= VAR_11) &&
   VAR_30->usACPTableOffset) {
   ATOM_PPLIB_ACPClk_Voltage_Limit_Table *VAR_47 =
    (ATOM_PPLIB_ACPClk_Voltage_Limit_Table *)
    (VAR_14->atom_context->bios + VAR_19 +
     FUNC_5(VAR_30->usACPTableOffset) + 1);
   ATOM_PPLIB_ACPClk_Voltage_Limit_Record *VAR_48;
   u32 VAR_49 = VAR_47->numEntries *
    sizeof(struct radeon_clock_voltage_dependency_entry);
   VAR_13->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries =
    FUNC_4(VAR_49, VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   VAR_13->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.count =
    VAR_47->numEntries;
   VAR_48 = &VAR_47->entries[0];
   for (VAR_23 = 0; VAR_23 < VAR_47->numEntries; VAR_23++) {
    VAR_13->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries[VAR_23].clk =
     FUNC_5(VAR_48->usACPClockLow) | (VAR_48->ucACPClockHigh << 16);
    VAR_13->pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries[VAR_23].v =
     FUNC_5(VAR_48->usVoltage);
    VAR_48 = (ATOM_PPLIB_ACPClk_Voltage_Limit_Record *)
     ((u8 *)VAR_48 + sizeof(ATOM_PPLIB_ACPClk_Voltage_Limit_Record));
   }
  }
  if ((FUNC_5(VAR_30->usSize) >= VAR_12) &&
   VAR_30->usPowerTuneTableOffset) {
   u8 VAR_50 = *(u8 *)(VAR_14->atom_context->bios + VAR_19 +
      FUNC_5(VAR_30->usPowerTuneTableOffset));
   ATOM_PowerTune_Table *VAR_51;
   VAR_13->pm.dpm.dyn_state.cac_tdp_table =
    FUNC_4(sizeof(struct radeon_cac_tdp_table), VAR_4);
   if (!VAR_13->pm.dpm.dyn_state.cac_tdp_table) {
    FUNC_7(VAR_13);
    return -VAR_3;
   }
   if (VAR_50 > 0) {
    ATOM_PPLIB_POWERTUNE_Table_V1 *VAR_52 = (ATOM_PPLIB_POWERTUNE_Table_V1 *)
     (VAR_14->atom_context->bios + VAR_19 +
      FUNC_5(VAR_30->usPowerTuneTableOffset));
    VAR_13->pm.dpm.dyn_state.cac_tdp_table->maximum_power_delivery_limit =
     FUNC_5(VAR_52->usMaximumPowerDeliveryLimit);
    VAR_51 = &VAR_52->power_tune_table;
   } else {
    ATOM_PPLIB_POWERTUNE_Table *VAR_53 = (ATOM_PPLIB_POWERTUNE_Table *)
     (VAR_14->atom_context->bios + VAR_19 +
      FUNC_5(VAR_30->usPowerTuneTableOffset));
    VAR_13->pm.dpm.dyn_state.cac_tdp_table->maximum_power_delivery_limit = 255;
    VAR_51 = &VAR_53->power_tune_table;
   }
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->tdp = FUNC_5(VAR_51->usTDP);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->configurable_tdp =
    FUNC_5(VAR_51->usConfigurableTDP);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->tdc = FUNC_5(VAR_51->usTDC);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->battery_power_limit =
    FUNC_5(VAR_51->usBatteryPowerLimit);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->small_power_limit =
    FUNC_5(VAR_51->usSmallPowerLimit);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->low_cac_leakage =
    FUNC_5(VAR_51->usLowCACLeakage);
   VAR_13->pm.dpm.dyn_state.cac_tdp_table->high_cac_leakage =
    FUNC_5(VAR_51->usHighCACLeakage);
  }
 }

 return 0;
}
