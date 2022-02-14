
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sumo_ps {int num_levels; TYPE_1__* levels; } ;
struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ sclk; } ;


 struct sumo_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
          struct radeon_ps *VAR_1,
          struct radeon_ps *VAR_2)
{
 struct sumo_ps *VAR_3 = FUNC_0(VAR_1);
 struct sumo_ps *VAR_4 = FUNC_0(VAR_2);

 if ((VAR_1->vclk == VAR_2->vclk) &&
     (VAR_1->dclk == VAR_2->dclk))
  return;

 if (VAR_3->levels[VAR_3->num_levels - 1].sclk >=
     VAR_4->levels[VAR_4->num_levels - 1].sclk)
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
