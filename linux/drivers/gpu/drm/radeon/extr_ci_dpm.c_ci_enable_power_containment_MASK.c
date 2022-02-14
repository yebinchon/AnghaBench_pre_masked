
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct radeon_cac_tdp_table* cac_tdp_table; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct radeon_cac_tdp_table {int maximum_power_delivery_limit; } ;
struct ci_power_info {int power_containment_features; scalar_t__ caps_power_containment; scalar_t__ enable_pkg_pwr_tracking_feature; scalar_t__ enable_tdc_limit_feature; scalar_t__ enable_bapm_feature; } ;
typedef scalar_t__ PPSMC_Result ;


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
 scalar_t__ VAR_10 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_11, bool VAR_12)
{
 struct ci_power_info *VAR_13 = FUNC_0(VAR_11);
 PPSMC_Result VAR_14;
 int VAR_15 = 0;

 if (VAR_12) {
  VAR_13->power_containment_features = 0;
  if (VAR_13->caps_power_containment) {
   if (VAR_13->enable_bapm_feature) {
    VAR_14 = FUNC_1(VAR_11, VAR_5);
    if (VAR_14 != VAR_10)
     VAR_15 = -VAR_0;
    else
     VAR_13->power_containment_features |= VAR_1;
   }

   if (VAR_13->enable_tdc_limit_feature) {
    VAR_14 = FUNC_1(VAR_11, VAR_9);
    if (VAR_14 != VAR_10)
     VAR_15 = -VAR_0;
    else
     VAR_13->power_containment_features |= VAR_3;
   }

   if (VAR_13->enable_pkg_pwr_tracking_feature) {
    VAR_14 = FUNC_1(VAR_11, VAR_7);
    if (VAR_14 != VAR_10) {
     VAR_15 = -VAR_0;
    } else {
     struct radeon_cac_tdp_table *VAR_16 =
      VAR_11->pm.dpm.dyn_state.cac_tdp_table;
     u32 VAR_17 =
      (u32)(VAR_16->maximum_power_delivery_limit * 256);

     VAR_13->power_containment_features |= VAR_2;

     FUNC_2(VAR_11, VAR_17);
    }
   }
  }
 } else {
  if (VAR_13->caps_power_containment && VAR_13->power_containment_features) {
   if (VAR_13->power_containment_features & VAR_3)
    FUNC_1(VAR_11, VAR_8);

   if (VAR_13->power_containment_features & VAR_1)
    FUNC_1(VAR_11, VAR_4);

   if (VAR_13->power_containment_features & VAR_2)
    FUNC_1(VAR_11, VAR_6);
   VAR_13->power_containment_features = 0;
  }
 }

 return VAR_15;
}
