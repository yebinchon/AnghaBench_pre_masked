
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_23__ {int damagetype; int radius; double damage; } ;
struct TYPE_24__ {int* offset; int flags; TYPE_4__ proj; } ;
typedef TYPE_5__ weaponinfo_t ;
typedef int* vec3_t ;
struct TYPE_25__ {int fraction; int ent; } ;
typedef TYPE_6__ bsp_trace_t ;
struct TYPE_22__ {scalar_t__ viewheight; } ;
struct TYPE_26__ {int enemy; float enemysight_time; float teleport_time; double weaponchange_time; int firethrottlewait_time; int firethrottleshoot_time; int* aimtarget; int* eye; scalar_t__ weaponnum; int flags; int client; int entitynum; int viewangles; TYPE_3__ cur_ps; int origin; int ws; int character; } ;
typedef TYPE_7__ bot_state_t ;
struct TYPE_27__ {size_t number; } ;
typedef TYPE_8__ aas_entityinfo_t ;
struct TYPE_20__ {int frame; } ;
struct TYPE_21__ {TYPE_1__ s; } ;
struct TYPE_19__ {size_t entitynum; } ;
struct TYPE_18__ {TYPE_2__* activator; } ;
struct TYPE_17__ {size_t entitynum; } ;


 int FUNC_0 (int ,int*,int*,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*,int*,int*,int*,int*,int ,int) ;
 int FUNC_2 (int,TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,float,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int*) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int*,int,int*,int*) ;
 int FUNC_10 (int*,int*,int*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_12__ VAR_10 ;
 TYPE_11__* VAR_11 ;
 float FUNC_11 () ;
 TYPE_10__ VAR_12 ;
 int FUNC_12 (int ,scalar_t__,TYPE_5__*) ;
 float FUNC_13 (int ,int ,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int*,int*) ;

void FUNC_16(bot_state_t *VAR_13) {
 float VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 bsp_trace_t VAR_19;

 vec3_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 weaponinfo_t VAR_26;
 bsp_trace_t VAR_27;
 aas_entityinfo_t VAR_28;
 vec3_t VAR_29 = {-8, -8, -8}, VAR_30 = {8, 8, 8};

 VAR_18 = VAR_13->enemy;

 FUNC_2(VAR_18, &VAR_28);

 if (VAR_18 >= VAR_7) {
 }

 VAR_15 = FUNC_13(VAR_13->character, VAR_2, 0, 1);
 if (VAR_13->enemysight_time > FUNC_4() - VAR_15) return;
 if (VAR_13->teleport_time > FUNC_4() - VAR_15) return;

 if (VAR_13->weaponchange_time > FUNC_4() - 0.1) return;

 if (VAR_13->firethrottlewait_time > FUNC_4()) return;
 VAR_17 = FUNC_13(VAR_13->character, VAR_1, 0, 1);
 if (VAR_13->firethrottleshoot_time < FUNC_4()) {
  if (FUNC_11() > VAR_17) {
   VAR_13->firethrottlewait_time = FUNC_4() + VAR_17;
   VAR_13->firethrottleshoot_time = 0;
  }
  else {
   VAR_13->firethrottleshoot_time = FUNC_4() + 1 - VAR_17;
   VAR_13->firethrottlewait_time = 0;
  }
 }


 FUNC_10(VAR_13->aimtarget, VAR_13->eye, VAR_24);

 if (VAR_13->weaponnum == VAR_9) {
  if (FUNC_8(VAR_24) > FUNC_6(60)) {
   return;
  }
 }
 if (FUNC_8(VAR_24) < FUNC_6(100))
  VAR_16 = 120;
 else
  VAR_16 = 50;

 FUNC_15(VAR_24, VAR_25);
 if (!FUNC_5(VAR_13->viewangles, VAR_16, VAR_25))
  return;
 FUNC_1(&VAR_19, VAR_13->eye, ((void*)0), ((void*)0), VAR_13->aimtarget, VAR_13->client, VAR_4|VAR_3);
 if (VAR_19.fraction < 1 && VAR_19.ent != VAR_18)
  return;


 FUNC_12(VAR_13->ws, VAR_13->weaponnum, &VAR_26);

 FUNC_7(VAR_13->origin, VAR_22);
 VAR_22[2] += VAR_13->cur_ps.viewheight;
 FUNC_0(VAR_13->viewangles, VAR_20, VAR_21, ((void*)0));
 VAR_22[0] += VAR_20[0] * VAR_26.offset[0] + VAR_21[0] * VAR_26.offset[1];
 VAR_22[1] += VAR_20[1] * VAR_26.offset[0] + VAR_21[1] * VAR_26.offset[1];
 VAR_22[2] += VAR_20[2] * VAR_26.offset[0] + VAR_21[2] * VAR_26.offset[1] + VAR_26.offset[2];

 FUNC_9(VAR_22, 1000, VAR_20, VAR_23);

 FUNC_9(VAR_22, -12, VAR_20, VAR_22);
 FUNC_1(&VAR_27, VAR_22, VAR_29, VAR_30, VAR_23, VAR_13->entitynum, VAR_6);

 if (VAR_27.ent >= 0 && VAR_27.ent < VAR_7) {
  if (VAR_27.ent != VAR_18) {

   if (FUNC_3(VAR_13, VAR_27.ent))
    return;
  }
 }

 if (VAR_27.ent != VAR_18 || VAR_18 >= VAR_7) {

  if (VAR_26.proj.damagetype & VAR_5) {
   if (VAR_27.fraction * 1000 < VAR_26.proj.radius) {
    VAR_14 = (VAR_26.proj.damage - 0.5 * VAR_27.fraction * 1000) * 0.5;
    if (VAR_14 > 0) {
     return;
    }
   }

  }
 }

 if (VAR_26.flags & VAR_8) {
  if (VAR_13->flags & VAR_0) {
   FUNC_14(VAR_13->client);
  }
 }
 else {
  FUNC_14(VAR_13->client);
 }
 VAR_13->flags ^= VAR_0;
}
