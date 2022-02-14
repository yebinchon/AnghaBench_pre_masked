
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_24__ {scalar_t__ number; } ;
struct TYPE_22__ {scalar_t__ areanum; } ;
struct TYPE_23__ {scalar_t__ ltgtype; int teamgoal_time; scalar_t__ rushbaseaway_time; int redflagstatus; int blueflagstatus; int teammate; scalar_t__ owndecision_time; int arrive_time; double formation_dist; scalar_t__ ctfroam_time; int teamtaskpreference; scalar_t__ defendaway_time; TYPE_3__ teamgoal; void* ordered; int client; int decisionmaker; scalar_t__ teammessage_time; scalar_t__ lastgoal_ltgtype; scalar_t__ teammatevisible_time; TYPE_1__ altroutegoal; int origin; } ;
typedef TYPE_2__ bot_state_t ;
typedef int bot_goal_t ;
typedef int aas_entityinfo_t ;
struct TYPE_25__ {scalar_t__ number; scalar_t__ areanum; int origin; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int const FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

 scalar_t__ VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int,int) ;
 int FUNC_19 (int ,int ,int ) ;
 TYPE_4__ VAR_22 ;
 TYPE_4__ VAR_23 ;
 int FUNC_20 (TYPE_3__*,TYPE_4__*,int) ;
 void* VAR_24 ;
 int FUNC_21 () ;
 int FUNC_22 (char*,int ) ;

