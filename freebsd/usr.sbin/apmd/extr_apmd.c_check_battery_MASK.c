
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct battery_watch_event {int direction; scalar_t__ type; int level; int cmdlist; scalar_t__ done; struct battery_watch_event* next; } ;
struct apm_info {int ai_batt_time; scalar_t__ ai_batt_life; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct battery_watch_event* VAR_8 ;
 int FUNC_0 (int,char*) ;
 int * VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,struct apm_info*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,char*,char*,int,char*) ;
 scalar_t__ VAR_11 ;

void
FUNC_7(void)
{

 static int VAR_12=1, VAR_13;
 int VAR_14;

 struct apm_info VAR_15;
 struct battery_watch_event *VAR_16;


 if (VAR_8 == ((void*)0))
  return;

 if (VAR_12) {
  if ( FUNC_5(VAR_7, VAR_1, &VAR_15) < 0)
   FUNC_0(1, "cannot check battery state.");




  VAR_13 = VAR_0;
  VAR_12 = 0;
  return;
 }





 if ( FUNC_5(VAR_7, VAR_1, &VAR_15) < 0)
  FUNC_0(1, "cannot check battery state.");






 if (VAR_13 != VAR_0) {
  if (VAR_10 && FUNC_4() == 0) {
   VAR_14 = FUNC_1(&VAR_9[VAR_6]);
   FUNC_3(VAR_14);
  }
  VAR_13 = VAR_0;
  for (VAR_16 = VAR_8 ; VAR_16!=((void*)0) ; VAR_16 = VAR_16 -> next)
   VAR_16->done = 0;
 }
 for (VAR_16 = VAR_8 ; VAR_16 != ((void*)0) ; VAR_16 = VAR_16 -> next)
  if (VAR_16 -> direction == VAR_0 &&
   !(VAR_16 -> done) &&
   ((VAR_16 -> type == VAR_4 &&
    VAR_16 -> level == (int)VAR_15.ai_batt_life) ||
   (VAR_16 -> type == VAR_3 &&
    VAR_16 -> level == (VAR_15.ai_batt_time / 60)))) {
   VAR_16 -> done++;
   if (VAR_11)
    FUNC_6(VAR_5, "Caught battery event: %s, %d%s",
     (VAR_16 -> direction == VAR_2)?"charging":"discharging",
     VAR_16 -> level,
     (VAR_16 -> type == VAR_4)?"%":" minutes");
   if (FUNC_4() == 0) {
    VAR_14 = FUNC_2(VAR_16 -> cmdlist);
    FUNC_3(VAR_14);
   }
  }
}
