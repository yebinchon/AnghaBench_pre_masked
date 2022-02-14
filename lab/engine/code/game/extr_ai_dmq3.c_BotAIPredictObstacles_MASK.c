
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int predictobstacles_time; TYPE_1__* activatestack; int tfl; int origin; int areanum; int predictobstacles_goalareanum; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_20__ {int areanum; } ;
typedef TYPE_4__ bot_goal_t ;
struct TYPE_18__ {int entitynum; } ;
struct TYPE_21__ {TYPE_2__ goal; } ;
typedef TYPE_5__ bot_activategoal_t ;
struct TYPE_22__ {int stopevent; int endcontents; int endtravelflags; } ;
typedef TYPE_6__ aas_predictroute_t ;
struct TYPE_23__ {int integer; } ;
struct TYPE_17__ {int inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_3__*,int,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int,int ,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ,int ,int,int,int,int,int,int ) ;

int FUNC_7(bot_state_t *VAR_10, bot_goal_t *VAR_11) {
 int VAR_12, VAR_13, VAR_14;
 bot_activategoal_t VAR_15;
 aas_predictroute_t VAR_16;

 if (!VAR_7.integer)
  return VAR_8;


 if (VAR_10->predictobstacles_goalareanum == VAR_11->areanum &&
  VAR_10->predictobstacles_time > FUNC_5() - 6) {
  return VAR_8;
 }
 VAR_10->predictobstacles_goalareanum = VAR_11->areanum;
 VAR_10->predictobstacles_time = FUNC_5();


 FUNC_6(&VAR_16, VAR_10->areanum, VAR_10->origin,
       VAR_11->areanum, VAR_10->tfl, 100, 1000,
       VAR_5|VAR_4,
       VAR_2, VAR_6, 0);

 if (VAR_16.stopevent & VAR_4) {

  if (VAR_16.endcontents & VAR_2) {

   VAR_12 = (VAR_16.endcontents & VAR_0) >> VAR_1;
   if (VAR_12) {

    VAR_13 = FUNC_4(VAR_12, VAR_3, 0, ((void*)0), ((void*)0));
    if (VAR_13) {

     VAR_14 = FUNC_1(VAR_10, VAR_13, &VAR_15);
     if (VAR_14) {

      if (VAR_10->activatestack && !VAR_10->activatestack->inuse)
       VAR_10->activatestack = ((void*)0);

      if (!FUNC_3(VAR_10, VAR_15.goal.entitynum)) {



       FUNC_2(VAR_10, &VAR_15);
       return VAR_9;
      }
      else {

       FUNC_0(&VAR_15, VAR_9);
      }
     }
    }
   }
  }
 }
 else if (VAR_16.stopevent & VAR_5) {
  if (VAR_16.endtravelflags & VAR_6) {

  }
 }
 return VAR_8;
}
