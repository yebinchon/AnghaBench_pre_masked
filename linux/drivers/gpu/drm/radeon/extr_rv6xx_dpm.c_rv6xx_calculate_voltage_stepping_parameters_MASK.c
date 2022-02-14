
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vddc; int flags; } ;
struct TYPE_6__ {scalar_t__ vddc; int flags; } ;
struct TYPE_5__ {scalar_t__ vddc; int flags; } ;
struct rv6xx_ps {TYPE_3__ low; TYPE_2__ medium; TYPE_1__ high; } ;
struct TYPE_8__ {scalar_t__* vddc; int* backbias; int* pcie_gen2; size_t high_vddc_index; size_t medium_vddc_index; size_t low_vddc_index; } ;
struct rv6xx_power_info {TYPE_4__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct rv6xx_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_6,
       struct rv6xx_ps *VAR_7)
{
 struct rv6xx_power_info *VAR_8 = FUNC_0(VAR_6);

 VAR_8->hw.vddc[VAR_2] = VAR_7->high.vddc;
 VAR_8->hw.vddc[VAR_3] = VAR_7->high.vddc;
 VAR_8->hw.vddc[VAR_5] = VAR_7->medium.vddc;
 VAR_8->hw.vddc[VAR_4] = VAR_7->low.vddc;

 VAR_8->hw.backbias[VAR_2] =
  (VAR_7->high.flags & VAR_0) ? 1 : 0;
 VAR_8->hw.backbias[VAR_3] =
  (VAR_7->high.flags & VAR_0) ? 1 : 0;
 VAR_8->hw.backbias[VAR_5] =
  (VAR_7->medium.flags & VAR_0) ? 1 : 0;
 VAR_8->hw.backbias[VAR_4] =
  (VAR_7->low.flags & VAR_0) ? 1 : 0;

 VAR_8->hw.pcie_gen2[VAR_3] =
  (VAR_7->high.flags & VAR_1) ? 1 : 0;
 VAR_8->hw.pcie_gen2[VAR_5] =
  (VAR_7->medium.flags & VAR_1) ? 1 : 0;
 VAR_8->hw.pcie_gen2[VAR_4] =
  (VAR_7->low.flags & VAR_1) ? 1 : 0;

 VAR_8->hw.high_vddc_index = VAR_3;

 if ((VAR_7->high.vddc == VAR_7->medium.vddc) &&
     ((VAR_7->high.flags & VAR_0) ==
      (VAR_7->medium.flags & VAR_0)))
  VAR_8->hw.medium_vddc_index =
   VAR_8->hw.high_vddc_index;
 else
  VAR_8->hw.medium_vddc_index = VAR_5;

 if ((VAR_7->medium.vddc == VAR_7->low.vddc) &&
     ((VAR_7->medium.flags & VAR_0) ==
      (VAR_7->low.flags & VAR_0)))
  VAR_8->hw.low_vddc_index =
   VAR_8->hw.medium_vddc_index;
 else
  VAR_8->hw.medium_vddc_index = VAR_4;
}
