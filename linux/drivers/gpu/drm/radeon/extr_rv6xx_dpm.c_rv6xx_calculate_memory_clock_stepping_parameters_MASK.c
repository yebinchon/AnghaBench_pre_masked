
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mclk; } ;
struct TYPE_6__ {scalar_t__ mclk; } ;
struct TYPE_5__ {scalar_t__ mclk; } ;
struct rv6xx_ps {TYPE_3__ low; TYPE_2__ medium; TYPE_1__ high; } ;
struct TYPE_8__ {scalar_t__* mclks; size_t high_mclk_index; size_t medium_mclk_index; size_t low_mclk_index; } ;
struct rv6xx_power_info {TYPE_4__ hw; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_4,
            struct rv6xx_ps *VAR_5)
{
 struct rv6xx_power_info *VAR_6 = FUNC_0(VAR_4);

 VAR_6->hw.mclks[VAR_0] =
  VAR_5->high.mclk;
 VAR_6->hw.mclks[VAR_1] =
  VAR_5->high.mclk;
 VAR_6->hw.mclks[VAR_3] =
  VAR_5->medium.mclk;
 VAR_6->hw.mclks[VAR_2] =
  VAR_5->low.mclk;

 VAR_6->hw.high_mclk_index = VAR_1;

 if (VAR_5->high.mclk == VAR_5->medium.mclk)
  VAR_6->hw.medium_mclk_index =
   VAR_6->hw.high_mclk_index;
 else
  VAR_6->hw.medium_mclk_index = VAR_3;


 if (VAR_5->medium.mclk == VAR_5->low.mclk)
  VAR_6->hw.low_mclk_index =
   VAR_6->hw.medium_mclk_index;
 else
  VAR_6->hw.low_mclk_index = VAR_2;
}
