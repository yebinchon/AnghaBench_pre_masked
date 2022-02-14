
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ fan_is_controlled_by_smc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

u32 FUNC_2(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 if (VAR_4->fan_is_controlled_by_smc)
  return 0;

 VAR_5 = FUNC_0(VAR_0) & VAR_1;
 return (VAR_5 >> VAR_2);
}
