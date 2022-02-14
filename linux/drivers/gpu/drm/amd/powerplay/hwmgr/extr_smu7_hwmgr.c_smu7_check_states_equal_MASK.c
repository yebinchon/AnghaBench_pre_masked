
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ evclk; scalar_t__ ecclk; } ;
struct TYPE_3__ {scalar_t__ vclk; scalar_t__ dclk; } ;
struct smu7_power_state {int performance_level_count; scalar_t__ sclk_threshold; TYPE_2__ vce_clks; TYPE_1__ uvd_clks; int * performance_levels; } ;
struct smu7_hwmgr {int need_update_smu7_dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_hw_power_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smu7_power_state* FUNC_0 (struct pp_hw_power_state const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_4,
  const struct pp_hw_power_state *VAR_5,
  const struct pp_hw_power_state *VAR_6, bool *VAR_7)
{
 const struct smu7_power_state *VAR_8;
 const struct smu7_power_state *VAR_9;
 int VAR_10;
 struct smu7_hwmgr *VAR_11 = (struct smu7_hwmgr *)(VAR_4->backend);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_5);
 VAR_9 = FUNC_0(VAR_6);

 if (VAR_8->performance_level_count != VAR_9->performance_level_count) {
  *VAR_7 = 0;
  return 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->performance_level_count; VAR_10++) {
  if (!FUNC_1(&(VAR_8->performance_levels[VAR_10]), &(VAR_9->performance_levels[VAR_10]))) {

   *VAR_7 = 0;
   return 0;
  }
 }


 *VAR_7 = ((VAR_8->uvd_clks.vclk == VAR_9->uvd_clks.vclk) && (VAR_8->uvd_clks.dclk == VAR_9->uvd_clks.dclk));
 *VAR_7 &= ((VAR_8->vce_clks.evclk == VAR_9->vce_clks.evclk) && (VAR_8->vce_clks.ecclk == VAR_9->vce_clks.ecclk));
 *VAR_7 &= (VAR_8->sclk_threshold == VAR_9->sclk_threshold);

 *VAR_7 &= !(VAR_11->need_update_smu7_dpm_table & (VAR_1 |
       VAR_0 |
       VAR_2));

 return 0;
}
