
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ evclk; scalar_t__ ecclk; } ;
struct TYPE_3__ {scalar_t__ vclk; scalar_t__ dclk; } ;
struct vega10_power_state {int performance_level_count; scalar_t__ sclk_threshold; TYPE_2__ vce_clks; TYPE_1__ uvd_clks; int * performance_levels; } ;
struct pp_hwmgr {int dummy; } ;
struct pp_hw_power_state {int dummy; } ;


 int VAR_0 ;
 struct vega10_power_state* FUNC_0 (struct pp_hw_power_state const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1,
    const struct pp_hw_power_state *VAR_2,
   const struct pp_hw_power_state *VAR_3, bool *VAR_4)
{
 const struct vega10_power_state *VAR_5;
 const struct vega10_power_state *VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->performance_level_count != VAR_6->performance_level_count) {
  *VAR_4 = 0;
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->performance_level_count; VAR_7++) {
  if (!FUNC_1(&(VAR_5->performance_levels[VAR_7]), &(VAR_6->performance_levels[VAR_7]))) {

   *VAR_4 = 0;
   return 0;
  }
 }


 *VAR_4 = ((VAR_5->uvd_clks.vclk == VAR_6->uvd_clks.vclk) && (VAR_5->uvd_clks.dclk == VAR_6->uvd_clks.dclk));
 *VAR_4 &= ((VAR_5->vce_clks.evclk == VAR_6->vce_clks.evclk) && (VAR_5->vce_clks.ecclk == VAR_6->vce_clks.ecclk));
 *VAR_4 &= (VAR_5->sclk_threshold == VAR_6->sclk_threshold);

 return 0;
}
