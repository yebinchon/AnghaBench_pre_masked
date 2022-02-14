
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int active; int name; int last_time; int start_prevent_time; scalar_t__ autosleep_enabled; int active_count; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct wakeup_source*) ;

__attribute__((used)) static void FUNC_5(struct wakeup_source *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_0(FUNC_4(VAR_1),
   "unregistered wakeup source\n"))
  return;

 VAR_1->active = 1;
 VAR_1->active_count++;
 VAR_1->last_time = FUNC_2();
 if (VAR_1->autosleep_enabled)
  VAR_1->start_prevent_time = VAR_1->last_time;


 VAR_2 = FUNC_1(&VAR_0);

 FUNC_3(VAR_1->name, VAR_2);
}
