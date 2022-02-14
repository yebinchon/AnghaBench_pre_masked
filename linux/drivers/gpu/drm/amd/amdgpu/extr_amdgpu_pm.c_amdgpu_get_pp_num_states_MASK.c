
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_states_info {int nums; scalar_t__* states; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ get_pp_num_states; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,struct pp_states_info*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,struct pp_states_info*) ;
 int FUNC_4 (char*,int ,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
  struct device_attribute *VAR_6,
  char *VAR_7)
{
 struct drm_device *VAR_8 = FUNC_1(VAR_5);
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 struct pp_states_info VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (FUNC_2(VAR_9)) {
  VAR_13 = FUNC_3(&VAR_9->smu, &VAR_10);
  if (VAR_13)
   return VAR_13;
 } else if (VAR_9->powerplay.pp_funcs->get_pp_num_states)
  FUNC_0(VAR_9, &VAR_10);

 VAR_12 = FUNC_4(VAR_7, VAR_0, "states: %d\n", VAR_10.nums);
 for (VAR_11 = 0; VAR_11 < VAR_10.nums; VAR_11++)
  VAR_12 += FUNC_4(VAR_7 + VAR_12, VAR_0, "%d %s\n", VAR_11,
    (VAR_10.states[VAR_11] == VAR_3) ? "boot" :
    (VAR_10.states[VAR_11] == VAR_2) ? "battery" :
    (VAR_10.states[VAR_11] == VAR_1) ? "balanced" :
    (VAR_10.states[VAR_11] == VAR_4) ? "performance" : "default");

 return VAR_12;
}
