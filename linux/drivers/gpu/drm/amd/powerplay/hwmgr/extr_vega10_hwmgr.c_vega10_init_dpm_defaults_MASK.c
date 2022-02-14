
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ didt_support; scalar_t__ vr0hot_enabled; scalar_t__ vr1hot_enabled; scalar_t__ led_dpm_enabled; scalar_t__ avfs_support; scalar_t__ fw_ctf_enabled; scalar_t__ fan_control_support; scalar_t__ thermal_support; scalar_t__ enable_tdc_limit_feature; scalar_t__ enable_pkg_pwr_tracking_feature; scalar_t__ sclk_deep_sleep_support; int dcefclk_dpm_key_disabled; int pcie_dpm_key_disabled; int socclk_dpm_key_disabled; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; int prefetcher_dpm_key_disabled; } ;
struct vega10_hwmgr {TYPE_3__* smu_features; TYPE_1__ registry_data; } ;
struct pp_hwmgr {int smu_version; int chip_id; struct amdgpu_device* adev; struct vega10_hwmgr* backend; } ;
struct amdgpu_device {int unique_id; TYPE_2__* pdev; } ;
struct TYPE_6__ {int smu_feature_id; int smu_feature_bitmap; int enabled; int supported; } ;
struct TYPE_5__ {scalar_t__ revision; scalar_t__ subsystem_vendor; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 int VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (struct pp_hwmgr*) ;

__attribute__((used)) static void FUNC_4(struct pp_hwmgr *VAR_65)
{
 struct vega10_hwmgr *VAR_66 = VAR_65->backend;
 int VAR_67;
 uint32_t VAR_68, VAR_69;
 uint32_t VAR_70, VAR_71;
 struct amdgpu_device *VAR_72 = VAR_65->adev;

 FUNC_3(VAR_65);

 for (VAR_67 = 0; VAR_67 < VAR_47; VAR_67++) {
  VAR_66->smu_features[VAR_67].smu_feature_id = 0xffff;
  VAR_66->smu_features[VAR_67].smu_feature_bitmap = 1 << VAR_67;
  VAR_66->smu_features[VAR_67].enabled = 0;
  VAR_66->smu_features[VAR_67].supported = 0;
 }

 VAR_66->smu_features[VAR_37].smu_feature_id =
   VAR_7;
 VAR_66->smu_features[VAR_34].smu_feature_id =
   VAR_4;
 VAR_66->smu_features[VAR_39].smu_feature_id =
   VAR_9;
 VAR_66->smu_features[VAR_38].smu_feature_id =
   VAR_8;
 VAR_66->smu_features[VAR_40].smu_feature_id =
   VAR_10;
 VAR_66->smu_features[VAR_41].smu_feature_id =
   VAR_11;
 VAR_66->smu_features[VAR_36].smu_feature_id =
   VAR_6;
 VAR_66->smu_features[VAR_35].smu_feature_id =
   VAR_5;
 VAR_66->smu_features[VAR_33].smu_feature_id =
   VAR_3;
 VAR_66->smu_features[VAR_56].smu_feature_id =
   VAR_26;
 VAR_66->smu_features[VAR_31].smu_feature_id =
   VAR_2;
 VAR_66->smu_features[VAR_43].smu_feature_id =
   VAR_13;
 VAR_66->smu_features[VAR_45].smu_feature_id =
   VAR_15;
 VAR_66->smu_features[VAR_44].smu_feature_id =
   VAR_14;
 VAR_66->smu_features[VAR_52].smu_feature_id =
   VAR_22;
 VAR_66->smu_features[VAR_54].smu_feature_id =
   VAR_24;
 VAR_66->smu_features[VAR_55].smu_feature_id =
   VAR_25;
 VAR_66->smu_features[VAR_49].smu_feature_id =
   VAR_19;
 VAR_66->smu_features[VAR_53].smu_feature_id =
   VAR_23;
 VAR_66->smu_features[VAR_42].smu_feature_id =
   VAR_12;
 VAR_66->smu_features[VAR_29].smu_feature_id =
   VAR_0;
 VAR_66->smu_features[VAR_57].smu_feature_id =
   VAR_27;
 VAR_66->smu_features[VAR_58].smu_feature_id =
   VAR_28;
 VAR_66->smu_features[VAR_48].smu_feature_id =
   VAR_17;
 VAR_66->smu_features[VAR_50].smu_feature_id =
   VAR_20;
 VAR_66->smu_features[VAR_46].smu_feature_id =
   VAR_16;
 VAR_66->smu_features[VAR_30].smu_feature_id = VAR_1;
 VAR_66->smu_features[VAR_32].smu_feature_id = VAR_18;
 VAR_66->smu_features[VAR_51].smu_feature_id = VAR_21;

 if (!VAR_66->registry_data.prefetcher_dpm_key_disabled)
  VAR_66->smu_features[VAR_37].supported = 1;

 if (!VAR_66->registry_data.sclk_dpm_key_disabled)
  VAR_66->smu_features[VAR_34].supported = 1;

 if (!VAR_66->registry_data.mclk_dpm_key_disabled)
  VAR_66->smu_features[VAR_39].supported = 1;

 if (!VAR_66->registry_data.socclk_dpm_key_disabled)
  VAR_66->smu_features[VAR_38].supported = 1;

 if (FUNC_0(VAR_60))
  VAR_66->smu_features[VAR_40].supported = 1;

 if (FUNC_0(VAR_61))
  VAR_66->smu_features[VAR_41].supported = 1;

 if (!VAR_66->registry_data.pcie_dpm_key_disabled)
  VAR_66->smu_features[VAR_35].supported = 1;

 if (!VAR_66->registry_data.dcefclk_dpm_key_disabled)
  VAR_66->smu_features[VAR_33].supported = 1;

 if (FUNC_0(VAR_59) &&
     VAR_66->registry_data.sclk_deep_sleep_support) {
  VAR_66->smu_features[VAR_43].supported = 1;
  VAR_66->smu_features[VAR_45].supported = 1;
  VAR_66->smu_features[VAR_44].supported = 1;
  VAR_66->smu_features[VAR_42].supported = 1;
 }

 if (VAR_66->registry_data.enable_pkg_pwr_tracking_feature)
  VAR_66->smu_features[VAR_52].supported = 1;

 if (VAR_66->registry_data.enable_tdc_limit_feature)
  VAR_66->smu_features[VAR_54].supported = 1;

 if (VAR_66->registry_data.thermal_support)
  VAR_66->smu_features[VAR_55].supported = 1;

 if (VAR_66->registry_data.fan_control_support)
  VAR_66->smu_features[VAR_46].supported = 1;

 if (VAR_66->registry_data.fw_ctf_enabled)
  VAR_66->smu_features[VAR_48].supported = 1;

 if (VAR_66->registry_data.avfs_support)
  VAR_66->smu_features[VAR_31].supported = 1;

 if (VAR_66->registry_data.led_dpm_enabled)
  VAR_66->smu_features[VAR_50].supported = 1;

 if (VAR_66->registry_data.vr1hot_enabled)
  VAR_66->smu_features[VAR_58].supported = 1;

 if (VAR_66->registry_data.vr0hot_enabled)
  VAR_66->smu_features[VAR_57].supported = 1;

 FUNC_2(VAR_65, VAR_62);
 VAR_65->smu_version = FUNC_1(VAR_65);

 if ((VAR_65->smu_version & 0xff000000) == 0x5000000)
  VAR_66->smu_features[VAR_30].supported = 1;
 if (VAR_66->registry_data.didt_support)
  VAR_66->smu_features[VAR_32].supported = 1;

 VAR_69 = VAR_72->pdev->revision;
 VAR_68 = VAR_72->pdev->subsystem_vendor;

 if ((VAR_65->chip_id == 0x6862 ||
  VAR_65->chip_id == 0x6861 ||
  VAR_65->chip_id == 0x6868) &&
  (VAR_69 == 0) &&
  (VAR_68 != 0x1002))
  VAR_66->smu_features[VAR_51].supported = 1;


 FUNC_2(VAR_65, VAR_64);
 VAR_70 = FUNC_1(VAR_65);
 FUNC_2(VAR_65, VAR_63);
 VAR_71 = FUNC_1(VAR_65);

 VAR_72->unique_id = ((uint64_t)VAR_71 << 32) | VAR_70;
}
