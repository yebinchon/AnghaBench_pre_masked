
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {int uvd_power_gated; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;

void FUNC_2(struct radeon_device *VAR_0, bool VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->uvd_power_gated == VAR_1)
  return;

 VAR_2->uvd_power_gated = VAR_1;

 FUNC_1(VAR_0, VAR_1);
}
