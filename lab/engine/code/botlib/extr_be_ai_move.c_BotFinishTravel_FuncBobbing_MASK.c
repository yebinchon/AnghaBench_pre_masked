
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {int moveflags; int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_12__ {int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_13__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ) ;
 float FUNC_4 (scalar_t__*) ;
 float FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (TYPE_2__) ;
 TYPE_2__ VAR_2 ;

bot_moveresult_t FUNC_8(bot_movestate_t *VAR_3, aas_reachability_t *VAR_4)
{
 vec3_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 FUNC_7( VAR_2 );
 float VAR_11, VAR_12;


 FUNC_0(VAR_4, VAR_6, VAR_7, VAR_5);

 FUNC_6(VAR_5, VAR_7, VAR_8);
 VAR_11 = FUNC_4(VAR_8);

 if (VAR_11 < 16)
 {
  FUNC_6(VAR_4->end, VAR_3->origin, VAR_9);
  if (!(VAR_3->moveflags & VAR_0)) VAR_9[2] = 0;
  VAR_11 = FUNC_5(VAR_9);

  if (VAR_11 > 60) VAR_11 = 60;
  VAR_12 = 360 - (360 - 6 * VAR_11);

  if (VAR_12 > 5) FUNC_1(VAR_3->client, VAR_8, VAR_12);
  FUNC_3(VAR_8, VAR_2.movedir);

  if (VAR_3->moveflags & VAR_0) VAR_2.flags |= VAR_1;
 }
 else
 {
  FUNC_2(VAR_4, VAR_10);
  FUNC_6(VAR_10, VAR_3->origin, VAR_9);
  if (!(VAR_3->moveflags & VAR_0)) VAR_9[2] = 0;
  VAR_11 = FUNC_5(VAR_9);

  if (VAR_11 > 5)
  {

   if (VAR_11 > 100) VAR_11 = 100;
   VAR_12 = 400 - (400 - 4 * VAR_11);

   FUNC_1(VAR_3->client, VAR_9, VAR_12);
   FUNC_3(VAR_9, VAR_2.movedir);
  }
 }
 return VAR_2;
}
