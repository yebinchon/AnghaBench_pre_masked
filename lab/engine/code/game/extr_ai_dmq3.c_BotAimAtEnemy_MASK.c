
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;


struct TYPE_23__ {int damagetype; } ;
struct TYPE_24__ {scalar_t__ number; int speed; int vspread; int hspread; TYPE_2__ proj; scalar_t__* offset; } ;
typedef TYPE_3__ weaponinfo_t ;
typedef int* vec3_t ;
struct TYPE_25__ {int fraction; scalar_t__ ent; int* endpos; scalar_t__ startsolid; } ;
typedef TYPE_4__ bsp_trace_t ;
struct TYPE_22__ {scalar_t__ weaponstate; scalar_t__ viewheight; } ;
struct TYPE_26__ {scalar_t__ enemy; int* eye; int* ideal_viewangles; int* aimtarget; float enemysight_time; float teleport_time; int enemyposition_time; int* enemyvelocity; int* enemyorigin; scalar_t__ entitynum; int* viewangles; int* origin; int* lastenemyorigin; int client; int lastenemyareanum; int areanum; TYPE_1__ cur_ps; int character; int weaponnum; int ws; } ;
typedef TYPE_5__ bot_state_t ;
struct TYPE_27__ {int* origin; int maxs; int mins; int areanum; int entitynum; } ;
typedef TYPE_6__ bot_goal_t ;
struct TYPE_28__ {int* origin; int* lastvisorigin; int update_time; scalar_t__ number; } ;
typedef TYPE_7__ aas_entityinfo_t ;
struct TYPE_29__ {int* endpos; } ;
typedef TYPE_8__ aas_clientmove_t ;
struct TYPE_21__ {scalar_t__ entitynum; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ entitynum; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int*,int*,int*,int*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,TYPE_7__*) ;
 int FUNC_3 (scalar_t__,int*,int*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int*,int*) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 () ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_20 ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,int*) ;
 float FUNC_10 (int*) ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (int*,float,int*,int*) ;
 float FUNC_13 (int*) ;
 int FUNC_14 (int*,int,int*) ;
 int FUNC_15 (int ,int,int,int) ;
 int FUNC_16 (int*,int*,int*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 size_t VAR_30 ;
 TYPE_14__ VAR_31 ;
 TYPE_13__ VAR_32 ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int VAR_33 ;
 double FUNC_19 () ;
 TYPE_12__ VAR_34 ;
 int FUNC_20 (TYPE_8__*,scalar_t__,int*,int ,int ,int*,int*,int ,float,float,int ,int ,int ) ;
 int FUNC_21 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_22 (int*,int ,TYPE_6__*,int ,int*) ;
 double FUNC_23 (int ,int ,int ,int) ;
 int FUNC_24 (int ,int*) ;
 int FUNC_25 (int*,int*) ;

void FUNC_26(bot_state_t *VAR_35) {
 int VAR_36, VAR_37;
 float VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 vec3_t VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 vec3_t VAR_51 = {-4,-4,-4}, VAR_52 = {4, 4, 4};
 weaponinfo_t VAR_53;
 aas_entityinfo_t VAR_54;
 bot_goal_t VAR_55;
 bsp_trace_t VAR_56;
 vec3_t VAR_57;


 if (VAR_35->enemy < 0) {
  return;
 }

 FUNC_2(VAR_35->enemy, &VAR_54);

 if (VAR_35->enemy >= VAR_17) {

  FUNC_9(VAR_54.origin, VAR_57);
  FUNC_16(VAR_57, VAR_35->eye, VAR_44);
  FUNC_25(VAR_44, VAR_35->ideal_viewangles);

  FUNC_9(VAR_57, VAR_35->aimtarget);
  return;
 }



 VAR_40 = FUNC_23(VAR_35->character, VAR_9, 0, 1);
 VAR_41 = FUNC_23(VAR_35->character, VAR_0, 0, 1);

 if (VAR_40 > 0.95) {

  VAR_43 = 0.5 * FUNC_23(VAR_35->character, VAR_14, 0, 1);
  if (VAR_35->enemysight_time > FUNC_6() - VAR_43) return;
  if (VAR_35->teleport_time > FUNC_6() - VAR_43) return;
 }


 FUNC_21(VAR_35->ws, VAR_35->weaponnum, &VAR_53);

 if (VAR_53.number == VAR_25) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_4, 0, 1);
 }
 else if (VAR_53.number == VAR_29) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_8, 0, 1);
 }
 else if (VAR_53.number == VAR_23) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_2, 0, 1);
  VAR_40 = FUNC_23(VAR_35->character, VAR_11, 0, 1);
 }
 else if (VAR_53.number == VAR_28) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_7, 0, 1);
  VAR_40 = FUNC_23(VAR_35->character, VAR_13, 0, 1);
 }
 else if (VAR_53.number == VAR_24) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_3, 0, 1);
 }
 else if (VAR_53.number == VAR_27) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_6, 0, 1);
 }
 else if (VAR_53.number == VAR_26) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_5, 0, 1);
  VAR_40 = FUNC_23(VAR_35->character, VAR_12, 0, 1);
 }
 else if (VAR_53.number == VAR_22) {
  VAR_41 = FUNC_23(VAR_35->character, VAR_1, 0, 1);
  VAR_40 = FUNC_23(VAR_35->character, VAR_10, 0, 1);
 }

 if (VAR_41 <= 0) VAR_41 = 0.0001f;

 FUNC_2(VAR_35->enemy, &VAR_54);

 if (FUNC_5(&VAR_54)) {
  if (FUNC_19() > 0.1) VAR_41 *= 0.4f;
 }

 FUNC_16(VAR_54.origin, VAR_54.lastvisorigin, VAR_50);
 FUNC_14(VAR_50, 1 / VAR_54.update_time, VAR_50);

 if (VAR_35->enemyposition_time < FUNC_6()) {

  VAR_35->enemyposition_time = FUNC_6() + 0.5;
  FUNC_9(VAR_50, VAR_35->enemyvelocity);
  FUNC_9(VAR_54.origin, VAR_35->enemyorigin);
 }

 if (VAR_40 < 0.9) {
  FUNC_16(VAR_54.origin, VAR_35->enemyorigin, VAR_44);

  if (FUNC_11(VAR_44) > FUNC_7(48)) {

   if (FUNC_4(VAR_35->enemyvelocity, VAR_50) < 0) {

    VAR_41 *= 0.7f;
   }
  }
 }

 VAR_37 = FUNC_3(VAR_35->entitynum, VAR_35->eye, VAR_35->viewangles, 360, VAR_35->enemy);

 if (VAR_37) {

  FUNC_9(VAR_54.origin, VAR_45);
  VAR_45[2] += 8;


  FUNC_9(VAR_35->origin, VAR_47);
  VAR_47[2] += VAR_35->cur_ps.viewheight;
  VAR_47[2] += VAR_53.offset[2];

  FUNC_1(&VAR_56, VAR_47, VAR_51, VAR_52, VAR_45, VAR_35->entitynum, VAR_16);

  if (VAR_56.fraction <= 1 && VAR_56.ent != VAR_54.number) {
   VAR_45[2] += 16;
  }

  if (VAR_53.speed) {

   FUNC_16(VAR_45, VAR_35->origin, VAR_44);
   VAR_38 = FUNC_10(VAR_44);
   FUNC_16(VAR_54.origin, VAR_35->enemyorigin, VAR_44);

   if (!(VAR_38 > 100 && FUNC_11(VAR_44) < FUNC_7(32))) {

    if (VAR_40 > 0.8 &&

      VAR_35->cur_ps.weaponstate == VAR_21) {
     aas_clientmove_t VAR_58;
     vec3_t VAR_59;

     FUNC_16(VAR_54.origin, VAR_35->origin, VAR_44);

     VAR_38 = FUNC_10(VAR_44);

     FUNC_16(VAR_54.origin, VAR_54.lastvisorigin, VAR_44);

     FUNC_14(VAR_44, 1 / VAR_54.update_time, VAR_44);

     FUNC_9(VAR_54.origin, VAR_59);
     VAR_59[2] += 1;

     FUNC_8(VAR_49);

     FUNC_20(&VAR_58, VAR_35->enemy, VAR_59,
              VAR_19, VAR_33,
              VAR_44, VAR_49, 0,
              VAR_38 * 10 / VAR_53.speed, 0.1f, 0, 0, VAR_33);
     FUNC_9(VAR_58.endpos, VAR_45);

    }

    else if (VAR_40 > 0.4) {
     FUNC_16(VAR_54.origin, VAR_35->origin, VAR_44);

     VAR_38 = FUNC_10(VAR_44);

     FUNC_16(VAR_54.origin, VAR_54.lastvisorigin, VAR_44);
     VAR_44[2] = 0;

     VAR_42 = FUNC_13(VAR_44) / VAR_54.update_time;


     FUNC_12(VAR_54.origin, (VAR_38 / VAR_53.speed) * VAR_42, VAR_44, VAR_45);
    }
   }
  }

  if (VAR_40 > 0.6 && VAR_53.proj.damagetype & VAR_15) {

   if (VAR_54.origin[2] < VAR_35->origin[2] + 16) {

    FUNC_9(VAR_54.origin, VAR_46);
    VAR_46[2] -= 64;
    FUNC_1(&VAR_56, VAR_54.origin, ((void*)0), ((void*)0), VAR_46, VAR_54.number, VAR_16);

    FUNC_9(VAR_45, VAR_48);
    if (VAR_56.startsolid) VAR_48[2] = VAR_54.origin[2] - 16;
    else VAR_48[2] = VAR_56.endpos[2] - 8;

    FUNC_1(&VAR_56, VAR_47, ((void*)0), ((void*)0), VAR_48, VAR_35->entitynum, VAR_16);

    if (FUNC_18(VAR_56.endpos[2] - VAR_48[2]) < 50) {
     FUNC_16(VAR_56.endpos, VAR_48, VAR_44);

     if (FUNC_11(VAR_44) < FUNC_7(60)) {
      FUNC_16(VAR_56.endpos, VAR_47, VAR_44);

      if (FUNC_11(VAR_44) > FUNC_7(100)) {

       VAR_56.endpos[2] += 1;
       FUNC_1(&VAR_56, VAR_56.endpos, ((void*)0), ((void*)0), VAR_54.origin, VAR_54.number, VAR_16);
       if (VAR_56.fraction >= 1) {

        FUNC_9(VAR_48, VAR_45);
       }
      }
     }
    }
   }
  }
  VAR_45[0] += 20 * FUNC_17() * (1 - VAR_41);
  VAR_45[1] += 20 * FUNC_17() * (1 - VAR_41);
  VAR_45[2] += 10 * FUNC_17() * (1 - VAR_41);
 }
 else {

  FUNC_9(VAR_35->lastenemyorigin, VAR_45);
  VAR_45[2] += 8;

  if (VAR_40 > 0.5) {

   if (VAR_53.number == VAR_22 ||
    VAR_53.number == VAR_28 ||
    VAR_53.number == VAR_23) {

    VAR_55.entitynum = VAR_35->client;
    VAR_55.areanum = VAR_35->areanum;
    FUNC_9(VAR_35->eye, VAR_55.origin);
    FUNC_15(VAR_55.mins, -8, -8, -8);
    FUNC_15(VAR_55.maxs, 8, 8, 8);

    if (FUNC_22(VAR_35->lastenemyorigin, VAR_35->lastenemyareanum, &VAR_55, VAR_20, VAR_57)) {
     FUNC_16(VAR_57, VAR_35->eye, VAR_44);
     if (FUNC_11(VAR_44) > FUNC_7(80)) {
      FUNC_9(VAR_57, VAR_45);
      VAR_45[2] -= 20;
     }
    }
    VAR_41 = 1;
   }
  }
 }

 if (VAR_37) {
  FUNC_1(&VAR_56, VAR_35->eye, ((void*)0), ((void*)0), VAR_45, VAR_35->entitynum, VAR_16);
  FUNC_9(VAR_56.endpos, VAR_35->aimtarget);
 }
 else {
  FUNC_9(VAR_45, VAR_35->aimtarget);
 }

 FUNC_16(VAR_45, VAR_35->eye, VAR_44);

 if (VAR_53.number == VAR_25 ||
  VAR_53.number == VAR_29 ||
  VAR_53.number == VAR_24 ||
  VAR_53.number == VAR_27) {

  VAR_38 = FUNC_10(VAR_44);
  if (VAR_38 > 150) VAR_38 = 150;
  VAR_39 = 0.6 + VAR_38 / 150 * 0.4;
  VAR_41 *= VAR_39;
 }

 if (VAR_41 < 0.8) {
  FUNC_13(VAR_44);
  for (VAR_36 = 0; VAR_36 < 3; VAR_36++) VAR_44[VAR_36] += 0.3 * FUNC_17() * (1 - VAR_41);
 }

 FUNC_25(VAR_44, VAR_35->ideal_viewangles);

 VAR_35->ideal_viewangles[VAR_18] += 6 * VAR_53.vspread * FUNC_17() * (1 - VAR_41);
 VAR_35->ideal_viewangles[VAR_18] = FUNC_0(VAR_35->ideal_viewangles[VAR_18]);
 VAR_35->ideal_viewangles[VAR_30] += 6 * VAR_53.hspread * FUNC_17() * (1 - VAR_41);
 VAR_35->ideal_viewangles[VAR_30] = FUNC_0(VAR_35->ideal_viewangles[VAR_30]);

 if (VAR_32.integer) {

  if (VAR_41 > 0.9 && VAR_35->enemysight_time < FUNC_6() - 1) {

   if (VAR_35->ideal_viewangles[VAR_18] > 180) VAR_35->ideal_viewangles[VAR_18] -= 360;
   FUNC_9(VAR_35->ideal_viewangles, VAR_35->viewangles);
   FUNC_24(VAR_35->client, VAR_35->viewangles);
  }
 }
}
