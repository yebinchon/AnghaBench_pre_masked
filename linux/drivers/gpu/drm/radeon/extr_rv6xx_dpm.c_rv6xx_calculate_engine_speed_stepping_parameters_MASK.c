
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
struct TYPE_8__ {size_t low_sclk_index; size_t medium_sclk_index; size_t high_sclk_index; int * sclks; } ;
struct rv6xx_power_info {TYPE_4__ hw; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_3,
            struct rv6xx_ps *VAR_4)
{
 struct rv6xx_power_info *VAR_5 = FUNC_0(VAR_3);

 VAR_5->hw.sclks[VAR_1] =
  VAR_4->low.sclk;
 VAR_5->hw.sclks[VAR_2] =
  VAR_4->medium.sclk;
 VAR_5->hw.sclks[VAR_0] =
  VAR_4->high.sclk;

 VAR_5->hw.low_sclk_index = VAR_1;
 VAR_5->hw.medium_sclk_index = VAR_2;
 VAR_5->hw.high_sclk_index = VAR_0;
}
