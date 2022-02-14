
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {int fan_is_controlled_by_smc; } ;
struct radeon_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct si_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_3)
{
 struct si_power_info *VAR_4 = FUNC_0(VAR_3);
 PPSMC_Result VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);

 if (VAR_5 == VAR_1) {
  VAR_4->fan_is_controlled_by_smc = 0;
  return 0;
 } else {
  return -VAR_0;
 }
}
