
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int moveflags; int lastorigin; scalar_t__* origin; int lastgoalareanum; scalar_t__ lastareanum; scalar_t__ lastreachnum; int client; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int flags; int ideal_viewangles; int movedir; int traveltype; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {int areanum; scalar_t__* origin; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 float FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_2__) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_6, bot_goal_t *VAR_7)
{
 FUNC_5( VAR_5 );
 vec3_t VAR_8;
 float VAR_9, VAR_10;







 VAR_8[0] = VAR_7->origin[0] - VAR_6->origin[0];
 VAR_8[1] = VAR_7->origin[1] - VAR_6->origin[1];
 if (VAR_6->moveflags & VAR_0)
 {
  VAR_8[2] = VAR_7->origin[2] - VAR_6->origin[2];
  VAR_5.traveltype = VAR_2;
 }
 else
 {
  VAR_8[2] = 0;
  VAR_5.traveltype = VAR_3;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 > 100) VAR_9 = 100;
 VAR_10 = 400 - (400 - 4 * VAR_9);
 if (VAR_10 < 10) VAR_10 = 0;

 FUNC_0(VAR_6, VAR_8, VAR_4, &VAR_5);

 FUNC_1(VAR_6->client, VAR_8, VAR_10);
 FUNC_3(VAR_8, VAR_5.movedir);

 if (VAR_6->moveflags & VAR_0)
 {
  FUNC_2(VAR_8, VAR_5.ideal_viewangles);
  VAR_5.flags |= VAR_1;
 }



 VAR_6->lastreachnum = 0;
 VAR_6->lastareanum = 0;
 VAR_6->lastgoalareanum = VAR_7->areanum;
 FUNC_3(VAR_6->origin, VAR_6->lastorigin);

 return VAR_5;
}
