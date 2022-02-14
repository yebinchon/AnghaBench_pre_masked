
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_cmd {int dummy; } ;
struct battery_watch_event {int level; int cmdlist; scalar_t__ done; int direction; int type; struct battery_watch_event* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct battery_watch_event* VAR_4 ;
 int FUNC_1 (struct event_cmd*) ;
 int FUNC_2 (int,char*) ;
 struct battery_watch_event* FUNC_3 (int) ;

int
FUNC_4(
 int VAR_5, int VAR_6,
 struct event_cmd *VAR_7)
{







 if (VAR_5>100)
  return -1;
 if (FUNC_0(VAR_6) != 1)
  return -1;

 if (VAR_7) {
  struct battery_watch_event *VAR_8;

  if ((VAR_8 = FUNC_3(sizeof(struct battery_watch_event))) == ((void*)0))
   FUNC_2(1, "out of memory");

  VAR_8->next = VAR_4;
  VAR_4 = VAR_8;
  VAR_8->level = FUNC_0(VAR_5);
  VAR_8->type = (VAR_5<0)?VAR_2:VAR_3;
  VAR_8->direction = (VAR_6<0)?VAR_1:
   VAR_0;
  VAR_8->done = 0;
  VAR_8->cmdlist = FUNC_1(VAR_7);
 }
 return 0;
}
