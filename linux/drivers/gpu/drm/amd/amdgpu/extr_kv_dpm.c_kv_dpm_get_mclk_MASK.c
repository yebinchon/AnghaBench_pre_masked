
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bootup_uma_clk; } ;
struct kv_power_info {TYPE_1__ sys_info; } ;
struct amdgpu_device {int dummy; } ;


 struct kv_power_info* FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_1(void *VAR_0, bool VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct kv_power_info *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->sys_info.bootup_uma_clk;
}
