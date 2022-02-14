
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int moveflags; int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {int start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,int ) ;
 float FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_2__) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_5, aas_reachability_t *VAR_6)
{
 vec3_t VAR_7;
 float VAR_8;
 FUNC_5( VAR_4 );


 if (VAR_5->moveflags & VAR_1) return VAR_4;


 FUNC_4(VAR_6->start, VAR_5->origin, VAR_7);
 if (!(VAR_5->moveflags & VAR_0)) VAR_7[2] = 0;
 VAR_8 = FUNC_3(VAR_7);

 FUNC_0(VAR_5, VAR_7, VAR_3, &VAR_4);

 if (VAR_8 < 30) FUNC_1(VAR_5->client, VAR_7, 200);
 else FUNC_1(VAR_5->client, VAR_7, 400);

 if (VAR_5->moveflags & VAR_0) VAR_4.flags |= VAR_2;

 FUNC_2(VAR_7, VAR_4.movedir);
 return VAR_4;
}
