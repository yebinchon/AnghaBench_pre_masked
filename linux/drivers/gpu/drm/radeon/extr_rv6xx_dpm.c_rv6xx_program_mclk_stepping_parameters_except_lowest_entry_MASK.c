
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* mclks; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1)
{
 struct rv6xx_power_info *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->hw.mclks[VAR_3])
   FUNC_1(VAR_1, VAR_3,
         VAR_2->hw.mclks[VAR_3]);
 }
}
