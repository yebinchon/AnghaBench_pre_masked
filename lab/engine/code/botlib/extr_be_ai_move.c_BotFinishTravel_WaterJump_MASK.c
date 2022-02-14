
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {int moveflags; int* origin; int client; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int* movedir; int flags; int ideal_viewangles; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (TYPE_2__) ;
 int FUNC_6 () ;
 TYPE_2__ VAR_5 ;

bot_moveresult_t FUNC_7(bot_movestate_t *VAR_6, aas_reachability_t *VAR_7)
{
 vec3_t VAR_8, VAR_9;
 FUNC_5( VAR_5 );



 if (VAR_6->moveflags & VAR_3) return VAR_5;


 FUNC_3(VAR_6->origin, VAR_9);
 VAR_9[2] -= 32;
 if (!(FUNC_0(VAR_9) & (VAR_0|VAR_1|VAR_2))) return VAR_5;

 FUNC_4(VAR_7->end, VAR_6->origin, VAR_8);
 VAR_8[0] += FUNC_6() * 10;
 VAR_8[1] += FUNC_6() * 10;
 VAR_8[2] += 70 + FUNC_6() * 10;

 FUNC_1(VAR_6->client, VAR_8, 400);

 FUNC_2(VAR_8, VAR_5.ideal_viewangles);
 VAR_5.flags |= VAR_4;

 FUNC_3(VAR_8, VAR_5.movedir);

 return VAR_5;
}
