
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int mclk; } ;
struct TYPE_7__ {int mclk; } ;
struct rv7xx_ps {TYPE_4__ high; TYPE_3__ low; } ;
struct TYPE_5__ {int requested_ps; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 struct rv7xx_ps* FUNC_0 (int ) ;

u32 FUNC_1(struct radeon_device *VAR_0, bool VAR_1)
{
 struct rv7xx_ps *VAR_2 = FUNC_0(VAR_0->pm.dpm.requested_ps);

 if (VAR_1)
  return VAR_2->low.mclk;
 else
  return VAR_2->high.mclk;
}
