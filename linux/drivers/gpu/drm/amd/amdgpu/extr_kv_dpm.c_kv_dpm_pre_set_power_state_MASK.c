
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kv_power_info {int current_rps; int requested_rps; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ps* requested_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int FUNC_0 (struct amdgpu_device*,int *,int *) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 struct kv_power_info *VAR_2 = FUNC_1(VAR_1);
 struct amdgpu_ps VAR_3 = *VAR_1->pm.dpm.requested_ps;
 struct amdgpu_ps *VAR_4 = &VAR_3;

 FUNC_2(VAR_1, VAR_4);

 FUNC_0(VAR_1,
        &VAR_2->requested_rps,
        &VAR_2->current_rps);

 return 0;
}
