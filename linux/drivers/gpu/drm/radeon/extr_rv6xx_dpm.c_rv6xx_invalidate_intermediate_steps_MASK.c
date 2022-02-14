
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int medium_sclk_index; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 struct rv6xx_power_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, 0,
        VAR_1->hw.medium_sclk_index);
}
