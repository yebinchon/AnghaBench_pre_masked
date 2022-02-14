
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_29__ {int tfl; int enemy; scalar_t__ nbg_time; double* ideal_viewangles; double thinktime; int flags; int gs; int ms; int weaponnum; int origin; scalar_t__ check_time; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_30__ {int flags; int weapon; int movedir; int ideal_viewangles; scalar_t__ failure; } ;
typedef TYPE_2__ bot_moveresult_t ;
typedef int bot_goal_t ;
struct TYPE_31__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 scalar_t__ FUNC_21 () ;
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
 int FUNC_22 (int ,double*) ;
 int FUNC_23 (int ,int ,int ) ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 double FUNC_24 () ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (TYPE_2__*,int ,int *,int) ;
 scalar_t__ FUNC_29 (int ,int *,int,int,int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,double*) ;

int FUNC_34(bot_state_t *VAR_14) {
 bot_goal_t VAR_15;
 vec3_t VAR_16, VAR_17;
 bot_moveresult_t VAR_18;

 if (FUNC_15(VAR_14)) {
  FUNC_3(VAR_14, "seek nbg: observer");
  return VAR_12;
 }

 if (FUNC_13(VAR_14)) {
  FUNC_2(VAR_14, "seek nbg: intermision");
  return VAR_12;
 }

 if (FUNC_14(VAR_14)) {
  FUNC_4(VAR_14, "seek nbg: bot dead");
  return VAR_12;
 }

 VAR_14->tfl = VAR_6;
 if (VAR_11.integer) VAR_14->tfl |= VAR_7;

 if (FUNC_12(VAR_14)) VAR_14->tfl |= VAR_8|VAR_10;

 if (FUNC_8(VAR_14)) {
  VAR_14->tfl |= VAR_9;
 }

 FUNC_16(VAR_14);

 VAR_14->enemy = -1;

 if (!FUNC_27(VAR_14->gs, &VAR_15)) VAR_14->nbg_time = 0;

 else if (FUNC_17(VAR_14, &VAR_15)) {
  FUNC_9(VAR_14);
  VAR_14->nbg_time = 0;
 }

 if (VAR_14->nbg_time < FUNC_21()) {

  FUNC_30(VAR_14->gs);


  VAR_14->check_time = FUNC_21() + 0.05;

  FUNC_5(VAR_14, "seek nbg: time out");
  return VAR_12;
 }

 if (FUNC_7(VAR_14, &VAR_15))
  return VAR_12;

 FUNC_19(VAR_14);

 FUNC_28(&VAR_18, VAR_14->ms, &VAR_15, VAR_14->tfl);

 if (VAR_18.failure) {

  FUNC_31(VAR_14->ms);
  VAR_14->nbg_time = 0;
 }

 FUNC_6(VAR_14, &VAR_18, VAR_13);

 FUNC_10(VAR_14, &VAR_18);

 if (VAR_18.flags & (VAR_2|VAR_1|VAR_4)) {
  FUNC_22(VAR_18.ideal_viewangles, VAR_14->ideal_viewangles);
 }

 else if (VAR_18.flags & VAR_5) {
  if (FUNC_24() < VAR_14->thinktime * 0.8) {
   FUNC_18(VAR_14, VAR_16);
   FUNC_23(VAR_16, VAR_14->origin, VAR_17);
   FUNC_33(VAR_17, VAR_14->ideal_viewangles);
   VAR_14->ideal_viewangles[2] *= 0.5;
  }
 }
 else if (!(VAR_14->flags & VAR_0)) {
  if (!FUNC_26(VAR_14->gs, &VAR_15)) FUNC_27(VAR_14->gs, &VAR_15);
  if (FUNC_29(VAR_14->ms, &VAR_15, VAR_14->tfl, 300, VAR_16)) {
   FUNC_23(VAR_16, VAR_14->origin, VAR_17);
   FUNC_33(VAR_17, VAR_14->ideal_viewangles);
  }

  else FUNC_33(VAR_18.movedir, VAR_14->ideal_viewangles);
  VAR_14->ideal_viewangles[2] *= 0.5;
 }

 if (VAR_18.flags & VAR_3) VAR_14->weaponnum = VAR_18.weapon;

 if (FUNC_11(VAR_14, -1)) {
  if (FUNC_20(VAR_14)) {

   FUNC_1(VAR_14, "seek nbg: found enemy");
  }
  else {
   FUNC_32(VAR_14->ms);

   FUNC_25(VAR_14->gs);

   FUNC_0(VAR_14, "seek nbg: found enemy");
  }
 }
 return VAR_13;
}
