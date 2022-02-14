
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {int mvdd_split_frequency; } ;
struct radeon_device {int dummy; } ;


 struct rv7xx_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_0(VAR_0);

 VAR_1->mvdd_split_frequency = 30000;
}
