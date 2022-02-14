
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
struct TYPE_7__ {int user_state; } ;
struct TYPE_8__ {int mutex; TYPE_3__ dpm; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int flags; TYPE_4__ pm; TYPE_2__ powerplay; } ;
typedef size_t ssize_t ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_5__ {scalar_t__ dispatch_tasks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdgpu_device*,int ,int*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 struct drm_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_7,
        struct device_attribute *VAR_8,
        const char *VAR_9,
        size_t VAR_10)
{
 struct drm_device *VAR_11 = FUNC_2(VAR_7);
 struct amdgpu_device *VAR_12 = VAR_11->dev_private;
 enum amd_pm_state_type VAR_13;

 if (FUNC_7("battery", VAR_9, FUNC_6("battery")) == 0)
  VAR_13 = VAR_5;
 else if (FUNC_7("balanced", VAR_9, FUNC_6("balanced")) == 0)
  VAR_13 = VAR_4;
 else if (FUNC_7("performance", VAR_9, FUNC_6("performance")) == 0)
  VAR_13 = VAR_6;
 else {
  VAR_10 = -VAR_3;
  goto fail;
 }

 if (FUNC_3(VAR_12)) {
  FUNC_4(&VAR_12->pm.mutex);
  VAR_12->pm.dpm.user_state = VAR_13;
  FUNC_5(&VAR_12->pm.mutex);
 } else if (VAR_12->powerplay.pp_funcs->dispatch_tasks) {
  FUNC_0(VAR_12, VAR_1, &VAR_13);
 } else {
  FUNC_4(&VAR_12->pm.mutex);
  VAR_12->pm.dpm.user_state = VAR_13;
  FUNC_5(&VAR_12->pm.mutex);


  if (!(VAR_12->flags & VAR_0) ||
      (VAR_11->switch_power_state == VAR_2))
   FUNC_1(VAR_12);
 }
fail:
 return VAR_10;
}
