
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ link_rate; scalar_t__ lane_count; void* link_spread; int link_rate_set; int use_link_rate_set; } ;
struct link_training_settings {int enhanced_framing; int pattern_for_eq; void* eq_pattern_time; void* cr_pattern_time; int * post_cursor2; TYPE_3__* lane_settings; int * pre_emphasis; int * voltage_swing; TYPE_2__ link_settings; } ;
struct dc_link_training_overrides {int* enhanced_framing; int * pattern_for_eq; void** eq_pattern_time; void** cr_pattern_time; int * post_cursor2; int * pre_emphasis; int * voltage_swing; scalar_t__* downspread; } ;
struct dc_link_settings {scalar_t__ link_rate; scalar_t__ lane_count; int link_rate_set; int use_link_rate_set; } ;
struct TYPE_4__ {scalar_t__ link_rate; scalar_t__ lane_count; } ;
struct dc_link {scalar_t__ dp_ss_off; TYPE_1__ preferred_link_setting; } ;
struct TYPE_6__ {int POST_CURSOR2; int PRE_EMPHASIS; int VOLTAGE_SWING; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dc_link*) ;
 void* FUNC_1 (struct dc_link*,int) ;
 int FUNC_2 (struct link_training_settings*,char,int) ;

__attribute__((used)) static void FUNC_3(
  struct dc_link *VAR_8,
 const struct dc_link_settings *VAR_9,
 const struct dc_link_training_overrides *VAR_10,
 struct link_training_settings *VAR_11)
{
 uint32_t VAR_12;

 FUNC_2(VAR_11, '\0', sizeof(struct link_training_settings));


 VAR_11->link_settings.use_link_rate_set = VAR_9->use_link_rate_set;
 VAR_11->link_settings.link_rate_set = VAR_9->link_rate_set;

 if (VAR_8->preferred_link_setting.link_rate != VAR_2)
  VAR_11->link_settings.link_rate = VAR_8->preferred_link_setting.link_rate;
 else
  VAR_11->link_settings.link_rate = VAR_9->link_rate;

 if (VAR_8->preferred_link_setting.lane_count != VAR_1)
  VAR_11->link_settings.lane_count = VAR_8->preferred_link_setting.lane_count;
 else
  VAR_11->link_settings.lane_count = VAR_9->lane_count;
 if (VAR_8->dp_ss_off)
  VAR_11->link_settings.link_spread = VAR_4;
 else if (VAR_10->downspread != ((void*)0))
  VAR_11->link_settings.link_spread
   = *VAR_10->downspread
   ? VAR_3
   : VAR_4;
 else
  VAR_11->link_settings.link_spread = VAR_3;


 if (VAR_10->voltage_swing != ((void*)0))
  VAR_11->voltage_swing = VAR_10->voltage_swing;

 if (VAR_10->pre_emphasis != ((void*)0))
  VAR_11->pre_emphasis = VAR_10->pre_emphasis;

 if (VAR_10->post_cursor2 != ((void*)0))
  VAR_11->post_cursor2 = VAR_10->post_cursor2;


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_11->lane_settings[VAR_12].VOLTAGE_SWING =
   VAR_11->voltage_swing != ((void*)0) ?
   *VAR_11->voltage_swing :
   VAR_7;
  VAR_11->lane_settings[VAR_12].PRE_EMPHASIS =
   VAR_11->pre_emphasis != ((void*)0) ?
   *VAR_11->pre_emphasis
   : VAR_6;
  VAR_11->lane_settings[VAR_12].POST_CURSOR2 =
   VAR_11->post_cursor2 != ((void*)0) ?
   *VAR_11->post_cursor2
   : VAR_5;
 }


 if (VAR_10->cr_pattern_time != ((void*)0))
  VAR_11->cr_pattern_time = *VAR_10->cr_pattern_time;
 else
  VAR_11->cr_pattern_time = FUNC_1(VAR_8, 100);

 if (VAR_10->eq_pattern_time != ((void*)0))
  VAR_11->eq_pattern_time = *VAR_10->eq_pattern_time;
 else
  VAR_11->eq_pattern_time = FUNC_1(VAR_8, 400);

 if (VAR_10->pattern_for_eq != ((void*)0))
  VAR_11->pattern_for_eq = *VAR_10->pattern_for_eq;
 else
  VAR_11->pattern_for_eq = FUNC_0(VAR_8);

 if (VAR_10->enhanced_framing != ((void*)0))
  VAR_11->enhanced_framing = *VAR_10->enhanced_framing;
 else
  VAR_11->enhanced_framing = 1;
}
