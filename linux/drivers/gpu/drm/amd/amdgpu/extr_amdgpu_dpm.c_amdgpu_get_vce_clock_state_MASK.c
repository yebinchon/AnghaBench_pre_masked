
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t num_of_vce_states; struct amd_vce_state* vce_states; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
struct amd_vce_state {int dummy; } ;



struct amd_vce_state*
FUNC_0(void *VAR_0, u32 VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 if (VAR_1 < VAR_2->pm.dpm.num_of_vce_states)
  return &VAR_2->pm.dpm.vce_states[VAR_1];

 return ((void*)0);
}
