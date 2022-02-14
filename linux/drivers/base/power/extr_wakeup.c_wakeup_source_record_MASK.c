
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {scalar_t__ wakeup_count; scalar_t__ expire_count; scalar_t__ relax_count; scalar_t__ active_count; scalar_t__ event_count; int max_time; int prevent_sleep_time; int total_time; } ;
struct TYPE_2__ {int lock; int wakeup_count; int expire_count; int relax_count; int active_count; int event_count; int max_time; void* prevent_sleep_time; void* total_time; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct wakeup_source *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0.lock, VAR_2);

 if (VAR_1->event_count) {
  VAR_0.total_time =
   FUNC_0(VAR_0.total_time, VAR_1->total_time);
  VAR_0.prevent_sleep_time =
   FUNC_0(VAR_0.prevent_sleep_time,
      VAR_1->prevent_sleep_time);
  VAR_0.max_time =
   FUNC_1(VAR_0.max_time, VAR_1->max_time) > 0 ?
    VAR_0.max_time : VAR_1->max_time;
  VAR_0.event_count += VAR_1->event_count;
  VAR_0.active_count += VAR_1->active_count;
  VAR_0.relax_count += VAR_1->relax_count;
  VAR_0.expire_count += VAR_1->expire_count;
  VAR_0.wakeup_count += VAR_1->wakeup_count;
 }

 FUNC_3(&VAR_0.lock, VAR_2);
}