void FUNC_23(bot_state_t *VAR_25) {
 float VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;
 vec3_t VAR_31;
 aas_entityinfo_t VAR_32;


 if (FUNC_1(VAR_25)) {

  if (VAR_25->ltgtype != VAR_12) {
   FUNC_7(VAR_25);
   VAR_25->ltgtype = VAR_12;
   VAR_25->teamgoal_time = FUNC_16() + VAR_3;
   VAR_25->rushbaseaway_time = 0;
   VAR_25->decisionmaker = VAR_25->client;
   VAR_25->ordered = VAR_24;

   switch(FUNC_11(VAR_25)) {
    case 128: FUNC_19(VAR_25->origin, VAR_22.origin, VAR_31); break;
    case 129: FUNC_19(VAR_25->origin, VAR_23.origin, VAR_31); break;
    default: FUNC_18(VAR_31, 999, 999, 999); break;
   }

   if ( FUNC_17(VAR_31) < 128 ) {

    FUNC_4(VAR_25, FUNC_5(VAR_25));
   } else {

    VAR_25->altroutegoal.areanum = 0;
   }
   FUNC_10(VAR_25, "teamtask", FUNC_22("%d", VAR_15));
   FUNC_14(VAR_25, -1, VAR_20);
  }
  else if (VAR_25->rushbaseaway_time > FUNC_16()) {
   if (FUNC_11(VAR_25) == 128) VAR_29 = VAR_25->redflagstatus;
   else VAR_29 = VAR_25->blueflagstatus;

   if (VAR_29 == 0) {
    VAR_25->rushbaseaway_time = 0;
   }
  }
  return;
 }

 if ( VAR_25->ltgtype == VAR_13 && !VAR_25->ordered ) {

  FUNC_3(VAR_25->teammate, &VAR_32);
  if (!FUNC_15(&VAR_32)) {
   VAR_25->ltgtype = 0;
  }
 }

 if (FUNC_11(VAR_25) == 128) VAR_29 = VAR_25->redflagstatus * 2 + VAR_25->blueflagstatus;
 else VAR_29 = VAR_25->blueflagstatus * 2 + VAR_25->redflagstatus;

 if (VAR_29 == 1) {

  if (VAR_25->owndecision_time < FUNC_16()) {

   if (!(VAR_25->ltgtype == VAR_5 &&
     (VAR_25->teamgoal.number == VAR_23.number ||
     VAR_25->teamgoal.number == VAR_22.number))) {

    VAR_30 = FUNC_12(VAR_25);
    if (VAR_30 >= 0 &&

      (VAR_25->ltgtype != VAR_13 || VAR_25->teammate != VAR_30)) {

     FUNC_7(VAR_25);

     VAR_25->decisionmaker = VAR_25->client;
     VAR_25->ordered = VAR_24;

     VAR_25->teammate = VAR_30;

     VAR_25->teammatevisible_time = FUNC_16();

     VAR_25->teammessage_time = 0;

     VAR_25->arrive_time = 1;

     FUNC_14(VAR_25, VAR_25->teammate, VAR_21);

     VAR_25->teamgoal_time = FUNC_16() + VAR_18;
     VAR_25->ltgtype = VAR_13;
     VAR_25->formation_dist = 3.5 * 32;
     FUNC_9(VAR_25);
     VAR_25->owndecision_time = FUNC_16() + 5;
    }
   }
  }
  return;
 }

 else if (VAR_29 == 2) {

  if (VAR_25->owndecision_time < FUNC_16()) {

   VAR_30 = FUNC_2(VAR_25);
   if (VAR_30 >= 0) {

   }

   if (VAR_25->ltgtype != VAR_6 &&
    VAR_25->ltgtype != VAR_11 &&
    VAR_25->ltgtype != VAR_14 &&
    VAR_25->ltgtype != VAR_13 &&
    VAR_25->ltgtype != VAR_4 &&
    VAR_25->ltgtype != VAR_10 &&
    VAR_25->ltgtype != VAR_7) {

    FUNC_7(VAR_25);
    VAR_25->decisionmaker = VAR_25->client;
    VAR_25->ordered = VAR_24;

    if (FUNC_21() < 0.5) {

     VAR_25->ltgtype = VAR_6;
    }
    else {
     VAR_25->ltgtype = VAR_11;
    }

    VAR_25->teammessage_time = 0;

    VAR_25->teamgoal_time = FUNC_16() + VAR_0;

    FUNC_4(VAR_25, FUNC_5(VAR_25));

    FUNC_9(VAR_25);
    VAR_25->owndecision_time = FUNC_16() + 5;
   }
  }
  return;
 }

 else if (VAR_29 == 3) {

  if (VAR_25->owndecision_time < FUNC_16()) {

   if ( VAR_25->ltgtype != VAR_11 && VAR_25->ltgtype != VAR_13 ) {

    VAR_30 = FUNC_12(VAR_25);

    if (VAR_30 >= 0) {
     FUNC_7(VAR_25);

     VAR_25->decisionmaker = VAR_25->client;
     VAR_25->ordered = VAR_24;

     VAR_25->teammate = VAR_30;

     VAR_25->teammatevisible_time = FUNC_16();

     VAR_25->teammessage_time = 0;

     VAR_25->arrive_time = 1;

     FUNC_14(VAR_25, VAR_25->teammate, VAR_21);

     VAR_25->teamgoal_time = FUNC_16() + VAR_18;
     VAR_25->ltgtype = VAR_13;
     VAR_25->formation_dist = 3.5 * 32;

     FUNC_9(VAR_25);
     VAR_25->owndecision_time = FUNC_16() + 5;
    }
    else {
     FUNC_7(VAR_25);
     VAR_25->decisionmaker = VAR_25->client;
     VAR_25->ordered = VAR_24;

     VAR_25->teammessage_time = FUNC_16() + 2 * FUNC_21();

     VAR_25->ltgtype = VAR_11;

     VAR_25->teamgoal_time = FUNC_16() + VAR_1;

     FUNC_4(VAR_25, FUNC_5(VAR_25));

     FUNC_9(VAR_25);
     VAR_25->owndecision_time = FUNC_16() + 5;
    }
   }
  }
  return;
 }

 if (FUNC_13(VAR_25)) {
  return;
 }

 if ( VAR_25->lastgoal_ltgtype ) {
  VAR_25->teamgoal_time += 60;
 }

 if ( !VAR_25->ordered && VAR_25->lastgoal_ltgtype ) {
  VAR_25->ltgtype = 0;
 }

 if (VAR_25->ltgtype == VAR_14 ||
   VAR_25->ltgtype == VAR_13 ||
   VAR_25->ltgtype == VAR_5 ||
   VAR_25->ltgtype == VAR_6 ||
   VAR_25->ltgtype == VAR_12 ||
   VAR_25->ltgtype == VAR_11 ||
   VAR_25->ltgtype == VAR_4 ||
   VAR_25->ltgtype == VAR_10 ||
   VAR_25->ltgtype == VAR_7 ||
   VAR_25->ltgtype == VAR_9 ||
   VAR_25->ltgtype == VAR_8) {
  return;
 }

 if (FUNC_8(VAR_25))
  return;

 if (VAR_25->owndecision_time > FUNC_16())
  return;;

 if (VAR_25->ctfroam_time > FUNC_16())
  return;

 if (FUNC_0(VAR_25) < 50)
  return;

 VAR_25->teammessage_time = FUNC_16() + 2 * FUNC_21();

 if (VAR_25->teamtaskpreference & (VAR_16|VAR_17)) {
  if (VAR_25->teamtaskpreference & VAR_16) {
   VAR_27 = 0.7f;
  }
  else {
   VAR_27 = 0.2f;
  }
  VAR_28 = 0.9f;
 }
 else {
  VAR_27 = 0.4f;
  VAR_28 = 0.7f;
 }

 VAR_26 = FUNC_21();
 if (VAR_26 < VAR_27 && VAR_23.areanum && VAR_22.areanum) {
  VAR_25->decisionmaker = VAR_25->client;
  VAR_25->ordered = VAR_24;
  VAR_25->ltgtype = VAR_6;

  VAR_25->teamgoal_time = FUNC_16() + VAR_0;

  FUNC_4(VAR_25, FUNC_5(VAR_25));
  FUNC_9(VAR_25);
 }
 else if (VAR_26 < VAR_28 && VAR_23.areanum && VAR_22.areanum) {
  VAR_25->decisionmaker = VAR_25->client;
  VAR_25->ordered = VAR_24;

  if (FUNC_11(VAR_25) == 128) FUNC_20(&VAR_25->teamgoal, &VAR_23, sizeof(bot_goal_t));
  else FUNC_20(&VAR_25->teamgoal, &VAR_22, sizeof(bot_goal_t));

  VAR_25->ltgtype = VAR_5;

  VAR_25->teamgoal_time = FUNC_16() + VAR_19;
  VAR_25->defendaway_time = 0;
  FUNC_9(VAR_25);
 }
 else {
  VAR_25->ltgtype = 0;

  VAR_25->ctfroam_time = FUNC_16() + VAR_2;
  FUNC_9(VAR_25);
 }
 VAR_25->owndecision_time = FUNC_16() + 5;



}
