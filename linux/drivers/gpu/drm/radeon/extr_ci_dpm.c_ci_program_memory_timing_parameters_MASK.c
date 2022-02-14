
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ need_update_smu7_dpm_table; } ;


 int FUNC_0 (struct radeon_device*) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->need_update_smu7_dpm_table == 0)
  return 0;

 return FUNC_0(VAR_0);
}
