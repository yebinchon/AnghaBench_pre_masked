
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int client; int viewangles; int eye; int entitynum; int origin; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_9__ {int origin; int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;
struct TYPE_10__ {int maxclients; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 float FUNC_1 (int ,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (float) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_7(bot_state_t *VAR_1, int *VAR_2, int *VAR_3, float VAR_4) {
 int VAR_5;
 float VAR_6;
 aas_entityinfo_t VAR_7;
 vec3_t VAR_8;

 if (VAR_2)
  *VAR_2 = 0;
 if (VAR_3)
  *VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0.maxclients; VAR_5++) {
  if (VAR_5 == VAR_1->client)
   continue;

  FUNC_0(VAR_5, &VAR_7);

  if (!VAR_7.valid)
   continue;

  if (!FUNC_3(&VAR_7))
   continue;

  FUNC_6(VAR_7.origin, VAR_1->origin, VAR_8);
  if (FUNC_5(VAR_8) > FUNC_4(VAR_4))
   continue;

  VAR_6 = FUNC_1(VAR_1->entitynum, VAR_1->eye, VAR_1->viewangles, 360, VAR_5);
  if (VAR_6 <= 0)
   continue;

  if (FUNC_2(VAR_1, VAR_5)) {
   if (VAR_2)
    (*VAR_2)++;
  }
  else {
   if (VAR_3)
    (*VAR_3)++;
  }
 }
}
