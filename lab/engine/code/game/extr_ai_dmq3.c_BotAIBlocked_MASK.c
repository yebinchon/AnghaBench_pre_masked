
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int netname ;
struct TYPE_22__ {double notblocked_time; int flags; scalar_t__ ainode; scalar_t__ ltg_time; scalar_t__ nbg_time; int ms; int areanum; TYPE_1__* activatestack; int client; } ;
typedef TYPE_4__ bot_state_t ;
struct TYPE_23__ {scalar_t__ type; int flags; scalar_t__* movedir; int blockentity; int blocked; } ;
typedef TYPE_5__ bot_moveresult_t ;
struct TYPE_20__ {int entitynum; } ;
struct TYPE_24__ {TYPE_2__ goal; } ;
typedef TYPE_6__ bot_activategoal_t ;
struct TYPE_25__ {scalar_t__ modelindex; int number; } ;
typedef TYPE_7__ aas_entityinfo_t ;
struct TYPE_21__ {int member_2; int member_1; int member_0; } ;
struct TYPE_19__ {int inuse; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 double FUNC_10 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (scalar_t__*,scalar_t__*) ;
 double FUNC_13 (scalar_t__*) ;
 int FUNC_14 (scalar_t__*,int ,int,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,scalar_t__*,int,int) ;

void FUNC_18(bot_state_t *VAR_11, bot_moveresult_t *VAR_12, int VAR_13) {



 int VAR_14, VAR_15;
 vec3_t VAR_16, VAR_17, VAR_18, VAR_19 = {0, 0, 1};

 aas_entityinfo_t VAR_20;
 bot_activategoal_t VAR_21;


 if (!VAR_12->blocked) {
  VAR_11->notblocked_time = FUNC_10();
  return;
 }

 if ( VAR_12->type == VAR_8 ) {

  FUNC_7(VAR_11, VAR_12);

  return;
 }

 FUNC_3(VAR_12->blockentity, &VAR_20);





 if (VAR_13 && VAR_20.modelindex > 0 && VAR_20.modelindex <= VAR_9) {

  VAR_15 = FUNC_4(VAR_11, VAR_20.number, &VAR_21);
  if (VAR_15) {

   if (VAR_11->activatestack && !VAR_11->activatestack->inuse)
    VAR_11->activatestack = ((void*)0);

   if (!FUNC_6(VAR_11, VAR_21.goal.entitynum)) {

    FUNC_5(VAR_11, &VAR_21);
   }



   if (!(VAR_12->flags & VAR_4) &&
    FUNC_16(VAR_11->areanum))
    return;
  }
  else {

   FUNC_2(&VAR_21, VAR_10);
  }
 }

 VAR_16[0] = VAR_12->movedir[0];
 VAR_16[1] = VAR_12->movedir[1];
 VAR_16[2] = 0;

 if (FUNC_13(VAR_16) < 0.1) {
  FUNC_14(VAR_18, 0, 360 * FUNC_15(), 0);
  FUNC_0(VAR_18, VAR_16, ((void*)0), ((void*)0));
 }



 VAR_14 = VAR_6;
 FUNC_9(VAR_16, VAR_19, VAR_17);

 if (VAR_11->flags & VAR_2) FUNC_12(VAR_17, VAR_17);

 if (VAR_14 != VAR_5 || !FUNC_17(VAR_11->ms, VAR_16, 400, VAR_14)) {

  if (!FUNC_17(VAR_11->ms, VAR_17, 400, VAR_14)) {

   VAR_11->flags ^= VAR_2;


   FUNC_11(VAR_17, -1, VAR_16, VAR_17);

   FUNC_17(VAR_11->ms, VAR_17, 400, VAR_14);
  }
 }

 if (VAR_11->notblocked_time < FUNC_10() - 0.4) {


  if (VAR_11->ainode == VAR_1) VAR_11->nbg_time = 0;
  else if (VAR_11->ainode == VAR_0) VAR_11->ltg_time = 0;
 }
}
