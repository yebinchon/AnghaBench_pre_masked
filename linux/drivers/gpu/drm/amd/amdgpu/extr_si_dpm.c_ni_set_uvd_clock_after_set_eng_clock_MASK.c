
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct amdgpu_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ sclk; } ;


 int FUNC_0 (struct amdgpu_device*,scalar_t__,scalar_t__) ;
 struct si_ps* FUNC_1 (struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
       struct amdgpu_ps *VAR_1,
       struct amdgpu_ps *VAR_2)
{
 struct si_ps *VAR_3 = FUNC_1(VAR_1);
 struct si_ps *VAR_4 = FUNC_1(VAR_2);

 if ((VAR_1->vclk == VAR_2->vclk) &&
     (VAR_1->dclk == VAR_2->dclk))
  return;

 if (VAR_3->performance_levels[VAR_3->performance_level_count - 1].sclk <
     VAR_4->performance_levels[VAR_4->performance_level_count - 1].sclk)
  return;

 FUNC_0(VAR_0, VAR_1->vclk, VAR_1->dclk);
}
