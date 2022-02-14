
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_uvd_powertune; } ;
struct si_power_info {TYPE_1__ dyn_powertune_data; } ;
struct radeon_ps {scalar_t__ dclk; scalar_t__ vclk; } ;
struct radeon_device {int dummy; } ;


 struct si_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1)
{
 struct si_power_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->dyn_powertune_data.disable_uvd_powertune &&
     VAR_1->vclk && VAR_1->dclk)
  return 1;

 return 0;
}
