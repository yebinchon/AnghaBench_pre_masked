
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {struct radeon_ps requested_rps; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_ps*) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 struct evergreen_power_info *VAR_1 = FUNC_1(VAR_0);
 struct radeon_ps *VAR_2 = &VAR_1->requested_rps;

 FUNC_0(VAR_0, VAR_2);
}
