
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sclks; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_2)
{
 struct rv6xx_power_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2,
          VAR_3->hw.sclks[VAR_0],
          VAR_0);

 FUNC_1(VAR_2,
          VAR_3->hw.sclks[VAR_1],
          VAR_1);

}
