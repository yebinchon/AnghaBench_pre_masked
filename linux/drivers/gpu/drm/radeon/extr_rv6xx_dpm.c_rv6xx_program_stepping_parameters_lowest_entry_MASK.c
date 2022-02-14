
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_power_info {scalar_t__ voltage_control; } ;
struct radeon_device {int dummy; } ;


 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_0)
{
 struct rv6xx_power_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0);
 if (VAR_1->voltage_control)
  FUNC_4(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
