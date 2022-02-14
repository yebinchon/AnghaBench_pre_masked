
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct link {int dummy; } ;
struct fsm_parent {int dummy; } ;
struct fsm_callbacks {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int reqs; int naks; int rejs; } ;
struct fsm {char const* name; int min_code; int max_code; int reqid; int restart; int LogLevel; TYPE_2__ StoppedTimer; TYPE_2__ OpenTimer; TYPE_2__ FsmTimer; struct fsm_callbacks* fn; struct fsm_parent const* parent; struct bundle* bundle; struct link* link; TYPE_1__ more; int state; int proto; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char,int) ;

void
FUNC_1(struct fsm *VAR_3, const char *VAR_4, u_short VAR_5, int VAR_6,
         int VAR_7, int VAR_8, struct bundle *VAR_9,
         struct link *VAR_10, const struct fsm_parent *VAR_11,
         struct fsm_callbacks *VAR_12, const char * const VAR_13[3])
{
  VAR_3->name = VAR_4;
  VAR_3->proto = VAR_5;
  VAR_3->min_code = VAR_6;
  VAR_3->max_code = VAR_7;
  VAR_3->state = VAR_3->min_code > VAR_0 ? VAR_2 : VAR_1;
  VAR_3->reqid = 1;
  VAR_3->restart = 1;
  VAR_3->more.reqs = VAR_3->more.naks = VAR_3->more.rejs = 3;
  FUNC_0(&VAR_3->FsmTimer, '\0', sizeof VAR_3->FsmTimer);
  FUNC_0(&VAR_3->OpenTimer, '\0', sizeof VAR_3->OpenTimer);
  FUNC_0(&VAR_3->StoppedTimer, '\0', sizeof VAR_3->StoppedTimer);
  VAR_3->LogLevel = VAR_8;
  VAR_3->link = VAR_10;
  VAR_3->bundle = VAR_9;
  VAR_3->parent = VAR_11;
  VAR_3->fn = VAR_12;
  VAR_3->FsmTimer.name = VAR_13[0];
  VAR_3->OpenTimer.name = VAR_13[1];
  VAR_3->StoppedTimer.name = VAR_13[2];
}
