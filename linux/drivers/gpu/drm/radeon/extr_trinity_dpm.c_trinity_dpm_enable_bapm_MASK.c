
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_power_info {scalar_t__ enable_bapm; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 struct trinity_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_0, bool VAR_1)
{
 struct trinity_power_info *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->enable_bapm) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_0);
 }
}
