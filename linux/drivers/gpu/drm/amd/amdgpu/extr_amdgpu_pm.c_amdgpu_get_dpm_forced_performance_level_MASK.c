
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {scalar_t__ switch_power_state; struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int forced_level; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_4__ pm; TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_5__ {scalar_t__ get_performance_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 struct drm_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_11,
      struct device_attribute *VAR_12,
        char *VAR_13)
{
 struct drm_device *VAR_14 = FUNC_2(VAR_11);
 struct amdgpu_device *VAR_15 = VAR_14->dev_private;
 enum amd_dpm_forced_level VAR_16 = 0xff;

 if (FUNC_1(VAR_15))
  return 0;

 if ((VAR_15->flags & VAR_8) &&
     (VAR_14->switch_power_state != VAR_9))
  return FUNC_5(VAR_13, VAR_10, "off\n");

 if (FUNC_3(VAR_15))
  VAR_16 = FUNC_4(&VAR_15->smu);
 else if (VAR_15->powerplay.pp_funcs->get_performance_level)
  VAR_16 = FUNC_0(VAR_15);
 else
  VAR_16 = VAR_15->pm.dpm.forced_level;

 return FUNC_5(VAR_13, VAR_10, "%s\n",
   (VAR_16 == VAR_0) ? "auto" :
   (VAR_16 == VAR_2) ? "low" :
   (VAR_16 == VAR_1) ? "high" :
   (VAR_16 == VAR_3) ? "manual" :
   (VAR_16 == VAR_7) ? "profile_standard" :
   (VAR_16 == VAR_5) ? "profile_min_sclk" :
   (VAR_16 == VAR_4) ? "profile_min_mclk" :
   (VAR_16 == VAR_6) ? "profile_peak" :
   "unknown");
}
