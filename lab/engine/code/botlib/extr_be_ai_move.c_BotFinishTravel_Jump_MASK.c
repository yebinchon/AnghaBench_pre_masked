
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int client; scalar_t__* origin; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {scalar_t__* start; scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 double FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*,float) ;
 int FUNC_2 (scalar_t__*,int ) ;
 float FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_2__) ;
 TYPE_2__ VAR_0 ;

bot_moveresult_t FUNC_5(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3, VAR_4;
 float VAR_5, VAR_6;
 FUNC_4( VAR_0 );


 if (!VAR_1->jumpreach) return VAR_0;

 VAR_3[0] = VAR_2->end[0] - VAR_1->origin[0];
 VAR_3[1] = VAR_2->end[1] - VAR_1->origin[1];
 VAR_3[2] = 0;
 VAR_6 = FUNC_3(VAR_3);

 VAR_4[0] = VAR_2->end[0] - VAR_2->start[0];
 VAR_4[1] = VAR_2->end[1] - VAR_2->start[1];
 VAR_4[2] = 0;
 FUNC_3(VAR_4);

 if (FUNC_0(VAR_3, VAR_4) < -0.5 && VAR_6 < 24) return VAR_0;

 VAR_5 = 800;

 FUNC_1(VAR_1->client, VAR_3, VAR_5);
 FUNC_2(VAR_3, VAR_0.movedir);

 return VAR_0;
}
