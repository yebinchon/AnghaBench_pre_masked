
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int requested_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct igp_ps {int sclk_high; int sclk_low; } ;


 struct igp_ps* FUNC_0 (int ) ;

u32 FUNC_1(struct radeon_device *VAR_0, bool VAR_1)
{
 struct igp_ps *VAR_2 = FUNC_0(VAR_0->pm.dpm.requested_ps);

 if (VAR_1)
  return VAR_2->sclk_low;
 else
  return VAR_2->sclk_high;
}
