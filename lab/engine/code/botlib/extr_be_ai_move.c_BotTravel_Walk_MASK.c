
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int moveflags; int client; int entitynum; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {int areanum; scalar_t__* end; scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 float FUNC_2 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,float) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__*,int ) ;
 float FUNC_7 (scalar_t__*) ;
 int FUNC_8 (TYPE_2__) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

bot_moveresult_t FUNC_9(bot_movestate_t *VAR_4, aas_reachability_t *VAR_5)
{
 float VAR_6, VAR_7;
 vec3_t VAR_8;
 FUNC_8( VAR_3 );


 VAR_8[0] = VAR_5->start[0] - VAR_4->origin[0];
 VAR_8[1] = VAR_5->start[1] - VAR_4->origin[1];
 VAR_8[2] = 0;
 VAR_6 = FUNC_7(VAR_8);

 FUNC_1(VAR_4, VAR_8, VAR_2, &VAR_3);

 if (VAR_6 < 10)
 {

  VAR_8[0] = VAR_5->end[0] - VAR_4->origin[0];
  VAR_8[1] = VAR_5->end[1] - VAR_4->origin[1];
  VAR_8[2] = 0;
  VAR_6 = FUNC_7(VAR_8);
 }

 if (!(FUNC_0(VAR_5->areanum) & VAR_1))
 {

  if (VAR_6 < 20) FUNC_3(VAR_4->client);
 }

 VAR_6 = FUNC_2(VAR_4->origin, VAR_8, VAR_4->entitynum);

 if (VAR_4->moveflags & VAR_0)
 {
  if (VAR_6 > 0) VAR_7 = 200 - (180 - 1 * VAR_6);
  else VAR_7 = 200;
  FUNC_5(VAR_4->client);
 }
 else
 {
  if (VAR_6 > 0) VAR_7 = 400 - (360 - 2 * VAR_6);
  else VAR_7 = 400;
 }

 FUNC_4(VAR_4->client, VAR_8, VAR_7);
 FUNC_6(VAR_8, VAR_3.movedir);

 return VAR_3;
}
