
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {scalar_t__ reachareanum; int* origin; int client; int lastreachnum; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int* movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {int* start; int* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_1 (int*) ;
 double FUNC_2 (int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,float) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int*,int,int*,int*) ;
 float FUNC_8 (int*) ;
 int FUNC_9 (int*,int*,int*) ;
 int FUNC_10 (TYPE_2__) ;
 TYPE_2__ VAR_0 ;

bot_moveresult_t FUNC_11(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 int VAR_9;
 float VAR_10, VAR_11, VAR_12;
 FUNC_10( VAR_0 );


 FUNC_0(VAR_2, VAR_8);

 VAR_3[0] = VAR_8[0] - VAR_2->start[0];
 VAR_3[1] = VAR_8[1] - VAR_2->start[1];
 VAR_3[2] = 0;
 FUNC_8(VAR_3);

 FUNC_6(VAR_2->start, VAR_6);
 VAR_6[2] += 1;
 FUNC_7(VAR_2->start, 80, VAR_3, VAR_8);

 for (VAR_9 = 0; VAR_9 < 80; VAR_9 += 10)
 {
  FUNC_7(VAR_6, VAR_9+10, VAR_3, VAR_7);
  VAR_7[2] += 1;
  if (FUNC_1(VAR_7) != VAR_1->reachareanum) break;
 }
 if (VAR_9 < 80) FUNC_7(VAR_2->start, VAR_9, VAR_3, VAR_8);

 FUNC_9(VAR_1->origin, VAR_2->start, VAR_4);
 VAR_4[2] = 0;
 VAR_10 = FUNC_8(VAR_4);
 FUNC_9(VAR_1->origin, VAR_8, VAR_5);
 VAR_5[2] = 0;
 VAR_11 = FUNC_8(VAR_5);

 if (FUNC_2(VAR_4, VAR_5) < -0.8 || VAR_11 < 5)
 {

  VAR_3[0] = VAR_2->end[0] - VAR_1->origin[0];
  VAR_3[1] = VAR_2->end[1] - VAR_1->origin[1];
  VAR_3[2] = 0;
  FUNC_8(VAR_3);

  if (VAR_10 < 24) FUNC_4(VAR_1->client);
  else if (VAR_10 < 32) FUNC_3(VAR_1->client);
  FUNC_5(VAR_1->client, VAR_3, 600);

  VAR_1->jumpreach = VAR_1->lastreachnum;
 }
 else
 {

  VAR_3[0] = VAR_8[0] - VAR_1->origin[0];
  VAR_3[1] = VAR_8[1] - VAR_1->origin[1];
  VAR_3[2] = 0;
  FUNC_8(VAR_3);

  if (VAR_11 > 80) VAR_11 = 80;
  VAR_12 = 400 - (400 - 5 * VAR_11);
  FUNC_5(VAR_1->client, VAR_3, VAR_12);
 }
 FUNC_6(VAR_3, VAR_0.movedir);

 return VAR_0;
}
