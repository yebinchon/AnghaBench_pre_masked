
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


struct drm_device {scalar_t__ switch_power_state; struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int forced_level; scalar_t__ thermal_active; } ;
struct TYPE_12__ {int mutex; TYPE_5__ dpm; } ;
struct TYPE_10__ {TYPE_3__* pp_funcs; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct amdgpu_device {int flags; TYPE_6__ pm; TYPE_4__ powerplay; int smu; TYPE_2__ virt; } ;
typedef size_t ssize_t ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_9__ {scalar_t__ force_performance_level; scalar_t__ get_performance_level; } ;
struct TYPE_7__ {int (* force_dpm_level ) (struct amdgpu_device*,int) ;} ;


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
 size_t VAR_11 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 struct drm_device* FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char const*,int ) ;
 int FUNC_13 (struct amdgpu_device*,int) ;

__attribute__((used)) static ssize_t FUNC_14(struct device *VAR_12,
             struct device_attribute *VAR_13,
             const char *VAR_14,
             size_t VAR_15)
{
 struct drm_device *VAR_16 = FUNC_4(VAR_12);
 struct amdgpu_device *VAR_17 = VAR_16->dev_private;
 enum amd_dpm_forced_level VAR_18;
 enum amd_dpm_forced_level VAR_19 = 0xff;
 int VAR_20 = 0;


 if ((VAR_17->flags & VAR_9) &&
      (VAR_16->switch_power_state != VAR_10))
  return -VAR_11;

 if (FUNC_12("low", VAR_14, FUNC_11("low")) == 0) {
  VAR_18 = VAR_2;
 } else if (FUNC_12("high", VAR_14, FUNC_11("high")) == 0) {
  VAR_18 = VAR_1;
 } else if (FUNC_12("auto", VAR_14, FUNC_11("auto")) == 0) {
  VAR_18 = VAR_0;
 } else if (FUNC_12("manual", VAR_14, FUNC_11("manual")) == 0) {
  VAR_18 = VAR_3;
 } else if (FUNC_12("profile_exit", VAR_14, FUNC_11("profile_exit")) == 0) {
  VAR_18 = VAR_4;
 } else if (FUNC_12("profile_standard", VAR_14, FUNC_11("profile_standard")) == 0) {
  VAR_18 = VAR_8;
 } else if (FUNC_12("profile_min_sclk", VAR_14, FUNC_11("profile_min_sclk")) == 0) {
  VAR_18 = VAR_6;
 } else if (FUNC_12("profile_min_mclk", VAR_14, FUNC_11("profile_min_mclk")) == 0) {
  VAR_18 = VAR_5;
 } else if (FUNC_12("profile_peak", VAR_14, FUNC_11("profile_peak")) == 0) {
  VAR_18 = VAR_7;
 } else {
  VAR_15 = -VAR_11;
  goto fail;
 }


 if (FUNC_3(VAR_17)) {
  if (FUNC_0(VAR_17) &&
      VAR_17->virt.ops->force_dpm_level) {
   FUNC_6(&VAR_17->pm.mutex);
   VAR_17->virt.ops->force_dpm_level(VAR_17, VAR_18);
   FUNC_7(&VAR_17->pm.mutex);
   return VAR_15;
  } else {
   return -VAR_11;
  }
 }

 if (FUNC_5(VAR_17))
  VAR_19 = FUNC_10(&VAR_17->smu);
 else if (VAR_17->powerplay.pp_funcs->get_performance_level)
  VAR_19 = FUNC_2(VAR_17);

 if (VAR_19 == VAR_18)
  return VAR_15;


 if (!(VAR_19 & (VAR_8 |
     VAR_6 |
     VAR_5 |
     VAR_7)) &&
     (VAR_18 == VAR_4)) {
  FUNC_8("Currently not in any profile mode!\n");
  return -VAR_11;
 }

 if (FUNC_5(VAR_17)) {
  VAR_20 = FUNC_9(&VAR_17->smu, VAR_18);
  if (VAR_20)
   VAR_15 = -VAR_11;
 } else if (VAR_17->powerplay.pp_funcs->force_performance_level) {
  FUNC_6(&VAR_17->pm.mutex);
  if (VAR_17->pm.dpm.thermal_active) {
   VAR_15 = -VAR_11;
   FUNC_7(&VAR_17->pm.mutex);
   goto fail;
  }
  VAR_20 = FUNC_1(VAR_17, VAR_18);
  if (VAR_20)
   VAR_15 = -VAR_11;
  else
   VAR_17->pm.dpm.forced_level = VAR_18;
  FUNC_7(&VAR_17->pm.mutex);
 }

fail:
 return VAR_15;
}
