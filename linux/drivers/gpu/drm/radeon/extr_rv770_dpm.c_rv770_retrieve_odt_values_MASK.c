
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {scalar_t__ mclk_odt_threshold; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->mclk_odt_threshold == 0)
  return;

 if ((VAR_2->family == VAR_1) || (VAR_2->family == VAR_0))
  FUNC_0(VAR_2);
}
