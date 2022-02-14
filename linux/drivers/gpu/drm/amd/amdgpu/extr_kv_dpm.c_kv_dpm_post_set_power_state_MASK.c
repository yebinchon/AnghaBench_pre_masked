
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ps {int dummy; } ;
struct kv_power_info {struct amdgpu_ps requested_rps; } ;
struct amdgpu_device {int dummy; } ;


 struct kv_power_info* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 struct kv_power_info *VAR_2 = FUNC_0(VAR_1);
 struct amdgpu_ps *VAR_3 = &VAR_2->requested_rps;

 FUNC_1(VAR_1, VAR_3);
}
