
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stats_time_cache {int entry_id; char* render_time_in_us; char* avg_render_time_in_us_last_ten; char* min_window; char* lfc_mid_point_in_us; char* max_window; char* vsync_to_flip_time_in_us; char* flip_to_vsync_time_in_us; char* num_vsync_between_flips; char* num_frames_inserted; char* inserted_duration_in_us; char* v_total_min; char* v_total_max; char* event_triggers; char** v_sync_time_in_us; char* flags; } ;
struct stats_event_cache {int entry_id; int event_string; } ;
struct mod_stats {int dummy; } ;
struct log_entry {int dummy; } ;
struct dc {TYPE_1__* ctx; } ;
struct dal_logger {int dummy; } ;
struct core_stats {int entry_id; unsigned int event_index; unsigned int index; struct stats_event_cache* events; struct stats_time_cache* time; struct dc* dc; } ;
struct TYPE_2__ {struct dal_logger* logger; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct log_entry) ;
 int FUNC_2 (struct log_entry) ;
 struct core_stats* FUNC_3 (struct mod_stats*) ;

void FUNC_4(struct mod_stats *VAR_0)
{
 struct dc *VAR_1 = ((void*)0);
 struct dal_logger *VAR_2 = ((void*)0);
 struct core_stats *VAR_3 = ((void*)0);
 struct stats_time_cache *VAR_4 = ((void*)0);
 struct stats_event_cache *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 1;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 struct log_entry VAR_9;

 if (VAR_0 == ((void*)0))
  return;

 VAR_3 = FUNC_3(VAR_0);
 VAR_1 = VAR_3->dc;
 VAR_2 = VAR_1->ctx->logger;
 VAR_4 = VAR_3->time;
 VAR_5 = VAR_3->events;

 FUNC_1(VAR_9);

 FUNC_0("==Display Caps==\n");

 FUNC_0("==Display Stats==\n");

 FUNC_0("%10s %10s %10s %10s %10s"
   " %11s %11s %17s %10s %14s"
   " %10s %10s %10s %10s %10s"
   " %10s %10s %10s %10s\n",
  "render", "avgRender",
  "minWindow", "midPoint", "maxWindow",
  "vsyncToFlip", "flipToVsync", "vsyncsBetweenFlip",
  "numFrame", "insertDuration",
  "vTotalMin", "vTotalMax", "eventTrigs",
  "vSyncTime1", "vSyncTime2", "vSyncTime3",
  "vSyncTime4", "vSyncTime5", "flags");

 for (int VAR_10 = 0; VAR_10 < VAR_3->entry_id; VAR_10++) {
  if (VAR_7 < VAR_3->event_index &&
    VAR_10 == VAR_5[VAR_7].entry_id) {
   FUNC_0("==Event==%s\n", VAR_5[VAR_7].event_string);
   VAR_7++;
  } else if (VAR_6 < VAR_3->index &&
    VAR_10 == VAR_4[VAR_6].entry_id) {
   FUNC_0("%10u %10u %10u %10u %10u"
     " %11u %11u %17u %10u %14u"
     " %10u %10u %10u %10u %10u"
     " %10u %10u %10u %10u\n",
    VAR_4[VAR_6].render_time_in_us,
    VAR_4[VAR_6].avg_render_time_in_us_last_ten,
    VAR_4[VAR_6].min_window,
    VAR_4[VAR_6].lfc_mid_point_in_us,
    VAR_4[VAR_6].max_window,
    VAR_4[VAR_6].vsync_to_flip_time_in_us,
    VAR_4[VAR_6].flip_to_vsync_time_in_us,
    VAR_4[VAR_6].num_vsync_between_flips,
    VAR_4[VAR_6].num_frames_inserted,
    VAR_4[VAR_6].inserted_duration_in_us,
    VAR_4[VAR_6].v_total_min,
    VAR_4[VAR_6].v_total_max,
    VAR_4[VAR_6].event_triggers,
    VAR_4[VAR_6].v_sync_time_in_us[0],
    VAR_4[VAR_6].v_sync_time_in_us[1],
    VAR_4[VAR_6].v_sync_time_in_us[2],
    VAR_4[VAR_6].v_sync_time_in_us[3],
    VAR_4[VAR_6].v_sync_time_in_us[4],
    VAR_4[VAR_6].flags);

   VAR_6++;
  }
 }

 FUNC_2(VAR_9);
}
