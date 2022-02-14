
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sclk; } ;
struct TYPE_6__ {int sclk; } ;
struct TYPE_5__ {int sclk; } ;
struct rv6xx_ps {TYPE_3__ high; TYPE_2__ medium; TYPE_1__ low; } ;
struct TYPE_8__ {int high_sclk_index; int medium_sclk_index; scalar_t__ low_sclk_index; } ;
struct rv6xx_power_info {TYPE_4__ hw; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int ,int ,int ,int *) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv6xx_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
       struct radeon_ps *VAR_1)
{
 struct rv6xx_ps *VAR_2 = FUNC_2(VAR_1);
 struct rv6xx_power_info *VAR_3 = FUNC_1(VAR_0);

 VAR_3->hw.low_sclk_index = 0;

 FUNC_0(VAR_0,
        VAR_2->low.sclk,
        VAR_2->medium.sclk,
        0,
        &VAR_3->hw.medium_sclk_index);
 FUNC_0(VAR_0,
        VAR_2->medium.sclk,
        VAR_2->high.sclk,
        VAR_3->hw.medium_sclk_index,
        &VAR_3->hw.high_sclk_index);
}
