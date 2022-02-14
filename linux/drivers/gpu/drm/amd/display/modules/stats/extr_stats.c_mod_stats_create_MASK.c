
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_time_cache {int dummy; } ;
struct stats_event_cache {int dummy; } ;
struct persistent_data_flag {int dummy; } ;
struct mod_stats {int dummy; } ;
struct dc {int ctx; } ;
struct core_stats {unsigned int enabled; unsigned int entries; unsigned int event_entries; int index; struct core_stats* time; struct mod_stats public; scalar_t__ entry_id; scalar_t__ event_index; int * events; struct dc* dc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int ,unsigned int*,int,struct persistent_data_flag*) ;
 void* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct core_stats*) ;
 struct core_stats* FUNC_3 (int,int ) ;

struct mod_stats *FUNC_4(struct dc *VAR_7)
{
 struct core_stats *VAR_8 = ((void*)0);
 struct persistent_data_flag VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;

 if (VAR_7 == ((void*)0))
  goto fail_construct;

 VAR_8 = FUNC_3(sizeof(struct core_stats), VAR_6);

 if (VAR_8 == ((void*)0))
  goto fail_construct;

 VAR_8->dc = VAR_7;

 VAR_8->enabled = VAR_1;
 if (FUNC_0(VAR_7->ctx, ((void*)0), ((void*)0),
   VAR_0,
   &VAR_10, sizeof(unsigned int), &VAR_9))
  VAR_8->enabled = VAR_10;

 if (VAR_8->enabled) {
  VAR_8->entries = VAR_3;
  if (FUNC_0(VAR_7->ctx, ((void*)0), ((void*)0),
    VAR_2,
    &VAR_10, sizeof(unsigned int), &VAR_9)) {
   if (VAR_10 > VAR_4)
    VAR_8->entries = VAR_4;
   else
    VAR_8->entries = VAR_10;
  }
  VAR_8->time = FUNC_1(VAR_8->entries,
      sizeof(struct stats_time_cache),
      VAR_6);

  if (VAR_8->time == ((void*)0))
   goto fail_construct_time;

  VAR_8->event_entries = VAR_5;
  VAR_8->events = FUNC_1(VAR_8->event_entries,
          sizeof(struct stats_event_cache),
          VAR_6);

  if (VAR_8->events == ((void*)0))
   goto fail_construct_events;

 } else {
  VAR_8->entries = 0;
 }




 VAR_8->index = 1;
 VAR_8->event_index = 0;


 VAR_8->entry_id = 0;

 return &VAR_8->public;

fail_construct_events:
 FUNC_2(VAR_8->time);

fail_construct_time:
 FUNC_2(VAR_8);

fail_construct:
 return ((void*)0);
}
