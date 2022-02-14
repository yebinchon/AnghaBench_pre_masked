
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_power_info {scalar_t__ bapm_enable; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, bool VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct kv_power_info *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (VAR_3->bapm_enable) {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4)
   FUNC_0("amdgpu_kv_smc_bapm_enable failed\n");
 }
}
