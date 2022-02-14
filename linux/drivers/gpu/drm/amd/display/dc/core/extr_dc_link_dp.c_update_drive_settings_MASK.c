
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t lane_count; } ;
struct link_training_settings {int * post_cursor2; TYPE_2__* lane_settings; int * pre_emphasis; int * voltage_swing; TYPE_1__ link_settings; } ;
struct TYPE_4__ {int POST_CURSOR2; int PRE_EMPHASIS; int VOLTAGE_SWING; } ;



__attribute__((used)) static void FUNC_0(
  struct link_training_settings *VAR_0,
  struct link_training_settings VAR_1)
{
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1.link_settings.lane_count; VAR_2++) {
  if (VAR_0->voltage_swing == ((void*)0))
   VAR_0->lane_settings[VAR_2].VOLTAGE_SWING = VAR_1.lane_settings[VAR_2].VOLTAGE_SWING;
  else
   VAR_0->lane_settings[VAR_2].VOLTAGE_SWING = *VAR_0->voltage_swing;

  if (VAR_0->pre_emphasis == ((void*)0))
   VAR_0->lane_settings[VAR_2].PRE_EMPHASIS = VAR_1.lane_settings[VAR_2].PRE_EMPHASIS;
  else
   VAR_0->lane_settings[VAR_2].PRE_EMPHASIS = *VAR_0->pre_emphasis;

  if (VAR_0->post_cursor2 == ((void*)0))
   VAR_0->lane_settings[VAR_2].POST_CURSOR2 = VAR_1.lane_settings[VAR_2].POST_CURSOR2;
  else
   VAR_0->lane_settings[VAR_2].POST_CURSOR2 = *VAR_0->post_cursor2;
 }
}
