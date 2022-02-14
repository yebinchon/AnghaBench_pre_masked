
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si_ps {int dummy; } ;
struct ni_power_info {struct si_ps current_ps; } ;
struct amdgpu_ps {struct si_ps* ps_priv; } ;
struct evergreen_power_info {struct amdgpu_ps current_rps; } ;
struct TYPE_3__ {struct amdgpu_ps* current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 struct evergreen_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct ni_power_info* FUNC_1 (struct amdgpu_device*) ;
 struct si_ps* FUNC_2 (struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_0,
     struct amdgpu_ps *VAR_1)
{
 struct si_ps *VAR_2 = FUNC_2(VAR_1);
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_0);
 struct ni_power_info *VAR_4 = FUNC_1(VAR_0);

 VAR_3->current_rps = *VAR_1;
 VAR_4->current_ps = *VAR_2;
 VAR_3->current_rps.ps_priv = &VAR_4->current_ps;
 VAR_0->pm.dpm.current_ps = &VAR_3->current_rps;
}
