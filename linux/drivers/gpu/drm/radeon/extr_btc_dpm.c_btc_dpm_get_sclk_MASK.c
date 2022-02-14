
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sclk; } ;
struct TYPE_3__ {int sclk; } ;
struct rv7xx_ps {TYPE_2__ high; TYPE_1__ low; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int requested_rps; } ;


 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_1 (int *) ;

u32 FUNC_2(struct radeon_device *VAR_0, bool VAR_1)
{
 struct evergreen_power_info *VAR_2 = FUNC_0(VAR_0);
 struct rv7xx_ps *VAR_3 = FUNC_1(&VAR_2->requested_rps);

 if (VAR_1)
  return VAR_3->low.sclk;
 else
  return VAR_3->high.sclk;
}
