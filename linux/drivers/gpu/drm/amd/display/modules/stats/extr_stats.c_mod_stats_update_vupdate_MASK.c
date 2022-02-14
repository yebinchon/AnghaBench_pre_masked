
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_time_cache {unsigned int num_vsync_between_flips; unsigned int vupdate_timestamp_in_ns; unsigned long flip_to_vsync_time_in_us; unsigned long flip_timestamp_in_ns; unsigned long* v_sync_time_in_us; } ;
struct mod_stats {int dummy; } ;
struct core_stats {unsigned int index; unsigned int entries; struct stats_time_cache* time; } ;


 unsigned int VAR_0 ;
 struct core_stats* FUNC_0 (struct mod_stats*) ;

void FUNC_1(struct mod_stats *VAR_1,
  unsigned long VAR_2)
{
 struct core_stats *VAR_3 = ((void*)0);
 struct stats_time_cache *VAR_4 = ((void*)0);
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 if (VAR_1 == ((void*)0))
  return;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->index >= VAR_3->entries)
  return;

 VAR_4 = VAR_3->time;
 VAR_5 = VAR_3->index;
 VAR_6 = VAR_4[VAR_5].num_vsync_between_flips;

 if (VAR_6 < VAR_0) {
  if (VAR_6 == 0) {
   VAR_7 =
    VAR_4[VAR_5 - 1].vupdate_timestamp_in_ns;

   VAR_4[VAR_5].flip_to_vsync_time_in_us =
    (VAR_2 -
     VAR_4[VAR_5 - 1].flip_timestamp_in_ns) /
     1000;
  } else {
   VAR_7 =
    VAR_4[VAR_5].vupdate_timestamp_in_ns;
  }

  VAR_4[VAR_5].v_sync_time_in_us[VAR_6] =
   (VAR_2 - VAR_7) / 1000;
 }

 VAR_4[VAR_5].vupdate_timestamp_in_ns = VAR_2;
 VAR_4[VAR_5].num_vsync_between_flips++;
}
