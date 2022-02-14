
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_cmd {char* name; TYPE_1__* op; struct event_cmd* next; } ;
struct battery_watch_event {int level; scalar_t__ type; scalar_t__ direction; struct event_cmd* cmdlist; struct battery_watch_event* next; } ;
struct TYPE_4__ {char* name; struct event_cmd* cmdlist; } ;
struct TYPE_3__ {int (* dump ) (struct event_cmd*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct battery_watch_event* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (struct event_cmd*,int ) ;
 int FUNC_2 (struct event_cmd*,int ) ;

void
FUNC_3(void)
{
 int VAR_6;
 struct battery_watch_event *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct event_cmd * VAR_8;
  if ((VAR_8 = VAR_4[VAR_6].cmdlist)) {
   FUNC_0(VAR_5, "apm_event %s {\n", VAR_4[VAR_6].name);
   for ( ; VAR_8 ; VAR_8 = VAR_8->next) {
    FUNC_0(VAR_5, "\t%s", VAR_8->name);
    if (VAR_8->op->dump)
     VAR_8->op->dump(VAR_8, VAR_5);
    FUNC_0(VAR_5, ";\n");
   }
   FUNC_0(VAR_5, "}\n");
  }
 }
 for (VAR_7 = VAR_3 ; VAR_7 != ((void*)0) ; VAR_7 = VAR_7 -> next) {
  struct event_cmd * VAR_9;
  FUNC_0(VAR_5, "apm_battery %d%s %s {\n",
   VAR_7 -> level,
   (VAR_7 -> type == VAR_1)?"%":"m",
   (VAR_7 -> direction == VAR_0)?"charging":
    "discharging");
  for ( VAR_9 = VAR_7 -> cmdlist; VAR_9 ; VAR_9 = VAR_9->next) {
   FUNC_0(VAR_5, "\t%s", VAR_9->name);
   if (VAR_9->op->dump)
    VAR_9->op->dump(VAR_9, VAR_5);
   FUNC_0(VAR_5, ";\n");
  }
  FUNC_0(VAR_5, "}\n");
 }
}
