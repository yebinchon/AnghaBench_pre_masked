
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int movedir; int flags; int ideal_viewangles; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (TYPE_2__) ;
 TYPE_2__ VAR_1 ;

bot_moveresult_t FUNC_7(bot_movestate_t *VAR_2, aas_reachability_t *VAR_3)
{

 vec3_t VAR_4, VAR_5;
 vec3_t VAR_6 = {0, 0, 0};

 FUNC_6( VAR_1 );





 {

  FUNC_5(VAR_3->end, VAR_2->origin, VAR_4);
  FUNC_4(VAR_4);

  VAR_5[0] = VAR_4[0];
  VAR_5[1] = VAR_4[1];
  VAR_5[2] = 3 * VAR_4[2];
  FUNC_2(VAR_5, VAR_1.ideal_viewangles);

  FUNC_0(VAR_2->client, VAR_6, 0);
  FUNC_1(VAR_2->client);

  VAR_1.flags |= VAR_0;
 }
 FUNC_3(VAR_4, VAR_1.movedir);

 return VAR_1;
}
