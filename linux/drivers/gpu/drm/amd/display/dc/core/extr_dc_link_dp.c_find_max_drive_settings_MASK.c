
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t lane_count; int link_spread; int link_rate; } ;
struct link_training_settings {TYPE_2__* lane_settings; TYPE_1__ link_settings; } ;
struct dc_lane_settings {scalar_t__ VOLTAGE_SWING; scalar_t__ PRE_EMPHASIS; } ;
struct TYPE_4__ {scalar_t__ VOLTAGE_SWING; scalar_t__ PRE_EMPHASIS; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(
 const struct link_training_settings *VAR_2,
 struct link_training_settings *VAR_3)
{
 uint32_t VAR_4;
 struct dc_lane_settings VAR_5;

 VAR_5.VOLTAGE_SWING =
  VAR_2->
  lane_settings[0].VOLTAGE_SWING;
 VAR_5.PRE_EMPHASIS =
  VAR_2->
  lane_settings[0].PRE_EMPHASIS;




 for (VAR_4 = 1; VAR_4 < VAR_2->link_settings.lane_count;
   VAR_4++) {
  if (VAR_2->lane_settings[VAR_4].VOLTAGE_SWING >
   VAR_5.VOLTAGE_SWING)

   VAR_5.VOLTAGE_SWING =
   VAR_2->
   lane_settings[VAR_4].VOLTAGE_SWING;

  if (VAR_2->lane_settings[VAR_4].PRE_EMPHASIS >
    VAR_5.PRE_EMPHASIS)
   VAR_5.PRE_EMPHASIS =
   VAR_2->
   lane_settings[VAR_4].PRE_EMPHASIS;
 }



 if (VAR_5.VOLTAGE_SWING > VAR_1)
  VAR_5.VOLTAGE_SWING = VAR_1;

 if (VAR_5.PRE_EMPHASIS > VAR_0)
  VAR_5.PRE_EMPHASIS = VAR_0;






 if (VAR_5.PRE_EMPHASIS >
  FUNC_0(
   VAR_5.VOLTAGE_SWING))
  VAR_5.PRE_EMPHASIS =
  FUNC_0(
   VAR_5.VOLTAGE_SWING);
 VAR_3->link_settings.link_rate =
  VAR_2->link_settings.link_rate;
 VAR_3->link_settings.lane_count =
 VAR_2->link_settings.lane_count;
 VAR_3->link_settings.link_spread =
  VAR_2->link_settings.link_spread;

 for (VAR_4 = 0; VAR_4 <
  VAR_2->link_settings.lane_count;
  VAR_4++) {
  VAR_3->lane_settings[VAR_4].VOLTAGE_SWING =
   VAR_5.VOLTAGE_SWING;
  VAR_3->lane_settings[VAR_4].PRE_EMPHASIS =
   VAR_5.PRE_EMPHASIS;



 }

}
