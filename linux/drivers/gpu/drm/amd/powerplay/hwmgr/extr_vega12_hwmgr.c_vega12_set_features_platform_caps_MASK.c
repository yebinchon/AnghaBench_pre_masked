
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ custom_fan_support; scalar_t__ quick_transition_support; scalar_t__ ac_dc_switch_gpio_support; scalar_t__ psm_didt_support; scalar_t__ gc_didt_support; scalar_t__ edc_didt_support; scalar_t__ dbr_ramping_support; scalar_t__ tcp_ramping_support; scalar_t__ td_ramping_support; scalar_t__ db_ramping_support; scalar_t__ sq_ramping_support; scalar_t__ didt_support; scalar_t__ sclk_throttle_low_notification; scalar_t__ force_dpm_high; scalar_t__ fuzzy_fan_control_support; scalar_t__ thermal_support; scalar_t__ odn_feature_enable; scalar_t__ od_state_in_dc_support; } ;
struct vega12_hwmgr {scalar_t__ vddci_control; int lowest_uclk_reserved_for_ulv; TYPE_4__ registry_data; } ;
struct TYPE_7__ {int platformCaps; } ;
struct TYPE_5__ {scalar_t__ usTMax; } ;
struct TYPE_6__ {TYPE_1__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; TYPE_2__ thermal_controller; struct amdgpu_device* adev; scalar_t__ backend; } ;
struct amdgpu_device {int pg_flags; } ;


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
 scalar_t__ VAR_41 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_42)
{
 struct vega12_hwmgr *VAR_43 =
   (struct vega12_hwmgr *)(VAR_42->backend);
 struct amdgpu_device *VAR_44 = VAR_42->adev;

 if (VAR_43->vddci_control == VAR_41)
  FUNC_1(VAR_42->platform_descriptor.platformCaps,
    VAR_4);

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_34);

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_12);

 if (VAR_44->pg_flags & VAR_0) {
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_37);
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_36);
 }

 if (VAR_44->pg_flags & VAR_1)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_39);

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_38);

 if (VAR_43->registry_data.odn_feature_enable)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_23);
 else {
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_20);
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_18);
 }

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_2);
 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_15);

 if (VAR_43->registry_data.od_state_in_dc_support) {
  if (VAR_43->registry_data.odn_feature_enable)
   FUNC_0(VAR_42->platform_descriptor.platformCaps,
     VAR_24);
  else {
   FUNC_0(VAR_42->platform_descriptor.platformCaps,
     VAR_21);
   FUNC_0(VAR_42->platform_descriptor.platformCaps,
     VAR_19);
  }
 }

 if (VAR_43->registry_data.thermal_support
   && VAR_43->registry_data.fuzzy_fan_control_support
   && VAR_42->thermal_controller.advanceFanControlParameters.usTMax)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_22);

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_10);
 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_28);
 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_35);

 if (VAR_43->registry_data.force_dpm_high)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_13);

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_11);

 if (VAR_43->registry_data.sclk_throttle_low_notification)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_31);



 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_26);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_9);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_30);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_7);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_33);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_32);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_6);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_8);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_16);
 FUNC_1(VAR_42->platform_descriptor.platformCaps,
   VAR_25);

 if (VAR_43->registry_data.didt_support) {
  FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_9);
  if (VAR_43->registry_data.sq_ramping_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_30);
  if (VAR_43->registry_data.db_ramping_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_7);
  if (VAR_43->registry_data.td_ramping_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_33);
  if (VAR_43->registry_data.tcp_ramping_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_32);
  if (VAR_43->registry_data.dbr_ramping_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_6);
  if (VAR_43->registry_data.edc_didt_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_8);
  if (VAR_43->registry_data.gc_didt_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_16);
  if (VAR_43->registry_data.psm_didt_support)
   FUNC_0(VAR_42->platform_descriptor.platformCaps, VAR_25);
 }

 FUNC_0(VAR_42->platform_descriptor.platformCaps,
   VAR_27);

 if (VAR_43->registry_data.ac_dc_switch_gpio_support) {
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_3);
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_29);
 }

 if (VAR_43->registry_data.quick_transition_support) {
  FUNC_1(VAR_42->platform_descriptor.platformCaps,
    VAR_3);
  FUNC_1(VAR_42->platform_descriptor.platformCaps,
    VAR_29);
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_14);
 }

 if (VAR_43->lowest_uclk_reserved_for_ulv != VAR_40) {
  FUNC_1(VAR_42->platform_descriptor.platformCaps,
    VAR_17);
  if (VAR_43->lowest_uclk_reserved_for_ulv == 1)
   FUNC_0(VAR_42->platform_descriptor.platformCaps,
     VAR_17);
 }

 if (VAR_43->registry_data.custom_fan_support)
  FUNC_0(VAR_42->platform_descriptor.platformCaps,
    VAR_5);

 return 0;
}
