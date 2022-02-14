
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

bool FUNC_2(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_0(VAR_0);

 u32 VAR_3 = VAR_1->mem_gddr5 ? 450 : 0;

 if (VAR_2 < VAR_3)
  return 1;
 else
  return 0;

}
