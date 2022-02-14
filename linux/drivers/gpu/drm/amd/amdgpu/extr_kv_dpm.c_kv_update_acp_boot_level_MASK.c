
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kv_power_info {int acp_boot_level; int caps_stable_p_state; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3;

 if (!VAR_2->caps_stable_p_state) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 != VAR_2->acp_boot_level) {
   VAR_2->acp_boot_level = VAR_3;
   FUNC_0(VAR_1,
         VAR_0,
         (1 << VAR_2->acp_boot_level));
  }
 }
}
