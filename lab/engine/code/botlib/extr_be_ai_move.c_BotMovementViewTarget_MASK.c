
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int lastreachnum; int lastareanum; int avoidreachtries; int avoidreachtimes; int avoidreach; int lastgoalareanum; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int areanum; int origin; } ;
typedef TYPE_2__ bot_goal_t ;
struct TYPE_10__ {int traveltype; int areanum; int end; int start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int ,float,float*,int ) ;
 int FUNC_2 (int ,int,int ,int,int ,int ,int ,TYPE_2__*,int,int *,int ,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_5(int VAR_9, bot_goal_t *VAR_10, int VAR_11, float VAR_12, vec3_t VAR_13)
{
 aas_reachability_t VAR_14;
 int VAR_15, VAR_16;
 bot_movestate_t *VAR_17;
 vec3_t VAR_18;
 float VAR_19;

 VAR_17 = FUNC_3(VAR_9);
 if (!VAR_17) return VAR_7;

 if (!VAR_17->lastreachnum || !VAR_10) return VAR_7;

 VAR_15 = VAR_17->lastreachnum;
 FUNC_4(VAR_17->origin, VAR_18);
 VAR_16 = VAR_17->lastareanum;
 VAR_19 = 0;
 while(VAR_15 && VAR_19 < VAR_12)
 {
  FUNC_0(VAR_15, &VAR_14);
  if (FUNC_1(VAR_18, VAR_14.start, VAR_12, &VAR_19, VAR_13)) return VAR_8;

  if ((VAR_14.traveltype & VAR_0) == VAR_6) return VAR_8;

  if ((VAR_14.traveltype & VAR_0) == VAR_5) return VAR_8;
  if ((VAR_14.traveltype & VAR_0) == VAR_1) return VAR_8;

  if ((VAR_14.traveltype & VAR_0) != VAR_4 &&
   (VAR_14.traveltype & VAR_0) != VAR_2 &&
   (VAR_14.traveltype & VAR_0) != VAR_3)
  {
   if (FUNC_1(VAR_14.start, VAR_14.end, VAR_12, &VAR_19, VAR_13)) return VAR_8;
  }
  VAR_15 = FUNC_2(VAR_14.end, VAR_14.areanum,
      VAR_17->lastgoalareanum, VAR_16,
       VAR_17->avoidreach, VAR_17->avoidreachtimes, VAR_17->avoidreachtries,
         VAR_10, VAR_11, ((void*)0), 0, ((void*)0));
  FUNC_4(VAR_14.end, VAR_18);
  VAR_16 = VAR_14.areanum;
  if (VAR_16 == VAR_10->areanum)
  {
   FUNC_1(VAR_14.end, VAR_10->origin, VAR_12, &VAR_19, VAR_13);
   return VAR_8;
  }
 }

 return VAR_7;
}
