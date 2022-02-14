
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vega20_od8_settings {int overdrive8_capabilities; } ;
struct TYPE_9__ {int count; TYPE_2__* dpm_levels; } ;
struct TYPE_10__ {TYPE_3__ mem_table; } ;
struct TYPE_12__ {int MinVoltageGfx; int MaxVoltageGfx; int FanPwmMin; int FanMaximumRpm; scalar_t__ FanZeroRpmEnable; } ;
struct TYPE_7__ {TYPE_6__ pp_table; } ;
struct vega20_hwmgr {TYPE_5__* smu_features; TYPE_4__ dpm_table; struct vega20_od8_settings od8_settings; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {int od_enabled; scalar_t__ backend; scalar_t__ pptable; } ;
struct phm_ppt_v3_information {int* od_settings_max; int* od_settings_min; scalar_t__* od_feature_capabilities; } ;
struct TYPE_11__ {scalar_t__ enabled; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_6__ PPTable_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;

__attribute__((used)) static int FUNC_0(
  struct pp_hwmgr *VAR_35)
{
 struct phm_ppt_v3_information *VAR_36 =
  (struct phm_ppt_v3_information *)VAR_35->pptable;
 struct vega20_hwmgr *VAR_37 = (struct vega20_hwmgr *)(VAR_35->backend);
 PPTable_t *VAR_38 = &(VAR_37->smc_state_table.pp_table);
 struct vega20_od8_settings *VAR_39 = &(VAR_37->od8_settings);

 VAR_39->overdrive8_capabilities = 0;

 if (VAR_37->smu_features[VAR_10].enabled) {
  if (VAR_36->od_feature_capabilities[VAR_4] &&
      VAR_36->od_settings_max[VAR_24] > 0 &&
      VAR_36->od_settings_min[VAR_25] > 0 &&
      (VAR_36->od_settings_max[VAR_24] >=
      VAR_36->od_settings_min[VAR_25]))
   VAR_39->overdrive8_capabilities |= VAR_18;

  if (VAR_36->od_feature_capabilities[VAR_3] &&
      (VAR_36->od_settings_min[VAR_26] >=
       VAR_38->MinVoltageGfx / VAR_34) &&
      (VAR_36->od_settings_max[VAR_27] <=
       VAR_38->MaxVoltageGfx / VAR_34) &&
      (VAR_36->od_settings_max[VAR_27] >=
       VAR_36->od_settings_min[VAR_26]))
   VAR_39->overdrive8_capabilities |= VAR_17;
 }

 if (VAR_37->smu_features[VAR_11].enabled) {
  VAR_36->od_settings_min[VAR_30] =
   VAR_37->dpm_table.mem_table.dpm_levels[VAR_37->dpm_table.mem_table.count - 2].value;
  if (VAR_36->od_feature_capabilities[VAR_9] &&
      VAR_36->od_settings_min[VAR_30] > 0 &&
      VAR_36->od_settings_max[VAR_30] > 0 &&
      (VAR_36->od_settings_max[VAR_30] >=
      VAR_36->od_settings_min[VAR_30]))
   VAR_39->overdrive8_capabilities |= VAR_33;
 }

 if (VAR_36->od_feature_capabilities[VAR_6] &&
     VAR_36->od_settings_max[VAR_29] > 0 &&
     VAR_36->od_settings_max[VAR_29] <= 100 &&
     VAR_36->od_settings_min[VAR_29] > 0 &&
     VAR_36->od_settings_min[VAR_29] <= 100)
  VAR_39->overdrive8_capabilities |= VAR_20;

 if (VAR_37->smu_features[VAR_12].enabled) {
  if (VAR_36->od_feature_capabilities[VAR_0] &&
      VAR_36->od_settings_min[VAR_21] > 0 &&
      VAR_36->od_settings_max[VAR_21] > 0 &&
      (VAR_36->od_settings_max[VAR_21] >=
       VAR_36->od_settings_min[VAR_21]))
   VAR_39->overdrive8_capabilities |= VAR_14;

  if (VAR_36->od_feature_capabilities[VAR_1] &&
      (VAR_36->od_settings_min[VAR_22] >=
      (VAR_38->FanPwmMin * VAR_38->FanMaximumRpm / 100)) &&
      VAR_36->od_settings_max[VAR_22] > 0 &&
      (VAR_36->od_settings_max[VAR_22] >=
       VAR_36->od_settings_min[VAR_22]))
   VAR_39->overdrive8_capabilities |= VAR_15;
 }

 if (VAR_37->smu_features[VAR_13].enabled) {
  if (VAR_36->od_feature_capabilities[VAR_7] &&
      VAR_36->od_settings_max[VAR_23] > 0 &&
      VAR_36->od_settings_min[VAR_23] > 0 &&
      (VAR_36->od_settings_max[VAR_23] >=
       VAR_36->od_settings_min[VAR_23]))
   VAR_39->overdrive8_capabilities |= VAR_31;

  if (VAR_36->od_feature_capabilities[VAR_8] &&
      VAR_36->od_settings_max[VAR_28] > 0 &&
      VAR_36->od_settings_min[VAR_28] > 0 &&
      (VAR_36->od_settings_max[VAR_28] >=
       VAR_36->od_settings_min[VAR_28]))
   VAR_39->overdrive8_capabilities |= VAR_32;
 }

 if (VAR_36->od_feature_capabilities[VAR_5])
  VAR_39->overdrive8_capabilities |= VAR_19;

 if (VAR_36->od_feature_capabilities[VAR_2] &&
     VAR_38->FanZeroRpmEnable)
  VAR_39->overdrive8_capabilities |= VAR_16;

 if (!VAR_39->overdrive8_capabilities)
  VAR_35->od_enabled = 0;

 return 0;
}
