
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kv_power_info {scalar_t__ caps_enable_dfs_bypass; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_device *VAR_0, u32 VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 if (VAR_2->caps_enable_dfs_bypass) {
  if (FUNC_0(VAR_1, 40000) < 200)
   VAR_3 = 3;
  else if (FUNC_0(VAR_1, 30000) < 200)
   VAR_3 = 2;
  else if (FUNC_0(VAR_1, 20000) < 200)
   VAR_3 = 7;
  else if (FUNC_0(VAR_1, 15000) < 200)
   VAR_3 = 6;
  else if (FUNC_0(VAR_1, 10000) < 200)
   VAR_3 = 8;
  else
   VAR_3 = 0;
 } else {
  VAR_3 = 0;
 }

 return VAR_3;
}
