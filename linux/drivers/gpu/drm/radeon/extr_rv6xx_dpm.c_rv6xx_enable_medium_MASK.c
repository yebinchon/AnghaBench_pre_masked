
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_power_info {int restricted_levels; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1)
{
 struct rv6xx_power_info *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->restricted_levels < 2)
  FUNC_0(VAR_1, VAR_0, 1);
}
