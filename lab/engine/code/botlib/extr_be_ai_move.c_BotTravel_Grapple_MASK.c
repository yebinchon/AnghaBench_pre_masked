
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_21__ {scalar_t__* endpos; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_22__ {int moveflags; float lastgrappledist; double grapplevisible_time; int reachareanum; scalar_t__ reachability_time; scalar_t__* origin; int client; int entitynum; int viewoffset; int * viewangles; } ;
typedef TYPE_2__ bot_movestate_t ;
struct TYPE_23__ {int movedir; int failure; int * ideal_viewangles; int flags; int weapon; } ;
typedef TYPE_3__ bot_moveresult_t ;
struct TYPE_24__ {int end; int start; } ;
typedef TYPE_4__ aas_reachability_t ;
struct TYPE_28__ {int string; } ;
struct TYPE_27__ {int string; } ;
struct TYPE_26__ {scalar_t__ value; } ;
struct TYPE_25__ {int value; } ;
struct TYPE_20__ {int (* DebugLineCreate ) () ;int (* Print ) (int ,char*) ;int (* DebugLineShow ) (int,int ,int ,int ) ;} ;


 int FUNC_0 (scalar_t__*) ;
 double FUNC_1 () ;
 TYPE_1__ FUNC_2 (scalar_t__*,int *,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__*,int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__*,float) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__*,int *) ;
 int FUNC_10 (scalar_t__*,int ,scalar_t__*) ;
 int FUNC_11 (scalar_t__*,int ) ;
 int FUNC_12 (scalar_t__*) ;
 float FUNC_13 (scalar_t__*) ;
 int FUNC_14 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (TYPE_3__) ;
 TYPE_10__ VAR_9 ;
 TYPE_9__* VAR_10 ;
 TYPE_8__* VAR_11 ;
 int FUNC_16 (int ) ;
 TYPE_7__* VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 int FUNC_17 () ;
 int FUNC_18 (int,int ,int ,int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int ,char*) ;
 TYPE_5__* VAR_15 ;

bot_moveresult_t FUNC_24(bot_movestate_t *VAR_16, aas_reachability_t *VAR_17)
{
 FUNC_15( VAR_14 );
 float VAR_18, VAR_19;
 vec3_t VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 bsp_trace_t VAR_25;
 if (VAR_16->moveflags & VAR_3)
 {
  if (VAR_12->value)
   FUNC_6(VAR_16->client, VAR_10->string);
  VAR_16->moveflags &= ~VAR_2;
  return VAR_14;
 }

 if (!(int) VAR_12->value)
 {
  VAR_14.weapon = VAR_15->value;
  VAR_14.flags |= VAR_6;
 }

 if (VAR_16->moveflags & VAR_2)
 {




  VAR_23 = FUNC_8(VAR_16, VAR_17);

  FUNC_14(VAR_17->end, VAR_16->origin, VAR_20);
  VAR_20[2] = 0;
  VAR_18 = FUNC_12(VAR_20);


  if (VAR_23 && VAR_18 < 48)
  {
   if (VAR_16->lastgrappledist - VAR_18 < 1)
   {



    if (VAR_12->value)
     FUNC_6(VAR_16->client, VAR_10->string);
    VAR_16->moveflags &= ~VAR_2;
    VAR_16->moveflags |= VAR_3;
    VAR_16->reachability_time = 0;
    return VAR_14;
   }
  }


  else if (!VAR_23 || (VAR_23 == 2 && VAR_18 > VAR_16->lastgrappledist - 2))
  {
   if (VAR_16->grapplevisible_time < FUNC_1() - 0.4)
   {



    if (VAR_12->value)
     FUNC_6(VAR_16->client, VAR_10->string);
    VAR_16->moveflags &= ~VAR_2;
    VAR_16->moveflags |= VAR_3;
    VAR_16->reachability_time = 0;
    return VAR_14;
   }
  }
  else
  {
   VAR_16->grapplevisible_time = FUNC_1();
  }

  if (!(int) VAR_12->value)
  {
   FUNC_5(VAR_16->client);
  }

  VAR_16->lastgrappledist = VAR_18;
 }
 else
 {




  VAR_16->grapplevisible_time = FUNC_1();

  FUNC_14(VAR_17->start, VAR_16->origin, VAR_20);
  if (!(VAR_16->moveflags & VAR_4)) VAR_20[2] = 0;
  FUNC_10(VAR_16->origin, VAR_16->viewoffset, VAR_22);
  FUNC_14(VAR_17->end, VAR_22, VAR_21);

  VAR_18 = FUNC_13(VAR_20);
  FUNC_9(VAR_21, VAR_14.ideal_viewangles);
  VAR_14.flags |= VAR_5;

  if (VAR_18 < 5 &&
   FUNC_16(FUNC_3(VAR_14.ideal_viewangles[0], VAR_16->viewangles[0])) < 2 &&
   FUNC_16(FUNC_3(VAR_14.ideal_viewangles[1], VAR_16->viewangles[1])) < 2)
  {




   FUNC_10(VAR_16->origin, VAR_16->viewoffset, VAR_22);
   VAR_25 = FUNC_2(VAR_22, ((void*)0), ((void*)0), VAR_17->end, VAR_16->entitynum, VAR_0);
   FUNC_14(VAR_17->end, VAR_25.endpos, VAR_20);
   if (FUNC_12(VAR_20) > 16)
   {
    VAR_14.failure = VAR_13;
    return VAR_14;
   }

   if (VAR_12->value)
   {
    FUNC_6(VAR_16->client, VAR_11->string);
   }
   else
   {
    FUNC_5(VAR_16->client);
   }
   VAR_16->moveflags |= VAR_2;
   VAR_16->lastgrappledist = 999999;
  }
  else
  {
   if (VAR_18 < 70) VAR_19 = 300 - (300 - 4 * VAR_18);
   else VAR_19 = 400;

   FUNC_4(VAR_16, VAR_20, VAR_13, &VAR_14);

   FUNC_7(VAR_16->client, VAR_20, VAR_19);
   FUNC_11(VAR_20, VAR_14.movedir);
  }

  VAR_24 = FUNC_0(VAR_16->origin);
  if (VAR_24 && VAR_24 != VAR_16->reachareanum) VAR_16->reachability_time = 0;
 }
 return VAR_14;
}
