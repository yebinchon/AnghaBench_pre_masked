
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int active; int wakeup_count; int event_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct wakeup_source*) ;

__attribute__((used)) static void FUNC_2(struct wakeup_source *VAR_1, bool VAR_2)
{
 VAR_1->event_count++;

 if (VAR_0)
  VAR_1->wakeup_count++;

 if (!VAR_1->active)
  FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_0();
}
