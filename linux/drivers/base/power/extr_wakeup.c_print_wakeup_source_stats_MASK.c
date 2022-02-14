
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {unsigned long active_count; int lock; scalar_t__ last_time; int expire_count; int wakeup_count; int event_count; int name; scalar_t__ start_prevent_time; scalar_t__ autosleep_enabled; scalar_t__ active; scalar_t__ prevent_sleep_time; scalar_t__ max_time; scalar_t__ total_time; } ;
struct seq_file {int dummy; } ;
typedef scalar_t__ ktime_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct seq_file*,char*,int ,unsigned long,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_0,
         struct wakeup_source *VAR_1)
{
 unsigned long VAR_2;
 ktime_t VAR_3;
 ktime_t VAR_4;
 unsigned long VAR_5;
 ktime_t VAR_6;
 ktime_t VAR_7;

 FUNC_5(&VAR_1->lock, VAR_2);

 VAR_3 = VAR_1->total_time;
 VAR_4 = VAR_1->max_time;
 VAR_7 = VAR_1->prevent_sleep_time;
 VAR_5 = VAR_1->active_count;
 if (VAR_1->active) {
  ktime_t VAR_8 = FUNC_1();

  VAR_6 = FUNC_2(VAR_8, VAR_1->last_time);
  VAR_3 = FUNC_0(VAR_3, VAR_6);
  if (VAR_6 > VAR_4)
   VAR_4 = VAR_6;

  if (VAR_1->autosleep_enabled)
   VAR_7 = FUNC_0(VAR_7,
    FUNC_2(VAR_8, VAR_1->start_prevent_time));
 } else {
  VAR_6 = 0;
 }

 FUNC_4(VAR_0, "%-12s\t%lu\t\t%lu\t\t%lu\t\t%lu\t\t%lld\t\t%lld\t\t%lld\t\t%lld\t\t%lld\n",
     VAR_1->name, VAR_5, VAR_1->event_count,
     VAR_1->wakeup_count, VAR_1->expire_count,
     FUNC_3(VAR_6), FUNC_3(VAR_3),
     FUNC_3(VAR_4), FUNC_3(VAR_1->last_time),
     FUNC_3(VAR_7));

 FUNC_6(&VAR_1->lock, VAR_2);

 return 0;
}
