
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_31__ {scalar_t__ enemy; int tfl; int* lastenemyorigin; int lastenemyareanum; scalar_t__ nbg_time; int* ideal_viewangles; int flags; int weaponnum; int origin; int ms; int character; int gs; scalar_t__ enemyvisible_time; int viewangles; int eye; int entitynum; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_32__ {int flags; int* ideal_viewangles; int* movedir; int weapon; scalar_t__ failure; } ;
typedef TYPE_2__ bot_moveresult_t ;
typedef int bot_goal_t ;
struct TYPE_33__ {int* origin; } ;
typedef TYPE_3__ aas_entityinfo_t ;
struct TYPE_36__ {scalar_t__ entitynum; } ;
struct TYPE_35__ {scalar_t__ integer; } ;
struct TYPE_34__ {scalar_t__ entitynum; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int*) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int *) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 scalar_t__ FUNC_23 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_24 (int*,int*) ;
 int FUNC_25 (int*,int ,int*) ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 scalar_t__ FUNC_26 (int) ;
 scalar_t__ FUNC_27 (int ,int *) ;
 int FUNC_28 (TYPE_2__*,int ,int *,int) ;
 scalar_t__ FUNC_29 (int ,int *,int,int,int*) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 float FUNC_32 (int ,int ,int ,int) ;
 int FUNC_33 (int*,int*) ;

int FUNC_34(bot_state_t *VAR_17) {
 int VAR_18;
 bot_goal_t VAR_19;
 aas_entityinfo_t VAR_20;
 bot_moveresult_t VAR_21;
 float VAR_22;
 vec3_t VAR_23, VAR_24;

 if (FUNC_16(VAR_17)) {
  FUNC_3(VAR_17, "battle nbg: observer");
  return VAR_14;
 }

 if (FUNC_14(VAR_17)) {
  FUNC_2(VAR_17, "battle nbg: intermission");
  return VAR_14;
 }

 if (FUNC_15(VAR_17)) {
  FUNC_4(VAR_17, "battle nbg: bot dead");
  return VAR_14;
 }

 if (VAR_17->enemy < 0) {
  FUNC_5(VAR_17, "battle nbg: no enemy");
  return VAR_14;
 }

 FUNC_11(VAR_17->enemy, &VAR_20);
 if (FUNC_22(&VAR_20)) {
  FUNC_5(VAR_17, "battle nbg: enemy dead");
  return VAR_14;
 }

 VAR_17->tfl = VAR_7;
 if (VAR_13.integer) VAR_17->tfl |= VAR_8;

 if (FUNC_13(VAR_17)) VAR_17->tfl |= VAR_9|VAR_11;

 if (FUNC_8(VAR_17)) {
  VAR_17->tfl |= VAR_10;
 }

 FUNC_17(VAR_17);

 if (FUNC_12(VAR_17->entitynum, VAR_17->eye, VAR_17->viewangles, 360, VAR_17->enemy)) {
  VAR_17->enemyvisible_time = FUNC_23();
  FUNC_24(VAR_20.origin, VAR_23);

  if (VAR_17->enemy >= VAR_2) {







  }

  VAR_18 = FUNC_18(VAR_23);
  if (VAR_18 && FUNC_26(VAR_18)) {
   FUNC_24(VAR_23, VAR_17->lastenemyorigin);
   VAR_17->lastenemyareanum = VAR_18;
  }
 }

 if (!FUNC_27(VAR_17->gs, &VAR_19)) {
  VAR_17->nbg_time = 0;
 }
 else if (FUNC_19(VAR_17, &VAR_19)) {
  VAR_17->nbg_time = 0;
 }

 if (VAR_17->nbg_time < FUNC_23()) {

  FUNC_30(VAR_17->gs);

  if (FUNC_27(VAR_17->gs, &VAR_19))
   FUNC_1(VAR_17, "battle nbg: time out");
  else
   FUNC_0(VAR_17, "battle nbg: time out");

  return VAR_14;
 }

 FUNC_20(VAR_17);

 FUNC_28(&VAR_21, VAR_17->ms, &VAR_19, VAR_17->tfl);

 if (VAR_21.failure) {

  FUNC_31(VAR_17->ms);

  VAR_17->nbg_time = 0;
 }

 FUNC_6(VAR_17, &VAR_21, VAR_14);

 FUNC_21(VAR_17, VAR_17->enemy);

 FUNC_10(VAR_17);

 if (VAR_21.flags & (VAR_3|VAR_6)) {
  FUNC_24(VAR_21.ideal_viewangles, VAR_17->ideal_viewangles);
 }
 else if (!(VAR_21.flags & VAR_4)
    && !(VAR_17->flags & VAR_0)) {
  VAR_22 = FUNC_32(VAR_17->character, VAR_1, 0, 1);

  if (VAR_22 > 0.3) {

   FUNC_7(VAR_17);
  }
  else {
   if (FUNC_29(VAR_17->ms, &VAR_19, VAR_17->tfl, 300, VAR_23)) {
    FUNC_25(VAR_23, VAR_17->origin, VAR_24);
    FUNC_33(VAR_24, VAR_17->ideal_viewangles);
   }
   else {
    FUNC_33(VAR_21.movedir, VAR_17->ideal_viewangles);
   }
   VAR_17->ideal_viewangles[2] *= 0.5;
  }
 }

 if (VAR_21.flags & VAR_5) VAR_17->weaponnum = VAR_21.weapon;

 FUNC_9(VAR_17);

 return VAR_15;
}
