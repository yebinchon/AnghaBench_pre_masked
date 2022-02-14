
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


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int user_state; } ;
struct TYPE_12__ {TYPE_5__ dpm; } ;
struct TYPE_10__ {TYPE_3__* pp_funcs; } ;
struct TYPE_8__ {TYPE_1__* ppt_funcs; } ;
struct amdgpu_device {TYPE_6__ pm; TYPE_4__ powerplay; TYPE_2__ smu; } ;
typedef int ssize_t ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_9__ {scalar_t__ get_current_power_state; } ;
struct TYPE_7__ {scalar_t__ get_current_power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 struct drm_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_2(VAR_3);
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 enum amd_pm_state_type VAR_8;

 if (FUNC_3(VAR_7)) {
  if (VAR_7->smu.ppt_funcs->get_current_power_state)
   VAR_8 = FUNC_1(VAR_7);
  else
   VAR_8 = VAR_7->pm.dpm.user_state;
 } else if (VAR_7->powerplay.pp_funcs->get_current_power_state) {
  VAR_8 = FUNC_0(VAR_7);
 } else {
  VAR_8 = VAR_7->pm.dpm.user_state;
 }

 return FUNC_4(VAR_5, VAR_0, "%s\n",
   (VAR_8 == VAR_2) ? "battery" :
   (VAR_8 == VAR_1) ? "balanced" : "performance");
}
