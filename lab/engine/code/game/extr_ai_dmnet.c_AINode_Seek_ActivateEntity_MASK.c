
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_13__ ;


typedef double* vec3_t ;
struct TYPE_44__ {double fraction; scalar_t__ ent; } ;
typedef TYPE_3__ bsp_trace_t ;
struct TYPE_42__ {int weapon; } ;
struct TYPE_45__ {int tfl; int enemy; double* ideal_viewangles; double thinktime; int flags; int weaponnum; int gs; int ms; int origin; TYPE_2__* activatestack; int eye; int client; int viewangles; TYPE_1__ cur_ps; int entitynum; } ;
typedef TYPE_4__ bot_state_t ;
struct TYPE_46__ {int flags; double* ideal_viewangles; int weapon; double* movedir; scalar_t__ failure; } ;
typedef TYPE_5__ bot_moveresult_t ;
struct TYPE_47__ {scalar_t__ entitynum; } ;
typedef TYPE_6__ bot_goal_t ;
struct TYPE_48__ {int origin; } ;
typedef TYPE_7__ aas_entityinfo_t ;
struct TYPE_43__ {double* target; int weapon; scalar_t__ time; scalar_t__ shoot; int origin; TYPE_6__ goal; } ;
struct TYPE_41__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_3__*,int ,int *,int *,double*,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_12 (scalar_t__,TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*,int) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*,double*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*) ;
 scalar_t__ FUNC_23 (TYPE_4__*) ;
 scalar_t__ FUNC_24 () ;
 scalar_t__ FUNC_25 (int ,int,double*) ;
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
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (double*,double*) ;
 int FUNC_28 (double*,int ,double*) ;
 TYPE_13__ VAR_12 ;
 int FUNC_29 (TYPE_5__*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 double FUNC_30 () ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_5__*,int ,TYPE_6__*,int) ;
 scalar_t__ FUNC_33 (int ,TYPE_6__*,int,int,double*) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 scalar_t__ FUNC_36 (int ,TYPE_6__*) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (double*,double*) ;

