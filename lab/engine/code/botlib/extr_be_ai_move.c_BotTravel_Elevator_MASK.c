
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_17__ {int moveflags; int client; scalar_t__* origin; scalar_t__ reachability_time; int entitynum; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_18__ {int flags; scalar_t__* movedir; int type; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_19__ {scalar_t__* start; scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_21__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_20__ {scalar_t__ value; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 float FUNC_8 (scalar_t__*) ;
 float FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (TYPE_2__) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*) ;
 TYPE_4__* VAR_8 ;

bot_moveresult_t FUNC_20(bot_movestate_t *VAR_9, aas_reachability_t *VAR_10)
{
 vec3_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 float VAR_16, VAR_17, VAR_18, VAR_19;
 FUNC_11( VAR_7 );


 if (FUNC_2(VAR_9->origin, VAR_9->entitynum, VAR_10))
 {




  if (FUNC_12(VAR_9->origin[2] - VAR_10->end[2]) < VAR_8->value)
  {




   FUNC_10(VAR_10->end, VAR_9->origin, VAR_14);
   VAR_14[2] = 0;
   FUNC_9(VAR_14);
   if (!FUNC_0(VAR_9, VAR_14, 100))
   {
    FUNC_4(VAR_9->client, VAR_14, 400);
   }
   FUNC_7(VAR_14, VAR_7.movedir);
  }

  else
  {
   FUNC_5(VAR_10, VAR_15);
   FUNC_10(VAR_15, VAR_9->origin, VAR_14);
   VAR_14[2] = 0;
   VAR_16 = FUNC_9(VAR_14);

   if (VAR_16 > 10)
   {




    if (VAR_16 > 100) VAR_16 = 100;
    VAR_19 = 400 - (400 - 4 * VAR_16);

    FUNC_4(VAR_9->client, VAR_14, VAR_19);
    FUNC_7(VAR_14, VAR_7.movedir);
   }
  }
 }
 else
 {




  FUNC_10(VAR_10->end, VAR_9->origin, VAR_11);
  VAR_16 = FUNC_8(VAR_11);
  if (VAR_16 < 64)
  {
   if (VAR_16 > 60) VAR_16 = 60;
   VAR_19 = 360 - (360 - 6 * VAR_16);

   if ((VAR_9->moveflags & VAR_0) || !FUNC_0(VAR_9, VAR_11, 50))
   {
    if (VAR_19 > 5) FUNC_4(VAR_9->client, VAR_11, VAR_19);
   }
   FUNC_7(VAR_11, VAR_7.movedir);

   if (VAR_9->moveflags & VAR_0) VAR_7.flags |= VAR_1;

   VAR_9->reachability_time = 0;
   return VAR_7;
  }

  FUNC_10(VAR_10->start, VAR_9->origin, VAR_12);
  if (!(VAR_9->moveflags & VAR_0)) VAR_12[2] = 0;
  VAR_17 = FUNC_9(VAR_12);

  if (!FUNC_6(VAR_10))
  {



   VAR_16 = VAR_17;
   FUNC_7(VAR_12, VAR_11);

   FUNC_1(VAR_9, VAR_11, VAR_6, &VAR_7);

   if (VAR_16 > 60) VAR_16 = 60;
   VAR_19 = 360 - (360 - 6 * VAR_16);

   if (!(VAR_9->moveflags & VAR_0) && !FUNC_0(VAR_9, VAR_11, 50))
   {
    if (VAR_19 > 5) FUNC_4(VAR_9->client, VAR_11, VAR_19);
   }
   FUNC_7(VAR_11, VAR_7.movedir);

   if (VAR_9->moveflags & VAR_0) VAR_7.flags |= VAR_1;

   VAR_7.type = VAR_4;
   VAR_7.flags |= VAR_2;
   return VAR_7;
  }

  FUNC_5(VAR_10, VAR_15);
  FUNC_10(VAR_15, VAR_9->origin, VAR_13);
  if (!(VAR_9->moveflags & VAR_0)) VAR_13[2] = 0;
  VAR_18 = FUNC_9(VAR_13);



  if (VAR_17 < 20 || VAR_18 < VAR_17 || FUNC_3(VAR_12, VAR_13) < 0)
  {



   VAR_16 = VAR_18;
   FUNC_7(VAR_13, VAR_11);
  }
  else
  {



   VAR_16 = VAR_17;
   FUNC_7(VAR_12, VAR_11);
  }

  FUNC_1(VAR_9, VAR_11, VAR_6, &VAR_7);

  if (VAR_16 > 60) VAR_16 = 60;
  VAR_19 = 400 - (400 - 6 * VAR_16);

  if (!(VAR_9->moveflags & VAR_0) && !FUNC_0(VAR_9, VAR_11, 50))
  {
   FUNC_4(VAR_9->client, VAR_11, VAR_19);
  }
  FUNC_7(VAR_11, VAR_7.movedir);

  if (VAR_9->moveflags & VAR_0) VAR_7.flags |= VAR_1;
 }
 return VAR_7;
}
