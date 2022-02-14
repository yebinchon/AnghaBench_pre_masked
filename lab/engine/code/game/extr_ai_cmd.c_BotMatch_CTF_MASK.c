
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int netname ;
typedef int flag ;
struct TYPE_7__ {int redflagstatus; int blueflagstatus; int flagstatuschanged; void* flagcarrier; int lastflagcapture_time; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_8__ {int subtype; } ;
typedef TYPE_2__ bot_match_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (TYPE_2__*,int ,char*,int) ;

void FUNC_5(bot_state_t *VAR_12, bot_match_t *VAR_13) {

 char VAR_14[128], VAR_15[VAR_3];

 if (VAR_11 == VAR_2) {
  FUNC_4(VAR_13, VAR_0, VAR_14, sizeof(VAR_14));
  if (VAR_13->subtype & VAR_7) {
   if (!FUNC_3(VAR_14, "red")) {
    VAR_12->redflagstatus = 1;
    if (FUNC_0(VAR_12) == VAR_9) {
     FUNC_4(VAR_13, VAR_4, VAR_15, sizeof(VAR_15));
     VAR_12->flagcarrier = FUNC_1(VAR_15);
    }
   }
   else {
    VAR_12->blueflagstatus = 1;
    if (FUNC_0(VAR_12) == VAR_10) {
     FUNC_4(VAR_13, VAR_4, VAR_15, sizeof(VAR_15));
     VAR_12->flagcarrier = FUNC_1(VAR_15);
    }
   }
   VAR_12->flagstatuschanged = 1;
   VAR_12->lastflagcapture_time = FUNC_2();
  }
  else if (VAR_13->subtype & VAR_6) {
   VAR_12->redflagstatus = 0;
   VAR_12->blueflagstatus = 0;
   VAR_12->flagcarrier = 0;
   VAR_12->flagstatuschanged = 1;
  }
  else if (VAR_13->subtype & VAR_8) {
   if (!FUNC_3(VAR_14, "red")) VAR_12->redflagstatus = 0;
   else VAR_12->blueflagstatus = 0;
   VAR_12->flagstatuschanged = 1;
  }
 }
}
