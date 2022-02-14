
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,scalar_t__*,float) ;
 int FUNC_1 (scalar_t__*,int ) ;
 float FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__ VAR_0 ;

bot_moveresult_t FUNC_4(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3;
 float VAR_4, VAR_5;
 FUNC_3( VAR_0 );
 VAR_3[0] = VAR_2->end[0] - VAR_1->origin[0];
 VAR_3[1] = VAR_2->end[1] - VAR_1->origin[1];
 VAR_3[2] = 0;
 VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 > 100) VAR_4 = 100;
 VAR_5 = 400 - (400 - 3 * VAR_4);

 FUNC_0(VAR_1->client, VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_0.movedir);

 return VAR_0;
}
