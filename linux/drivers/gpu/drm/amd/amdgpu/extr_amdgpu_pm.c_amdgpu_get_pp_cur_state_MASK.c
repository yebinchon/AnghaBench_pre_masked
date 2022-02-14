
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_context {int dummy; } ;
struct pp_states_info {int nums; int* states; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; struct smu_context smu; } ;
typedef int ssize_t ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_3__ {scalar_t__ get_pp_num_states; scalar_t__ get_current_power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,struct pp_states_info*) ;
 struct drm_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct smu_context*) ;
 int FUNC_5 (struct smu_context*,struct pp_states_info*) ;
 int FUNC_6 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_2(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 struct pp_states_info VAR_7;
 struct smu_context *VAR_8 = &VAR_6->smu;
 enum amd_pm_state_type VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0;

 if (FUNC_3(VAR_6)) {
  VAR_9 = FUNC_4(VAR_8);
  VAR_11 = FUNC_5(VAR_8, &VAR_7);
  if (VAR_11)
   return VAR_11;
 } else if (VAR_6->powerplay.pp_funcs->get_current_power_state
   && VAR_6->powerplay.pp_funcs->get_pp_num_states) {
  VAR_9 = FUNC_0(VAR_6);
  FUNC_1(VAR_6, &VAR_7);
 }

 for (VAR_10 = 0; VAR_10 < VAR_7.nums; VAR_10++) {
  if (VAR_9 == VAR_7.states[VAR_10])
   break;
 }

 if (VAR_10 == VAR_7.nums)
  VAR_10 = -VAR_0;

 return FUNC_6(VAR_4, VAR_1, "%d\n", VAR_10);
}
