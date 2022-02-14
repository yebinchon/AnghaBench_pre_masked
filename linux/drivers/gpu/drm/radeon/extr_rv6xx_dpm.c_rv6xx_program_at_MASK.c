
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* rp; int* lp; } ;
struct rv6xx_power_info {int bsp; TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int,int,int,int) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 struct rv6xx_power_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0,
      (VAR_1->hw.rp[0] * VAR_1->bsp) / 200,
      (VAR_1->hw.rp[1] * VAR_1->bsp) / 200,
      (VAR_1->hw.lp[2] * VAR_1->bsp) / 200,
      (VAR_1->hw.lp[1] * VAR_1->bsp) / 200);
}
