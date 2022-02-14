
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int client; scalar_t__ entitynum; int viewangles; int eye; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_10__ {scalar_t__ number; int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 float FUNC_1 (scalar_t__,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_6(bot_state_t *VAR_3) {
 float VAR_4;
 int VAR_5;
 aas_entityinfo_t VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

  if (VAR_5 == VAR_3->client) continue;

  FUNC_0(VAR_5, &VAR_6);

  if (!VAR_6.valid) continue;

  if (FUNC_3(&VAR_6) || VAR_6.number == VAR_3->entitynum) continue;

  if (FUNC_4(&VAR_6) && !FUNC_5(&VAR_6)) {
   continue;
  }

  if (FUNC_2(VAR_3, VAR_5)) continue;

  VAR_4 = FUNC_1(VAR_3->entitynum, VAR_3->eye, VAR_3->viewangles, 360, VAR_5);
  if (VAR_4 > 0) return VAR_2;
 }
 return VAR_1;
}
