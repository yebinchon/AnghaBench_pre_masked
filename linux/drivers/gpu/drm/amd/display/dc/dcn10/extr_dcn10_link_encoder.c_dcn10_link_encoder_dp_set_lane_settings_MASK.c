
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int POST_CURSOR2_SET; int PRE_EMPHASIS_SET; int VOLTAGE_SWING_SET; } ;
struct TYPE_6__ {int member_0; } ;
union dpcd_training_lane_set {int raw; TYPE_4__ bits; TYPE_1__ member_0; } ;
struct TYPE_8__ {size_t lane_count; int link_rate; } ;
struct link_training_settings {TYPE_5__* lane_settings; TYPE_3__ link_settings; } ;
struct link_encoder {int dummy; } ;
struct TYPE_7__ {int hpd_source; int connector; int transmitter; } ;
struct dcn10_link_encoder {TYPE_2__ base; } ;
struct bp_transmitter_control {size_t lanes_number; int pixel_clock; size_t lane_select; int lane_settings; int hpd_sel; int connector_obj_id; int transmitter; int action; int member_0; } ;
typedef size_t int32_t ;
struct TYPE_10__ {int POST_CURSOR2; int PRE_EMPHASIS; int VOLTAGE_SWING; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct dcn10_link_encoder* FUNC_1 (struct link_encoder*) ;
 int VAR_2 ;
 int FUNC_2 (struct dcn10_link_encoder*,struct bp_transmitter_control*) ;

void FUNC_3(
 struct link_encoder *VAR_3,
 const struct link_training_settings *VAR_4)
{
 struct dcn10_link_encoder *VAR_5 = FUNC_1(VAR_3);
 union dpcd_training_lane_set VAR_6 = { 0 };
 int32_t VAR_7 = 0;
 struct bp_transmitter_control VAR_8 = { 0 };

 if (!VAR_4) {
  FUNC_0();
  return;
 }

 VAR_8.action = VAR_2;
 VAR_8.transmitter = VAR_5->base.transmitter;
 VAR_8.connector_obj_id = VAR_5->base.connector;
 VAR_8.lanes_number = VAR_4->link_settings.lane_count;
 VAR_8.hpd_sel = VAR_5->base.hpd_source;
 VAR_8.pixel_clock = VAR_4->link_settings.link_rate *
      VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_4->link_settings.lane_count; VAR_7++) {


  VAR_6.bits.VOLTAGE_SWING_SET =
   VAR_4->lane_settings[VAR_7].VOLTAGE_SWING;
  VAR_6.bits.PRE_EMPHASIS_SET =
   VAR_4->lane_settings[VAR_7].PRE_EMPHASIS;


  if (VAR_4->link_settings.link_rate == VAR_0) {



   VAR_6.bits.POST_CURSOR2_SET =
    VAR_4->lane_settings[VAR_7].POST_CURSOR2;
  }

  VAR_8.lane_select = VAR_7;
  VAR_8.lane_settings = VAR_6.raw;


  FUNC_2(VAR_5, &VAR_8);
 }
}
