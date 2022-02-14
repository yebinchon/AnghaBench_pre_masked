
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int client; int lastreachnum; int jumpreach; scalar_t__* origin; int * viewangles; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int* ideal_viewangles; int weapon; int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_13__ {scalar_t__ value; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,float) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_6 (scalar_t__*,int*) ;
 int FUNC_7 (scalar_t__*,int ) ;
 float FUNC_8 (scalar_t__*) ;
 int FUNC_9 (TYPE_2__) ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_4__* VAR_4 ;

bot_moveresult_t FUNC_11(bot_movestate_t *VAR_5, aas_reachability_t *VAR_6)
{
 vec3_t VAR_7;
 float VAR_8, VAR_9;
 FUNC_9( VAR_3 );



 VAR_7[0] = VAR_6->start[0] - VAR_5->origin[0];
 VAR_7[1] = VAR_6->start[1] - VAR_5->origin[1];
 VAR_7[2] = 0;

 VAR_8 = FUNC_8(VAR_7);

 FUNC_6(VAR_7, VAR_3.ideal_viewangles);

 VAR_3.ideal_viewangles[VAR_2] = 90;

 if (VAR_8 < 5 &&
   FUNC_10(FUNC_0(VAR_3.ideal_viewangles[0], VAR_5->viewangles[0])) < 5 &&
   FUNC_10(FUNC_0(VAR_3.ideal_viewangles[1], VAR_5->viewangles[1])) < 5)
 {

  VAR_7[0] = VAR_6->end[0] - VAR_5->origin[0];
  VAR_7[1] = VAR_6->end[1] - VAR_5->origin[1];
  VAR_7[2] = 0;
  FUNC_8(VAR_7);

  FUNC_2(VAR_5->client);
  FUNC_1(VAR_5->client);
  FUNC_3(VAR_5->client, VAR_7, 800);

  VAR_5->jumpreach = VAR_5->lastreachnum;
 }
 else
 {
  if (VAR_8 > 80) VAR_8 = 80;
  VAR_9 = 400 - (400 - 5 * VAR_8);
  FUNC_3(VAR_5->client, VAR_7, VAR_9);
 }

 FUNC_6(VAR_7, VAR_3.ideal_viewangles);

 VAR_3.ideal_viewangles[VAR_2] = 90;

 FUNC_5(VAR_5->client, VAR_3.ideal_viewangles);

 VAR_3.flags |= VAR_0;

 FUNC_4(VAR_5->client, (int) VAR_4->value);

 VAR_3.weapon = (int) VAR_4->value;
 VAR_3.flags |= VAR_1;

 FUNC_7(VAR_7, VAR_3.movedir);

 return VAR_3;
}
