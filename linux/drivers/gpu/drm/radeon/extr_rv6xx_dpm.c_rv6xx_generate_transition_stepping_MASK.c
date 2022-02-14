
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sclk; } ;
struct rv6xx_ps {TYPE_1__ low; } ;
struct TYPE_4__ {int medium_sclk_index; } ;
struct rv6xx_power_info {TYPE_2__ hw; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int ,int ,int ,int *) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv6xx_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
            struct radeon_ps *VAR_1,
            struct radeon_ps *VAR_2)
{
 struct rv6xx_ps *VAR_3 = FUNC_2(VAR_1);
 struct rv6xx_ps *VAR_4 = FUNC_2(VAR_2);
 struct rv6xx_power_info *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_0,
        VAR_4->low.sclk,
        VAR_3->low.sclk,
        0, &VAR_5->hw.medium_sclk_index);
}
