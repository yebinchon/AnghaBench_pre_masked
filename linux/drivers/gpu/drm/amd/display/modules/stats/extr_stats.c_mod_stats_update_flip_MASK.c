
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_time_cache {unsigned long flip_timestamp_in_ns; unsigned long render_time_in_us; int avg_render_time_in_us_last_ten; scalar_t__ num_vsync_between_flips; unsigned long vsync_to_flip_time_in_us; unsigned long vupdate_timestamp_in_ns; int entry_id; } ;
struct mod_stats {int dummy; } ;
struct core_stats {unsigned int index; unsigned int entries; int entry_id; struct stats_time_cache* time; } ;


 struct core_stats* FUNC_0 (struct mod_stats*) ;

void FUNC_1(struct mod_stats *VAR_0,
  unsigned long VAR_1)
{
 struct core_stats *VAR_2 = ((void*)0);
 struct stats_time_cache *VAR_3 = ((void*)0);
 unsigned int VAR_4 = 0;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->index >= VAR_2->entries)
  return;

 VAR_3 = VAR_2->time;
 VAR_4 = VAR_2->index;

 VAR_3[VAR_4].flip_timestamp_in_ns = VAR_1;
 VAR_3[VAR_4].render_time_in_us =
  (VAR_1 - VAR_3[VAR_4 - 1].flip_timestamp_in_ns) / 1000;

 if (VAR_4 >= 10) {
  for (unsigned int VAR_5 = 0; VAR_5 < 10; VAR_5++)
   VAR_3[VAR_4].avg_render_time_in_us_last_ten +=
     VAR_3[VAR_4 - VAR_5].render_time_in_us;
  VAR_3[VAR_4].avg_render_time_in_us_last_ten /= 10;
 }

 if (VAR_3[VAR_4].num_vsync_between_flips > 0)
  VAR_3[VAR_4].vsync_to_flip_time_in_us =
   (VAR_1 -
    VAR_3[VAR_4].vupdate_timestamp_in_ns) / 1000;
 else
  VAR_3[VAR_4].vsync_to_flip_time_in_us =
   (VAR_1 -
    VAR_3[VAR_4 - 1].vupdate_timestamp_in_ns) / 1000;

 VAR_3[VAR_4].entry_id = VAR_2->entry_id;
 VAR_2->index++;
 VAR_2->entry_id++;
}
