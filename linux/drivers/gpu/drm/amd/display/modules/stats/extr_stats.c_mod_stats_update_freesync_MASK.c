
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_time_cache {unsigned int v_total_min; unsigned int v_total_max; unsigned int event_triggers; unsigned int min_window; unsigned int max_window; unsigned int lfc_mid_point_in_us; unsigned int num_frames_inserted; unsigned int inserted_duration_in_us; } ;
struct mod_stats {int dummy; } ;
struct core_stats {unsigned int index; unsigned int entries; struct stats_time_cache* time; } ;


 struct core_stats* FUNC_0 (struct mod_stats*) ;

void FUNC_1(struct mod_stats *VAR_0,
  unsigned int VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3,
  unsigned int VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8)
{
 struct core_stats *VAR_9 = ((void*)0);
 struct stats_time_cache *VAR_10 = ((void*)0);
 unsigned int VAR_11 = 0;

 if (VAR_0 == ((void*)0))
  return;

 VAR_9 = FUNC_0(VAR_0);

 if (VAR_9->index >= VAR_9->entries)
  return;

 VAR_10 = VAR_9->time;
 VAR_11 = VAR_9->index;

 VAR_10[VAR_11].v_total_min = VAR_1;
 VAR_10[VAR_11].v_total_max = VAR_2;
 VAR_10[VAR_11].event_triggers = VAR_3;
 VAR_10[VAR_11].min_window = VAR_4;
 VAR_10[VAR_11].max_window = VAR_5;
 VAR_10[VAR_11].lfc_mid_point_in_us = VAR_6;
 VAR_10[VAR_11].num_frames_inserted = VAR_7;
 VAR_10[VAR_11].inserted_duration_in_us = VAR_8;
}
