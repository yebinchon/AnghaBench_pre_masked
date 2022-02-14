
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {int psp; int dsp; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; } ;
struct TYPE_5__ {TYPE_1__* levels; } ;
struct TYPE_4__ {void* bSP; } ;
typedef TYPE_2__ NISLANDS_SMC_SWSTATE ;


 void* FUNC_0 (int ) ;
 struct ni_ps* FUNC_1 (struct radeon_ps*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
          struct radeon_ps *VAR_1,
          NISLANDS_SMC_SWSTATE *VAR_2)
{
 struct ni_ps *VAR_3 = FUNC_1(VAR_1);
 struct rv7xx_power_info *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->performance_level_count - 1; VAR_5++)
  VAR_2->levels[VAR_5].bSP = FUNC_0(VAR_4->dsp);

 VAR_2->levels[VAR_3->performance_level_count - 1].bSP =
  FUNC_0(VAR_4->psp);
}
