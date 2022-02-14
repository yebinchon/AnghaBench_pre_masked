
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_14__ {int min; scalar_t__ max; } ;
struct TYPE_13__ {int min; scalar_t__ max; } ;
struct TYPE_12__ {void* min; void* max; } ;
struct TYPE_11__ {void* min; void* max; } ;
struct TYPE_9__ {int temperature_low; int temperature_high; int temperature_shutdown; } ;
struct TYPE_16__ {int bupdate_sclk; int sclk_down_hyst; int bupdate_mclk; int mclk_down_hyst; int mclk_activity; scalar_t__ mclk_up_hyst; int sclk_activity; scalar_t__ sclk_up_hyst; } ;
struct smu7_hwmgr {int dll_default_on; int mclk_dpm0_activity_target; int vddc_vddgfx_delta; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; int pcie_dpm_key_disabled; scalar_t__ vddci_control; scalar_t__ mvdd_control; int enable_tdc_limit_feature; int enable_pkg_pwr_tracking_feature; int ulv_supported; int vddc_phase_shed_control; int fast_watermark_threshold; scalar_t__ vdd_gfx_control; TYPE_6__ pcie_lane_power_saving; TYPE_5__ pcie_lane_performance; TYPE_4__ pcie_gen_power_saving; TYPE_3__ pcie_gen_performance; void* voltage_control; TYPE_1__ thermal_temp_setting; TYPE_8__ current_profile_setting; int force_pcie_gen; int * voting_rights_clients; int static_screen_threshold_unit; int static_screen_threshold; } ;
struct TYPE_15__ {int platformCaps; } ;
struct pp_hwmgr {int feature_mask; int workload_mask; int* workload_prority; size_t power_profile_mode; size_t default_power_profile_mode; scalar_t__ chip_id; scalar_t__ chip_family; scalar_t__ pp_table_version; TYPE_7__ platform_descriptor; scalar_t__ is_kicker; struct amdgpu_device* adev; scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {TYPE_2__* cac_dtp_table; } ;
struct amdgpu_device {int pg_flags; } ;
struct TYPE_10__ {scalar_t__ usClockStretchAmount; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *,int *,int*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pp_hwmgr *VAR_42)
{
 struct smu7_hwmgr *VAR_43 = (struct smu7_hwmgr *)(VAR_42->backend);
 struct phm_ppt_v1_information *VAR_44 =
   (struct phm_ppt_v1_information *)(VAR_42->pptable);
 struct amdgpu_device *VAR_45 = VAR_42->adev;

 VAR_43->dll_default_on = 0;
 VAR_43->mclk_dpm0_activity_target = 0xa;
 VAR_43->vddc_vddgfx_delta = 300;
 VAR_43->static_screen_threshold = VAR_24;
 VAR_43->static_screen_threshold_unit = VAR_23;
 VAR_43->voting_rights_clients[0] = VAR_28;
 VAR_43->voting_rights_clients[1]= VAR_29;
 VAR_43->voting_rights_clients[2] = VAR_30;
 VAR_43->voting_rights_clients[3]= VAR_31;
 VAR_43->voting_rights_clients[4]= VAR_32;
 VAR_43->voting_rights_clients[5]= VAR_33;
 VAR_43->voting_rights_clients[6]= VAR_34;
 VAR_43->voting_rights_clients[7]= VAR_35;

 VAR_43->mclk_dpm_key_disabled = VAR_42->feature_mask & VAR_12 ? 0 : 1;
 VAR_43->sclk_dpm_key_disabled = VAR_42->feature_mask & VAR_17 ? 0 : 1;
 VAR_43->pcie_dpm_key_disabled = VAR_42->feature_mask & VAR_16 ? 0 : 1;

 VAR_43->voltage_control = VAR_27;
 VAR_43->vddci_control = VAR_27;
 VAR_43->mvdd_control = VAR_27;
 VAR_43->enable_tdc_limit_feature = 1;
 VAR_43->enable_pkg_pwr_tracking_feature = 1;
 VAR_43->force_pcie_gen = VAR_15;
 VAR_43->ulv_supported = VAR_42->feature_mask & VAR_20 ? 1 : 0;
 VAR_43->current_profile_setting.bupdate_sclk = 1;
 VAR_43->current_profile_setting.sclk_up_hyst = 0;
 VAR_43->current_profile_setting.sclk_down_hyst = 100;
 VAR_43->current_profile_setting.sclk_activity = VAR_22;
 VAR_43->current_profile_setting.bupdate_mclk = 1;
 VAR_43->current_profile_setting.mclk_up_hyst = 0;
 VAR_43->current_profile_setting.mclk_down_hyst = 100;
 VAR_43->current_profile_setting.mclk_activity = VAR_21;
 VAR_42->workload_mask = 1 << VAR_42->workload_prority[VAR_18];
 VAR_42->power_profile_mode = VAR_18;
 VAR_42->default_power_profile_mode = VAR_18;

