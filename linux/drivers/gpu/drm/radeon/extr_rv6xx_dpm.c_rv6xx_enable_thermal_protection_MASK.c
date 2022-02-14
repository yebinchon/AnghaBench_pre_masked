
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_power_info {scalar_t__ active_auto_throttle_sources; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
         bool VAR_1)
{
 struct rv6xx_power_info *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->active_auto_throttle_sources)
  FUNC_0(VAR_0, VAR_1);
}
