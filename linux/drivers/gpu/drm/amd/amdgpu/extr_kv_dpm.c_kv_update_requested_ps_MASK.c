
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kv_ps {int dummy; } ;
struct amdgpu_ps {struct kv_ps* ps_priv; } ;
struct kv_power_info {struct amdgpu_ps requested_rps; struct kv_ps requested_ps; } ;
struct TYPE_4__ {struct amdgpu_ps* requested_ps; } ;
struct TYPE_3__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 struct kv_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct kv_ps* FUNC_1 (struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
       struct amdgpu_ps *VAR_1)
{
 struct kv_ps *VAR_2 = FUNC_1(VAR_1);
 struct kv_power_info *VAR_3 = FUNC_0(VAR_0);

 VAR_3->requested_rps = *VAR_1;
 VAR_3->requested_ps = *VAR_2;
 VAR_3->requested_rps.ps_priv = &VAR_3->requested_ps;
 VAR_0->pm.dpm.requested_ps = &VAR_3->requested_rps;
}
