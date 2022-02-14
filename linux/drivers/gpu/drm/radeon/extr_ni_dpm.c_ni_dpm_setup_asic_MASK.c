
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ pcie_performance_request; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

void FUNC_9(struct radeon_device *VAR_0)
{
 struct evergreen_power_info *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  FUNC_0("Failed to load MC firmware!\n");
 FUNC_5(VAR_0);
 FUNC_1(VAR_0);
 FUNC_7(VAR_0);
 if (VAR_1->pcie_performance_request)
  FUNC_3(VAR_0);
 FUNC_8(VAR_0);
 FUNC_6(VAR_0);
}
