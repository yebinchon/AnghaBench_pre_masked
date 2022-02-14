
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_21__ {int fraction; scalar_t__ ent; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_22__ {scalar_t__ lasthealth; scalar_t__* inventory; int client; scalar_t__ enemy; int enemysight_time; int enemysuicide; int enemyvisible_time; scalar_t__ entitynum; scalar_t__ enemydeath_time; int origin; int viewangles; int eye; int character; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_23__ {scalar_t__ entitynum; int origin; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_24__ {scalar_t__ number; int angles; int origin; int valid; } ;
typedef TYPE_4__ aas_entityinfo_t ;
struct TYPE_26__ {int flags; } ;
struct TYPE_25__ {int maxclients; } ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *,int*,int,int ) ;
 int FUNC_1 (int,TYPE_4__*) ;
 float FUNC_2 (scalar_t__,int ,int ,float,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_12 () ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_13 (int ,int,int*) ;
 float FUNC_14 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int ,int*) ;
 float FUNC_16 (int*) ;
 int FUNC_17 (int ,int ,int*) ;
 TYPE_3__ VAR_7 ;
 TYPE_7__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 float FUNC_18 (int ,int ,int ,int) ;
 int FUNC_19 (int*,int*) ;

int FUNC_20(bot_state_t *VAR_16, int VAR_17) {
 int VAR_18, VAR_19;
 float VAR_20, VAR_21, VAR_22, VAR_23;
 float VAR_24, VAR_25;
 aas_entityinfo_t VAR_26, VAR_27;
 vec3_t VAR_28, VAR_29;

 VAR_21 = FUNC_18(VAR_16->character, VAR_0, 0, 1);
 VAR_22 = FUNC_18(VAR_16->character, VAR_1, 0, 1);

 VAR_19 = VAR_16->lasthealth > VAR_16->inventory[VAR_5];

 VAR_16->lasthealth = VAR_16->inventory[VAR_5];

 if (VAR_17 >= 0) {
  FUNC_1(VAR_17, &VAR_27);
  if (FUNC_7(&VAR_27)) return VAR_13;
  FUNC_17(VAR_27.origin, VAR_16->origin, VAR_28);
  VAR_25 = FUNC_16(VAR_28);
 }
 else {
  VAR_25 = 0;
 }
 for (VAR_18 = 0; VAR_18 < VAR_12.maxclients; VAR_18++) {

  if (VAR_18 == VAR_16->client) continue;

  if (VAR_18 == VAR_17) continue;

  if (VAR_8[VAR_18].flags & VAR_3) {
   continue;
  }

  FUNC_1(VAR_18, &VAR_26);

  if (!VAR_26.valid) continue;

  if (FUNC_9(&VAR_26) || VAR_26.number == VAR_16->entitynum) continue;

  if (FUNC_10(&VAR_26) && !FUNC_11(&VAR_26)) {
   continue;
  }

  if (VAR_22 < 0.5 && FUNC_8(&VAR_26)) continue;

  if (VAR_11 > FUNC_12() - 3) {
   FUNC_17(VAR_26.origin, VAR_10, VAR_28);
   if (FUNC_16(VAR_28) < FUNC_14(70)) continue;
  }

  FUNC_17(VAR_26.origin, VAR_16->origin, VAR_28);
  VAR_24 = FUNC_16(VAR_28);

  if (!FUNC_7(&VAR_26))
  {

   if (VAR_17 >= 0 && VAR_24 > VAR_25) continue;
  }

  if (VAR_24 > FUNC_14(900.0 + VAR_21 * 4000.0)) continue;

  if (FUNC_3(VAR_16, VAR_18)) continue;

  if (VAR_17 < 0 && (VAR_19 || FUNC_11(&VAR_26)))
   VAR_20 = 360;
  else
   VAR_20 = 90 + 90 - (90 - (VAR_24 > FUNC_14(810) ? FUNC_14(810) : VAR_24) / (810 * 9));

  VAR_23 = FUNC_2(VAR_16->entitynum, VAR_16->eye, VAR_16->viewangles, VAR_20, VAR_18);
  if (VAR_23 <= 0) continue;

  if (VAR_17 < 0 && VAR_24 > FUNC_14(100) && !VAR_19 && !FUNC_11(&VAR_26))
  {

   FUNC_17(VAR_16->origin, VAR_26.origin, VAR_28);
   FUNC_19(VAR_28, VAR_29);

   if (!FUNC_13(VAR_26.angles, 90, VAR_29)) {

    FUNC_5(VAR_16, VAR_18);

    if (FUNC_6(VAR_16)) continue;
   }
  }

  VAR_16->enemy = VAR_26.number;
  if (VAR_17 >= 0) VAR_16->enemysight_time = FUNC_12() - 2;
  else VAR_16->enemysight_time = FUNC_12();
  VAR_16->enemysuicide = VAR_13;
  VAR_16->enemydeath_time = 0;
  VAR_16->enemyvisible_time = FUNC_12();
  return VAR_14;
 }
 return VAR_13;
}
