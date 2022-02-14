
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int client; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_9__ {int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;
struct TYPE_10__ {int maxclients; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

int FUNC_3(bot_state_t *VAR_1) {
 int VAR_2;
 aas_entityinfo_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0.maxclients; VAR_2++) {
  if (VAR_2 == VAR_1->client)
   continue;

  FUNC_0(VAR_2, &VAR_3);

  if (!VAR_3.valid)
   continue;

  if (!FUNC_2(&VAR_3))
   continue;

  if (!FUNC_1(VAR_1, VAR_2))
   continue;

  return VAR_2;
 }
 return -1;
}
