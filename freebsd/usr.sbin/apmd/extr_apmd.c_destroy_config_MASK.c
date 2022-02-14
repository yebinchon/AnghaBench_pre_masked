
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct event_cmd {int dummy; } ;
struct battery_watch_event {struct battery_watch_event* next; struct event_cmd* cmdlist; } ;
struct TYPE_2__ {struct event_cmd* cmdlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct battery_watch_event* VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct battery_watch_event*) ;
 int FUNC_2 (struct event_cmd*) ;
 int FUNC_3 (int ,int*,int) ;

void
FUNC_4(void)
{
 int VAR_4;
 struct battery_watch_event *VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4].cmdlist) {
   u_int VAR_6 = VAR_4;
   if (FUNC_3(VAR_1, &VAR_6, sizeof(u_int)) == -1) {
    FUNC_0(1, "cannot disable event 0x%x", VAR_6);
   }
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct event_cmd * VAR_7;
  if ((VAR_7 = VAR_3[VAR_4].cmdlist))
   FUNC_2(VAR_7);
  VAR_3[VAR_4].cmdlist = ((void*)0);
 }

 for( ; VAR_2; VAR_2 = VAR_2 -> next) {
  FUNC_2(VAR_2->cmdlist);
  VAR_5 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_5;
 }
}