int FUNC_39(bot_state_t *VAR_15) {
 bot_goal_t *VAR_16;
 vec3_t VAR_17, VAR_18, VAR_19;
 bot_moveresult_t VAR_20;
 int VAR_21;
 bsp_trace_t VAR_22;
 aas_entityinfo_t VAR_23;

 if (FUNC_17(VAR_15)) {
  FUNC_10(VAR_15);
  FUNC_3(VAR_15, "active entity: observer");
  return VAR_13;
 }

 if (FUNC_15(VAR_15)) {
  FUNC_10(VAR_15);
  FUNC_2(VAR_15, "activate entity: intermission");
  return VAR_13;
 }

 if (FUNC_16(VAR_15)) {
  FUNC_10(VAR_15);
  FUNC_4(VAR_15, "activate entity: bot dead");
  return VAR_13;
 }

 VAR_15->tfl = VAR_8;
 if (VAR_12.integer) VAR_15->tfl |= VAR_9;

 if (FUNC_14(VAR_15)) VAR_15->tfl |= VAR_10|VAR_11;

 FUNC_18(VAR_15);

 VAR_15->enemy = -1;

 if (!VAR_15->activatestack) {
  FUNC_10(VAR_15);
  FUNC_5(VAR_15, "activate entity: no goal");
  return VAR_13;
 }

 VAR_16 = &VAR_15->activatestack->goal;

 VAR_21 = VAR_13;

 if (VAR_15->activatestack->shoot) {

  FUNC_9(&VAR_22, VAR_15->eye, ((void*)0), ((void*)0), VAR_15->activatestack->target, VAR_15->entitynum, VAR_1);

  if (VAR_22.fraction >= 1.0 || VAR_22.ent == VAR_16->entitynum) {
   VAR_21 = VAR_14;

   if (VAR_15->cur_ps.weapon == VAR_15->activatestack->weapon) {
    FUNC_28(VAR_15->activatestack->target, VAR_15->eye, VAR_18);
    FUNC_38(VAR_18, VAR_19);

    if (FUNC_25(VAR_15->viewangles, 20, VAR_19)) {
     FUNC_37(VAR_15->client);
    }
   }
  }
 }

 if (VAR_21) {

  FUNC_12(VAR_16->entitynum, &VAR_23);

  if (!FUNC_26(VAR_15->activatestack->origin, VAR_23.origin)) {



   VAR_15->activatestack->time = 0;
  }

  if (VAR_15->activatestack->time < FUNC_24()) {
   FUNC_19(VAR_15);

   if (VAR_15->activatestack) {
    VAR_15->activatestack->time = FUNC_24() + 10;
    return VAR_13;
   }
   FUNC_5(VAR_15, "activate entity: time out");
   return VAR_13;
  }
  FUNC_29(&VAR_20, 0, sizeof(bot_moveresult_t));
 }
 else {

  if (!VAR_16) {
   VAR_15->activatestack->time = 0;
  }

  else if (!VAR_15->activatestack->shoot) {

   if (FUNC_36(VAR_15->origin, VAR_16)) {



    VAR_15->activatestack->time = 0;
   }
  }

  if (VAR_15->activatestack->time < FUNC_24()) {
   FUNC_19(VAR_15);

   if (VAR_15->activatestack) {
    VAR_15->activatestack->time = FUNC_24() + 10;
    return VAR_13;
   }
   FUNC_5(VAR_15, "activate entity: activated");
   return VAR_13;
  }

  if (FUNC_7(VAR_15, VAR_16))
   return VAR_13;

  FUNC_22(VAR_15);

  FUNC_32(&VAR_20, VAR_15->ms, VAR_16, VAR_15->tfl);

  if (VAR_20.failure) {

   FUNC_34(VAR_15->ms);

   VAR_15->activatestack->time = 0;
  }

  FUNC_6(VAR_15, &VAR_20, VAR_14);
 }

 FUNC_11(VAR_15, &VAR_20);

 if (VAR_15->activatestack->shoot) {

  if (!(VAR_20.flags & VAR_2)) {
   FUNC_28(VAR_15->activatestack->target, VAR_15->eye, VAR_18);
   FUNC_38(VAR_18, VAR_20.ideal_viewangles);
   VAR_20.flags |= VAR_2;
  }

  if (!(VAR_20.flags & VAR_4)) {
   VAR_20.flags |= VAR_4;

   VAR_15->activatestack->weapon = FUNC_21(VAR_15);
   if (VAR_15->activatestack->weapon == -1) {

    VAR_15->activatestack->weapon = 0;
   }
   VAR_20.weapon = VAR_15->activatestack->weapon;
  }
 }

 if (VAR_20.flags & (VAR_3|VAR_2|VAR_5)) {
  FUNC_27(VAR_20.ideal_viewangles, VAR_15->ideal_viewangles);
 }

 else if (VAR_20.flags & VAR_6) {
  if (FUNC_30() < VAR_15->thinktime * 0.8) {
   FUNC_20(VAR_15, VAR_17);
   FUNC_28(VAR_17, VAR_15->origin, VAR_18);
   FUNC_38(VAR_18, VAR_15->ideal_viewangles);
   VAR_15->ideal_viewangles[2] *= 0.5;
  }
 }
 else if (!(VAR_15->flags & VAR_0)) {
  if (FUNC_33(VAR_15->ms, VAR_16, VAR_15->tfl, 300, VAR_17)) {
   FUNC_28(VAR_17, VAR_15->origin, VAR_18);
   FUNC_38(VAR_18, VAR_15->ideal_viewangles);
  }
  else {
   FUNC_38(VAR_20.movedir, VAR_15->ideal_viewangles);
  }
  VAR_15->ideal_viewangles[2] *= 0.5;
 }

 if (VAR_20.flags & VAR_4)
  VAR_15->weaponnum = VAR_20.weapon;

 if (FUNC_13(VAR_15, -1)) {
  if (FUNC_23(VAR_15)) {

   FUNC_1(VAR_15, "activate entity: found enemy");
  }
  else {
   FUNC_35(VAR_15->ms);

   FUNC_31(VAR_15->gs);

   FUNC_0(VAR_15, "activate entity: found enemy");
  }
  FUNC_10(VAR_15);
 }
 return VAR_14;
}
