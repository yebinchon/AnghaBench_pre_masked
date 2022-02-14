
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_pp_display_configuration {int avail_mclk_switch_time_us; } ;
struct dc_state {struct dm_pp_display_configuration pp_display_cfg; } ;
struct dc {int ctx; TYPE_1__* current_state; } ;
struct TYPE_2__ {int pp_display_cfg; } ;


 int FUNC_0 (struct dc_state*,struct dm_pp_display_configuration*) ;
 int FUNC_1 (struct dc_state*) ;
 int FUNC_2 (int ,struct dm_pp_display_configuration*) ;
 scalar_t__ FUNC_3 (int *,struct dm_pp_display_configuration*,int) ;

__attribute__((used)) static void FUNC_4(
 struct dc *VAR_0,
 struct dc_state *VAR_1)
{
 struct dm_pp_display_configuration *VAR_2 = &VAR_1->pp_display_cfg;

 VAR_2->avail_mclk_switch_time_us = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_2);

 if (FUNC_3(&VAR_0->current_state->pp_display_cfg, VAR_2, sizeof(*VAR_2)) != 0)
  FUNC_2(VAR_0->ctx, VAR_2);
}
