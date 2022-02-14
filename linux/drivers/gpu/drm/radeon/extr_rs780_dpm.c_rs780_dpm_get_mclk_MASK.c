
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct igp_power_info {int bootup_uma_clk; } ;


 struct igp_power_info* FUNC_0 (struct radeon_device*) ;

u32 FUNC_1(struct radeon_device *VAR_0, bool VAR_1)
{
 struct igp_power_info *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->bootup_uma_clk;
}
