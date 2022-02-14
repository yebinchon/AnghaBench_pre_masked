
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_states_info {int* states; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int pp_force_state_enabled; TYPE_2__ powerplay; } ;
typedef size_t ssize_t ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_3__ {scalar_t__ get_pp_num_states; scalar_t__ dispatch_tasks; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,int ,int*) ;
 int FUNC_2 (struct amdgpu_device*,struct pp_states_info*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 struct drm_device* FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (char const*,int ,unsigned long*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
  struct device_attribute *VAR_5,
  const char *VAR_6,
  size_t VAR_7)
{
 struct drm_device *VAR_8 = FUNC_4(VAR_4);
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 enum amd_pm_state_type VAR_10 = 0;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_7(VAR_6) == 1)
  VAR_9->pp_force_state_enabled = 0;
 else if (FUNC_5(VAR_9))
  VAR_9->pp_force_state_enabled = 0;
 else if (VAR_9->powerplay.pp_funcs->dispatch_tasks &&
   VAR_9->powerplay.pp_funcs->get_pp_num_states) {
  struct pp_states_info VAR_13;

  VAR_12 = FUNC_6(VAR_6, 0, &VAR_11);
  if (VAR_12 || VAR_11 >= FUNC_0(VAR_13.states)) {
   VAR_7 = -VAR_1;
   goto fail;
  }
  VAR_11 = FUNC_3(VAR_11, FUNC_0(VAR_13.states));

  FUNC_2(VAR_9, &VAR_13);
  VAR_10 = VAR_13.states[VAR_11];

  if (VAR_10 != VAR_3 &&
      VAR_10 != VAR_2) {
   FUNC_1(VAR_9,
     VAR_0, &VAR_10);
   VAR_9->pp_force_state_enabled = 1;
  }
 }
fail:
 return VAR_7;
}