 if (VAR_42->chip_id == VAR_4 || VAR_42->is_kicker) {
  uint8_t VAR_46, VAR_47;
  uint16_t VAR_48 = 0;
  FUNC_0(VAR_42, VAR_39, &VAR_46, &VAR_47,
      &VAR_48);
  VAR_48 = (VAR_48 >> 5) & 0x3;
  VAR_43->vddc_phase_shed_control = ((VAR_48 << 1) | (VAR_48 >> 1)) & 0x3;
 } else if (VAR_42->chip_family == VAR_0) {
  VAR_43->vddc_phase_shed_control = 1;
 } else {
  VAR_43->vddc_phase_shed_control = 0;
 }

 if (VAR_42->chip_id == VAR_3) {
  VAR_43->thermal_temp_setting.temperature_low = 94500;
  VAR_43->thermal_temp_setting.temperature_high = 95000;
  VAR_43->thermal_temp_setting.temperature_shutdown = 104000;
 } else {
  VAR_43->thermal_temp_setting.temperature_low = 99500;
  VAR_43->thermal_temp_setting.temperature_high = 100000;
  VAR_43->thermal_temp_setting.temperature_shutdown = 104000;
 }

 VAR_43->fast_watermark_threshold = 100;
 if (FUNC_1(VAR_42,
   VAR_39, VAR_37))
  VAR_43->voltage_control = VAR_26;
 else if (FUNC_1(VAR_42,
   VAR_39, VAR_36))
  VAR_43->voltage_control = VAR_25;

 if (FUNC_2(VAR_42->platform_descriptor.platformCaps,
   VAR_7)) {
  if (FUNC_1(VAR_42,
   VAR_41, VAR_37)) {
   VAR_43->vdd_gfx_control = VAR_26;
  }
 }

 if (FUNC_2(VAR_42->platform_descriptor.platformCaps,
   VAR_8)) {
  if (FUNC_1(VAR_42,
    VAR_38, VAR_36))
   VAR_43->mvdd_control = VAR_25;
  else if (FUNC_1(VAR_42,
    VAR_38, VAR_37))
   VAR_43->mvdd_control = VAR_26;
 }

 if (VAR_27 == VAR_43->vdd_gfx_control)
  FUNC_4(VAR_42->platform_descriptor.platformCaps,
   VAR_7);

 if (FUNC_2(VAR_42->platform_descriptor.platformCaps,
   VAR_6)) {
  if (FUNC_1(VAR_42,
    VAR_40, VAR_36))
   VAR_43->vddci_control = VAR_25;
  else if (FUNC_1(VAR_42,
    VAR_40, VAR_37))
   VAR_43->vddci_control = VAR_26;
 }

 if (VAR_43->mvdd_control == VAR_27)
  FUNC_4(VAR_42->platform_descriptor.platformCaps,
    VAR_8);

 if (VAR_43->vddci_control == VAR_27)
  FUNC_4(VAR_42->platform_descriptor.platformCaps,
    VAR_6);

 if ((VAR_42->pp_table_version != VAR_19) && (VAR_42->feature_mask & VAR_11)
  && (VAR_44->cac_dtp_table->usClockStretchAmount != 0))
  FUNC_3(VAR_42->platform_descriptor.platformCaps,
     VAR_5);

 VAR_43->pcie_gen_performance.max = VAR_13;
 VAR_43->pcie_gen_performance.min = VAR_14;
 VAR_43->pcie_gen_power_saving.max = VAR_13;
 VAR_43->pcie_gen_power_saving.min = VAR_14;
 VAR_43->pcie_lane_performance.max = 0;
 VAR_43->pcie_lane_performance.min = 16;
 VAR_43->pcie_lane_power_saving.max = 0;
 VAR_43->pcie_lane_power_saving.min = 16;


 if (VAR_45->pg_flags & VAR_1)
  FUNC_3(VAR_42->platform_descriptor.platformCaps,
         VAR_9);
 if (VAR_45->pg_flags & VAR_2)
  FUNC_3(VAR_42->platform_descriptor.platformCaps,
         VAR_10);
}
