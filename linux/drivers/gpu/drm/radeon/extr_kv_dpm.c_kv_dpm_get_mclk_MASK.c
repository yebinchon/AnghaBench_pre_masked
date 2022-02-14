
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int bootup_uma_clk; } ;
struct kv_power_info {TYPE_1__ sys_info; } ;


 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

u32 FUNC_1(struct radeon_device *VAR_0, bool VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->sys_info.bootup_uma_clk;
}
