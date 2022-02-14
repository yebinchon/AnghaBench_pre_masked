
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (TYPE_2__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

bot_moveresult_t FUNC_4(bot_movestate_t *VAR_2, aas_reachability_t *VAR_3)
{
 vec3_t VAR_4;
 FUNC_3( VAR_1 );


 VAR_4[0] = VAR_3->start[0] - VAR_2->origin[0];
 VAR_4[1] = VAR_3->start[1] - VAR_2->origin[1];
 VAR_4[2] = 0;

 FUNC_0(VAR_2, VAR_4, VAR_0, &VAR_1);

 FUNC_1(VAR_2->client, VAR_4, 400);
 FUNC_2(VAR_4, VAR_1.movedir);

 return VAR_1;
}
