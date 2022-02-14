
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu10_power_state {int level; TYPE_1__* levels; } ;
struct pp_hwmgr {int dummy; } ;
struct pp_hw_power_state {int dummy; } ;
struct pp_clock_info {int min_eng_clk; int max_eng_clk; } ;
struct TYPE_2__ {int engine_clock; int ss_divider_index; } ;


 struct smu10_power_state* FUNC_0 (struct pp_hw_power_state const*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
 const struct pp_hw_power_state *VAR_1, struct pp_clock_info *VAR_2)
{
 const struct smu10_power_state *VAR_3 = FUNC_0(VAR_1);

 VAR_2->min_eng_clk = VAR_3->levels[0].engine_clock / (1 << (VAR_3->levels[0].ss_divider_index));
 VAR_2->max_eng_clk = VAR_3->levels[VAR_3->level - 1].engine_clock / (1 << (VAR_3->levels[VAR_3->level - 1].ss_divider_index));

 return 0;
}
