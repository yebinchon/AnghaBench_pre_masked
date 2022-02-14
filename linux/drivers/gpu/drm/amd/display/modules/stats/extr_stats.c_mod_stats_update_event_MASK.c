
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_event_cache {char* event_string; int entry_id; } ;
struct mod_stats {int dummy; } ;
struct core_stats {unsigned int event_index; unsigned int event_entries; int entry_id; struct stats_event_cache* events; } ;


 unsigned int VAR_0 ;
 struct core_stats* FUNC_0 (struct mod_stats*) ;
 int FUNC_1 (char**,char*,unsigned int) ;

void FUNC_2(struct mod_stats *VAR_1,
  char *VAR_2,
  unsigned int VAR_3)
{
 struct core_stats *VAR_4 = ((void*)0);
 struct stats_event_cache *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 if (VAR_1 == ((void*)0))
  return;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->event_index >= VAR_4->event_entries)
  return;

 VAR_5 = VAR_4->events;
 VAR_6 = VAR_4->event_index;

 VAR_7 = VAR_3;
 if (VAR_3 > VAR_0)
  VAR_7 = VAR_0;

 FUNC_1(&VAR_5[VAR_6].event_string, VAR_2, VAR_7);
 VAR_5[VAR_6].event_string[VAR_7 - 1] = '\0';

 VAR_5[VAR_6].entry_id = VAR_4->entry_id;
 VAR_4->event_index++;
 VAR_4->entry_id++;
}
