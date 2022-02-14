
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_power_info {scalar_t__ voltage_drop_in_dce; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 struct trinity_power_info* FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_0)
{
 struct trinity_power_info *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->voltage_drop_in_dce)
  FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0);
}
