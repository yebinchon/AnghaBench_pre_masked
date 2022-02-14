
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_14__ {int flags; int goalareanum; size_t iteminfo; float weight; int number; scalar_t__ timeout; int entitynum; int goalorigin; struct TYPE_14__* next; } ;
typedef TYPE_1__ levelitem_t ;
struct TYPE_15__ {size_t number; float respawntime; int maxs; int mins; } ;
typedef TYPE_2__ iteminfo_t ;
struct TYPE_16__ {TYPE_2__* iteminfo; } ;
typedef TYPE_3__ itemconfig_t ;
struct TYPE_17__ {int lastreachabilityarea; int* itemweightindex; int itemweightconfig; int client; } ;
typedef TYPE_4__ bot_goalstate_t ;
struct TYPE_18__ {int areanum; int iteminfo; int flags; int number; int entitynum; int maxs; int mins; int origin; } ;
typedef TYPE_5__ bot_goal_t ;
struct TYPE_19__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,int) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,float) ;
 float FUNC_3 (int,int ) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 float FUNC_8 (int*,int ,int) ;
 float FUNC_9 (int*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 float VAR_13 ;
 int FUNC_10 (int ,int ) ;
 TYPE_8__* VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_11(int VAR_20, vec3_t VAR_21, int *VAR_22, int VAR_23,
              bot_goal_t *VAR_24, float VAR_25)
{
 int VAR_26, VAR_27, VAR_28, VAR_29;
 float VAR_30, VAR_31, VAR_32;
 iteminfo_t *VAR_33;
 itemconfig_t *VAR_34;
 levelitem_t *VAR_35, *VAR_36;
 bot_goal_t VAR_37;
 bot_goalstate_t *VAR_38;

 VAR_38 = FUNC_4(VAR_20);
 if (!VAR_38)
  return VAR_18;
 if (!VAR_38->itemweightconfig)
  return VAR_18;

 VAR_26 = FUNC_6(VAR_21, VAR_38->client);

 if (!VAR_26 || !FUNC_0(VAR_26))
 {

  VAR_26 = VAR_38->lastreachabilityarea;
 }

 VAR_38->lastreachabilityarea = VAR_26;

 if (!VAR_26)
  return VAR_18;

 if (VAR_24) VAR_29 = FUNC_1(VAR_26, VAR_21, VAR_24->areanum, VAR_23);
 else VAR_29 = 99999;

 VAR_34 = VAR_16;
 if (!VAR_16)
  return VAR_18;

 VAR_31 = 0;
 VAR_36 = ((void*)0);
 FUNC_7(&VAR_37, 0, sizeof(bot_goal_t));

 for (VAR_35 = VAR_17; VAR_35; VAR_35 = VAR_35->next)
 {
  if (VAR_15 == VAR_6) {
   if (VAR_35->flags & VAR_10)
    continue;
  }
  else if (VAR_15 >= VAR_7) {
   if (VAR_35->flags & VAR_11)
    continue;
  }
  else {
   if (VAR_35->flags & VAR_9)
    continue;
  }
  if (VAR_35->flags & VAR_8)
   continue;

  if (!VAR_35->goalareanum)
   continue;

  if (!VAR_35->entitynum && !(VAR_35->flags & VAR_12))
   continue;

  VAR_33 = &VAR_34->iteminfo[VAR_35->iteminfo];
  VAR_28 = VAR_38->itemweightindex[VAR_33->number];
  if (VAR_28 < 0)
   continue;




  VAR_30 = FUNC_8(VAR_22, VAR_38->itemweightconfig, VAR_28);







  if (VAR_35->flags & VAR_12) VAR_30 *= VAR_35->weight;

  if (VAR_30 > 0)
  {

   VAR_27 = FUNC_1(VAR_26, VAR_21, VAR_35->goalareanum, VAR_23);

   if (VAR_27 > 0 && VAR_27 < VAR_25)
   {

    VAR_32 = FUNC_3(VAR_20, VAR_35->number);
    if (VAR_32 - VAR_27 * 0.009 > 0)
     continue;

    VAR_30 /= (float) VAR_27 * VAR_13;

    if (VAR_30 > VAR_31)
    {
     VAR_27 = 0;
     if (VAR_24 && !VAR_35->timeout)
     {

      VAR_27 = FUNC_1(VAR_35->goalareanum, VAR_35->goalorigin, VAR_24->areanum, VAR_23);
     }

     if (VAR_27 <= VAR_29)
     {
      VAR_31 = VAR_30;
      VAR_36 = VAR_35;
     }
    }
   }
  }
 }

 if (!VAR_36)
  return VAR_18;

 VAR_33 = &VAR_34->iteminfo[VAR_36->iteminfo];
 FUNC_10(VAR_36->goalorigin, VAR_37.origin);
 FUNC_10(VAR_33->mins, VAR_37.mins);
 FUNC_10(VAR_33->maxs, VAR_37.maxs);
 VAR_37.areanum = VAR_36->goalareanum;
 VAR_37.entitynum = VAR_36->entitynum;
 VAR_37.number = VAR_36->number;
 VAR_37.flags = VAR_4;
 if (VAR_36->timeout)
  VAR_37.flags |= VAR_3;
 if (VAR_36->flags & VAR_12)
  VAR_37.flags |= VAR_5;
 VAR_37.iteminfo = VAR_36->iteminfo;

 if (VAR_36->timeout)
 {
  VAR_32 = VAR_1;
 }
 else
 {
  VAR_32 = VAR_33->respawntime;
  if (!VAR_32)
   VAR_32 = VAR_0;
  if (VAR_32 < VAR_2)
   VAR_32 = VAR_2;
 }

 FUNC_2(VAR_38, VAR_36->number, VAR_32);

 FUNC_5(VAR_20, &VAR_37);

 return VAR_19;
}
