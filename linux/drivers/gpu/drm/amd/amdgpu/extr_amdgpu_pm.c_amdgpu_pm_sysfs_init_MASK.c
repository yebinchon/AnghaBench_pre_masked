
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ od_enabled; } ;
struct TYPE_6__ {int sysfs_initialized; scalar_t__ dpm_enabled; int int_hwmon_dev; } ;
struct TYPE_5__ {scalar_t__ od_enabled; } ;
struct TYPE_4__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {scalar_t__ asic_type; int flags; TYPE_3__ pm; int dev; scalar_t__ unique_id; TYPE_2__ smu; TYPE_1__ powerplay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
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
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,struct amdgpu_device*,int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;

int FUNC_8(struct amdgpu_device *VAR_27)
{
 struct pp_hwmgr *VAR_28 = VAR_27->powerplay.pp_handle;
 int VAR_29;

 if (VAR_27->pm.sysfs_initialized)
  return 0;

 if (VAR_27->pm.dpm_enabled == 0)
  return 0;

 VAR_27->pm.int_hwmon_dev = FUNC_6(VAR_27->dev,
           VAR_4, VAR_27,
           VAR_26);
 if (FUNC_1(VAR_27->pm.int_hwmon_dev)) {
  VAR_29 = FUNC_2(VAR_27->pm.int_hwmon_dev);
  FUNC_4(VAR_27->dev,
   "Unable to register hwmon device: %d\n", VAR_29);
  return VAR_29;
 }

 VAR_29 = FUNC_5(VAR_27->dev, &VAR_9);
 if (VAR_29) {
  FUNC_0("failed to create device file for dpm state\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_8);
 if (VAR_29) {
  FUNC_0("failed to create device file for dpm state\n");
  return VAR_29;
 }


 VAR_29 = FUNC_5(VAR_27->dev, &VAR_20);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_num_states\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_10);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_cur_state\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_18);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_force_state\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_24);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_table\n");
  return VAR_29;
 }

 VAR_29 = FUNC_5(VAR_27->dev, &VAR_15);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_dpm_sclk\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_13);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_dpm_mclk\n");
  return VAR_29;
 }
 if (VAR_27->asic_type >= VAR_2) {
  VAR_29 = FUNC_5(VAR_27->dev, &VAR_16);
  if (VAR_29) {
   FUNC_0("failed to create device file pp_dpm_socclk\n");
   return VAR_29;
  }
  if (VAR_27->asic_type != VAR_1) {
   VAR_29 = FUNC_5(VAR_27->dev, &VAR_11);
   if (VAR_29) {
    FUNC_0("failed to create device file pp_dpm_dcefclk\n");
    return VAR_29;
   }
  }
 }
 if (VAR_27->asic_type >= VAR_3) {
  VAR_29 = FUNC_5(VAR_27->dev, &VAR_12);
  if (VAR_29) {
   FUNC_0("failed to create device file pp_dpm_fclk\n");
   return VAR_29;
  }
 }
 if (VAR_27->asic_type != VAR_1) {
  VAR_29 = FUNC_5(VAR_27->dev, &VAR_14);
  if (VAR_29) {
   FUNC_0("failed to create device file pp_dpm_pcie\n");
   return VAR_29;
  }
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_23);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_sclk_od\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev, &VAR_19);
 if (VAR_29) {
  FUNC_0("failed to create device file pp_mclk_od\n");
  return VAR_29;
 }
 VAR_29 = FUNC_5(VAR_27->dev,
   &VAR_22);
 if (VAR_29) {
  FUNC_0("failed to create device file	"
    "pp_power_profile_mode\n");
  return VAR_29;
 }
 if ((FUNC_7(VAR_27) && VAR_27->smu.od_enabled) ||
     (!FUNC_7(VAR_27) && VAR_28->od_enabled)) {
  VAR_29 = FUNC_5(VAR_27->dev,
    &VAR_21);
  if (VAR_29) {
   FUNC_0("failed to create device file	"
     "pp_od_clk_voltage\n");
   return VAR_29;
  }
 }
 VAR_29 = FUNC_5(VAR_27->dev,
   &VAR_5);
 if (VAR_29) {
  FUNC_0("failed to create device file	"
    "gpu_busy_level\n");
  return VAR_29;
 }

 if (!(VAR_27->flags & VAR_0) &&
      (VAR_27->asic_type != VAR_2)) {
  VAR_29 = FUNC_5(VAR_27->dev,
    &VAR_6);
  if (VAR_29) {
   FUNC_0("failed to create device file	"
     "mem_busy_percent\n");
   return VAR_29;
  }
 }

 if (!(VAR_27->flags & VAR_0)) {
  VAR_29 = FUNC_5(VAR_27->dev, &VAR_7);
  if (VAR_29) {
   FUNC_0("failed to create device file pcie_bw\n");
   return VAR_29;
  }
 }
 if (VAR_27->unique_id)
  VAR_29 = FUNC_5(VAR_27->dev, &VAR_25);
 if (VAR_29) {
  FUNC_0("failed to create device file unique_id\n");
  return VAR_29;
 }
 VAR_29 = FUNC_3(VAR_27);
 if (VAR_29) {
  FUNC_0("Failed to register debugfs file for dpm!\n");
  return VAR_29;
 }

 if ((VAR_27->asic_type >= VAR_2) &&
     !(VAR_27->flags & VAR_0)) {
  VAR_29 = FUNC_5(VAR_27->dev,
    &VAR_17);
  if (VAR_29) {
   FUNC_0("failed to create device file	"
     "pp_features\n");
   return VAR_29;
  }
 }

 VAR_27->pm.sysfs_initialized = 1;

 return 0;
}
