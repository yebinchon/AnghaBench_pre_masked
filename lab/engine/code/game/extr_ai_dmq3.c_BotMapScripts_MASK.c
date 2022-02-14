
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int mapname ;
typedef int info ;
struct TYPE_8__ {scalar_t__* origin; int client; scalar_t__ entitynum; int enemy; int* ideal_viewangles; int viewangles; int character; int eye; int flags; int tfl; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_9__ {scalar_t__ number; scalar_t__* origin; int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;
struct TYPE_10__ {int maxclients; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int,int*) ;
 int FUNC_5 (char*,char*) ;
 size_t VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__*,int ,scalar_t__*) ;
 size_t VAR_4 ;
 int FUNC_8 () ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,int ,int) ;
 float FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (scalar_t__*,int*) ;

void FUNC_14(bot_state_t *VAR_8) {
 char VAR_9[1024];
 char VAR_10[128];
 int VAR_11, VAR_12;
 float VAR_13;
 aas_entityinfo_t VAR_14;
 vec3_t VAR_15;

 FUNC_12(VAR_9, sizeof(VAR_9));

 FUNC_9(VAR_10, FUNC_5( VAR_9, "mapname" ), sizeof(VAR_10)-1);
 VAR_10[sizeof(VAR_10)-1] = '\0';

 if (!FUNC_6(VAR_10, "q3tourney6") || !FUNC_6(VAR_10, "q3tourney6_ctf") || !FUNC_6(VAR_10, "mpq3tourney6")) {
  vec3_t VAR_16 = {694, 200, 480}, VAR_17 = {968, 472, 680};
  vec3_t VAR_18 = {304, 352, 920};

  VAR_8->tfl &= ~VAR_3;

  if (!FUNC_6(VAR_10, "mpq3tourney6")) {
   VAR_16[2] += 64;
   VAR_17[2] += 64;
  }

  if (VAR_8->origin[0] > VAR_16[0] && VAR_8->origin[0] < VAR_17[0]) {
   if (VAR_8->origin[1] > VAR_16[1] && VAR_8->origin[1] < VAR_17[1]) {
    if (VAR_8->origin[2] > VAR_16[2] && VAR_8->origin[2] < VAR_17[2]) {
     return;
    }
   }
  }
  VAR_12 = VAR_6;

  for (VAR_11 = 0; VAR_11 < VAR_5.maxclients; VAR_11++) {

   if (VAR_11 == VAR_8->client) continue;

   FUNC_1(VAR_11, &VAR_14);

   if (!VAR_14.valid) continue;

   if (FUNC_3(&VAR_14) || VAR_14.number == VAR_8->entitynum) continue;

   if (VAR_14.origin[0] > VAR_16[0] && VAR_14.origin[0] < VAR_17[0]) {
    if (VAR_14.origin[1] > VAR_16[1] && VAR_14.origin[1] < VAR_17[1]) {
     if (VAR_14.origin[2] > VAR_16[2] && VAR_14.origin[2] < VAR_17[2]) {

      if (FUNC_2(VAR_8, VAR_11)) {
       VAR_12 = VAR_6;
       break;
      }
      else if (VAR_8->enemy == VAR_11) {
       VAR_12 = VAR_7;
      }
     }
    }
   }
  }
  if (VAR_12) {
   VAR_8->flags |= VAR_0;
   FUNC_7(VAR_18, VAR_8->eye, VAR_15);
   FUNC_13(VAR_15, VAR_8->ideal_viewangles);
   VAR_13 = FUNC_10(VAR_8->character, VAR_1, 0, 1);
   VAR_8->ideal_viewangles[VAR_2] += 8 * FUNC_8() * (1 - VAR_13);
   VAR_8->ideal_viewangles[VAR_2] = FUNC_0(VAR_8->ideal_viewangles[VAR_2]);
   VAR_8->ideal_viewangles[VAR_4] += 8 * FUNC_8() * (1 - VAR_13);
   VAR_8->ideal_viewangles[VAR_4] = FUNC_0(VAR_8->ideal_viewangles[VAR_4]);

   if (FUNC_4(VAR_8->viewangles, 20, VAR_8->ideal_viewangles)) {
    FUNC_11(VAR_8->client);
   }
  }
 }
}
