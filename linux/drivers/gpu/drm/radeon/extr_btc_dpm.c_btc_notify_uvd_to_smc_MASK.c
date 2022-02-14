
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int uvd_enabled; } ;


 int VAR_0 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int ,int) ;

void FUNC_3(struct radeon_device *VAR_1,
      struct radeon_ps *VAR_2)
{
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2->class, VAR_2->class2)) {
  FUNC_2(VAR_1,
           VAR_0, 1);
  VAR_3->uvd_enabled = 1;
 } else {
  FUNC_2(VAR_1,
           VAR_0, 0);
  VAR_3->uvd_enabled = 0;
 }
}
