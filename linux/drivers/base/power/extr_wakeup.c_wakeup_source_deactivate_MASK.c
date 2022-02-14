
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {scalar_t__ relax_count; scalar_t__ active_count; int active; void* max_time; int name; scalar_t__ autosleep_enabled; scalar_t__ timer_expires; int timer; void* last_time; int total_time; } ;
typedef void* ktime_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 () ;
 void* FUNC_4 (void*,void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (unsigned int*,unsigned int*) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (struct wakeup_source*,void*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(struct wakeup_source *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 ktime_t VAR_7;
 ktime_t VAR_8;

 VAR_3->relax_count++;
 if (VAR_3->relax_count != VAR_3->active_count) {
  VAR_3->relax_count--;
  return;
 }

 VAR_3->active = 0;

 VAR_8 = FUNC_3();
 VAR_7 = FUNC_4(VAR_8, VAR_3->last_time);
 VAR_3->total_time = FUNC_2(VAR_3->total_time, VAR_7);
 if (FUNC_5(VAR_7) > FUNC_5(VAR_3->max_time))
  VAR_3->max_time = VAR_7;

 VAR_3->last_time = VAR_8;
 FUNC_1(&VAR_3->timer);
 VAR_3->timer_expires = 0;

 if (VAR_3->autosleep_enabled)
  FUNC_8(VAR_3, VAR_8);





 VAR_6 = FUNC_0(VAR_0, &VAR_1);
 FUNC_7(VAR_3->name, VAR_6);

 FUNC_6(&VAR_4, &VAR_5);
 if (!VAR_5 && FUNC_9(&VAR_2))
  FUNC_10(&VAR_2);
}
