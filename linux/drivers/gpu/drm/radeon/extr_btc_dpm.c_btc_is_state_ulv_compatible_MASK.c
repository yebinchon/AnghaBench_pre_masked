
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mclk; scalar_t__ vddci; } ;
struct rv7xx_ps {TYPE_2__ low; } ;
struct rv7xx_pl {scalar_t__ mclk; scalar_t__ vddci; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {struct rv7xx_pl* pl; } ;
struct evergreen_power_info {TYPE_1__ ulv; } ;


 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1)
{
 struct rv7xx_ps *VAR_2 = FUNC_1(VAR_1);
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_0);
 struct rv7xx_pl *VAR_4 = VAR_3->ulv.pl;

 if (VAR_2->low.mclk != VAR_4->mclk)
  return 0;

 if (VAR_2->low.vddci != VAR_4->vddci)
  return 0;



 return 1;
}
