
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int teammate ;
struct TYPE_10__ {int areanum; int origin; int maxs; int mins; int entitynum; } ;
struct TYPE_8__ {scalar_t__ lead_time; int leadmessage_time; int leadvisible_time; int leadbackup_time; double* ideal_viewangles; int origin; int teammate; int cs; int lead_teammate; TYPE_3__ lead_teamgoal; int viewangles; int eye; int entitynum; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_goal_t ;
struct TYPE_9__ {int origin; scalar_t__ valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (TYPE_1__*,char*,int ,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 () ;
 int VAR_1 ;
 float FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 float FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *,TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,double*) ;

int FUNC_16(bot_state_t *VAR_4, int VAR_5, int VAR_6, bot_goal_t *VAR_7) {
 aas_entityinfo_t VAR_8;
 char VAR_9[VAR_1];
 float VAR_10;
 int VAR_11;
 vec3_t VAR_12;




 if (VAR_4->lead_time > 0 && !VAR_6) {
  if (VAR_4->lead_time < FUNC_6()) {
   FUNC_0(VAR_4, "lead_stop", FUNC_5(VAR_4->lead_teammate, VAR_9, sizeof(VAR_9)), ((void*)0));
   FUNC_14(VAR_4->cs, VAR_4->teammate, VAR_0);
   VAR_4->lead_time = 0;
   return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  }

  if (VAR_4->leadmessage_time < 0 && -VAR_4->leadmessage_time < FUNC_6()) {
   FUNC_0(VAR_4, "followme", FUNC_5(VAR_4->lead_teammate, VAR_9, sizeof(VAR_9)), ((void*)0));
   FUNC_14(VAR_4->cs, VAR_4->teammate, VAR_0);
   VAR_4->leadmessage_time = FUNC_6();
  }

  FUNC_1(VAR_4->lead_teammate, &VAR_8);

  if (VAR_8.valid) {
   VAR_11 = FUNC_4(VAR_8.origin);
   if (VAR_11 && FUNC_13(VAR_11)) {

    VAR_4->lead_teamgoal.entitynum = VAR_4->lead_teammate;
    VAR_4->lead_teamgoal.areanum = VAR_11;
    FUNC_8(VAR_8.origin, VAR_4->lead_teamgoal.origin);
    FUNC_10(VAR_4->lead_teamgoal.mins, -8, -8, -8);
    FUNC_10(VAR_4->lead_teamgoal.maxs, 8, 8, 8);
   }
  }

  if (FUNC_2(VAR_4->entitynum, VAR_4->eye, VAR_4->viewangles, 360, VAR_4->lead_teammate)) {
   VAR_4->leadvisible_time = FUNC_6();
  }

  if (VAR_4->leadvisible_time < FUNC_6() - 1) {
   VAR_4->leadbackup_time = FUNC_6() + 2;
  }

  FUNC_11(VAR_4->origin, VAR_4->lead_teamgoal.origin, VAR_12);
  VAR_10 = FUNC_9(VAR_12);

  if (VAR_4->leadbackup_time > FUNC_6()) {
   if (VAR_4->leadmessage_time < FUNC_6() - 20) {
    FUNC_0(VAR_4, "followme", FUNC_5(VAR_4->lead_teammate, VAR_9, sizeof(VAR_9)), ((void*)0));
    FUNC_14(VAR_4->cs, VAR_4->teammate, VAR_0);
    VAR_4->leadmessage_time = FUNC_6();
   }

   if (VAR_10 < FUNC_7(100)) {
    VAR_4->leadbackup_time = 0;
   }

   FUNC_12(VAR_7, &VAR_4->lead_teamgoal, sizeof(bot_goal_t));
   return VAR_3;
  }
  else {

   if (VAR_10 > FUNC_7(500)) {
    if (VAR_4->leadmessage_time < FUNC_6() - 20) {
     FUNC_0(VAR_4, "followme", FUNC_5(VAR_4->lead_teammate, VAR_9, sizeof(VAR_9)), ((void*)0));
     FUNC_14(VAR_4->cs, VAR_4->teammate, VAR_0);
     VAR_4->leadmessage_time = FUNC_6();
    }

    FUNC_11(VAR_8.origin, VAR_4->origin, VAR_12);
    FUNC_15(VAR_12, VAR_4->ideal_viewangles);
    VAR_4->ideal_viewangles[2] *= 0.5;

    return VAR_2;
   }
  }
 }
 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
}
