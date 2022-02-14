
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_time_cache {int dummy; } ;
struct stats_event_cache {int dummy; } ;
struct mod_stats {int dummy; } ;
struct core_stats {int entries; int event_entries; int index; scalar_t__ entry_id; scalar_t__ event_index; int events; int time; } ;


 struct core_stats* FUNC_0 (struct mod_stats*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct mod_stats *VAR_0)
{
 struct core_stats *VAR_1 = ((void*)0);
 struct stats_time_cache *VAR_2 = ((void*)0);
 unsigned int VAR_3 = 0;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->time, 0,
  sizeof(struct stats_time_cache) * VAR_1->entries);

 FUNC_1(VAR_1->events, 0,
  sizeof(struct stats_event_cache) * VAR_1->event_entries);

 VAR_1->index = 1;
 VAR_1->event_index = 0;


 VAR_1->entry_id = 0;
}
