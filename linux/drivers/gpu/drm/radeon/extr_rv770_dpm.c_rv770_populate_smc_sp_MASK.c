
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {int psp; int dsp; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* levels; } ;
struct TYPE_4__ {void* bSP; } ;
typedef TYPE_2__ RV770_SMC_SWSTATE ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct radeon_device *VAR_1,
     struct radeon_ps *VAR_2,
     RV770_SMC_SWSTATE *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < (VAR_0 - 1); VAR_5++)
  VAR_3->levels[VAR_5].bSP = FUNC_0(VAR_4->dsp);

 VAR_3->levels[VAR_0 - 1].bSP =
  FUNC_0(VAR_4->psp);

 return 0;
}
