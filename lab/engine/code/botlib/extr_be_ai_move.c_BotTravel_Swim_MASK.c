
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int flags; int ideal_viewangles; int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {int start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

bot_moveresult_t FUNC_7(bot_movestate_t *VAR_3, aas_reachability_t *VAR_4)
{
 vec3_t VAR_5;
 FUNC_6( VAR_2 );


 FUNC_5(VAR_4->start, VAR_3->origin, VAR_5);
 FUNC_4(VAR_5);

 FUNC_0(VAR_3, VAR_5, VAR_1, &VAR_2);

 FUNC_1(VAR_3->client, VAR_5, 400);

 FUNC_3(VAR_5, VAR_2.movedir);
 FUNC_2(VAR_5, VAR_2.ideal_viewangles);
 VAR_2.flags |= VAR_0;

 return VAR_2;
}
