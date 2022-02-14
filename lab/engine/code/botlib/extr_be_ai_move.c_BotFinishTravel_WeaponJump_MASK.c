
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int client; int origin; int velocity; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,int ,int ,scalar_t__*,float*) ;
 int FUNC_1 (int ,scalar_t__*,float) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_2__) ;
 TYPE_2__ VAR_0 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3;
 float VAR_4;
 FUNC_5( VAR_0 );


 if (!VAR_1->jumpreach) return VAR_0;
 if (!FUNC_0(VAR_1->origin, VAR_1->velocity, VAR_2->end, VAR_3, &VAR_4))
 {

  FUNC_4(VAR_2->end, VAR_1->origin, VAR_3);
  VAR_3[2] = 0;
  FUNC_3(VAR_3);
  VAR_4 = 400;
 }

 FUNC_1(VAR_1->client, VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_0.movedir);

 return VAR_0;
}
