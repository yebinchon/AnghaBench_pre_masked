
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int client; scalar_t__* origin; int velocity; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__*,scalar_t__*,float*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_2__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_2, aas_reachability_t *VAR_3)
{
 float VAR_4;
 vec3_t VAR_5;
 FUNC_5( VAR_1 );

 if (!FUNC_0(VAR_2->origin, VAR_2->velocity, VAR_3->end, VAR_5, &VAR_4))
 {
  VAR_5[0] = VAR_3->end[0] - VAR_2->origin[0];
  VAR_5[1] = VAR_3->end[1] - VAR_2->origin[1];
  VAR_5[2] = 0;
  FUNC_4(VAR_5);
  VAR_4 = 400;
 }
 FUNC_1(VAR_2, VAR_5, VAR_0, &VAR_1);

 FUNC_2(VAR_2->client, VAR_5, VAR_4);
 FUNC_3(VAR_5, VAR_1.movedir);

 return VAR_1;
}
