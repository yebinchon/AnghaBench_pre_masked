
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int client; int viewangles; int eye; int entitynum; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_9__ {int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;
struct TYPE_10__ {int maxclients; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 float FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

int FUNC_4(bot_state_t *VAR_1) {
 int VAR_2;
 float VAR_3;
 aas_entityinfo_t VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0.maxclients; VAR_2++) {
  if (VAR_2 == VAR_1->client)
   continue;

  FUNC_0(VAR_2, &VAR_4);

  if (!VAR_4.valid)
   continue;

  if (!FUNC_3(&VAR_4))
   continue;

  if (!FUNC_2(VAR_1, VAR_2))
   continue;

  VAR_3 = FUNC_1(VAR_1->entitynum, VAR_1->eye, VAR_1->viewangles, 360, VAR_2);
  if (VAR_3 <= 0)
   continue;

  return VAR_2;
 }
 return -1;
}
