
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct TYPE_2__ {scalar_t__ sclk; } ;


 struct ni_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,scalar_t__) ;

void FUNC_2(struct radeon_device *VAR_0,
        struct radeon_ps *VAR_1,
        struct radeon_ps *VAR_2)
{
 struct ni_ps *VAR_3 = FUNC_0(VAR_1);
 struct ni_ps *VAR_4 = FUNC_0(VAR_2);

 if ((VAR_1->vclk == VAR_2->vclk) &&
     (VAR_1->dclk == VAR_2->dclk))
  return;

 if (VAR_3->performance_levels[VAR_3->performance_level_count - 1].sclk >=
     VAR_4->performance_levels[VAR_4->performance_level_count - 1].sclk)
  return;

 FUNC_1(VAR_0, VAR_1->vclk, VAR_1->dclk);
}
