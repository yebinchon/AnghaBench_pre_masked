
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {scalar_t__ weapon; } ;
struct TYPE_12__ {int enemy; int attackchase_time; int attackcrouch_time; int attackjump_time; float attackstrafe_time; int flags; int ms; scalar_t__ thinktime; TYPE_1__ cur_ps; int origin; int character; int lastenemyorigin; int lastenemyareanum; } ;
typedef TYPE_3__ bot_state_t ;
typedef int bot_moveresult_t ;
struct TYPE_13__ {int entitynum; int maxs; int mins; int origin; int areanum; } ;
typedef TYPE_4__ bot_goal_t ;
struct TYPE_14__ {int origin; } ;
typedef TYPE_5__ aas_entityinfo_t ;
struct TYPE_11__ {int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 () ;
 float VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 float FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_8 ;
 double FUNC_10 () ;
 int FUNC_11 (int *,int ,int) ;
 double FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,scalar_t__*,int,int) ;
 int FUNC_14 (int *,int ,TYPE_4__*,int) ;
 float FUNC_15 (int ,int ,int ,int) ;

bot_moveresult_t FUNC_16(bot_state_t *VAR_9, int VAR_10) {
 int VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20;
 vec3_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25 = {0, 0, 1};
 aas_entityinfo_t VAR_26;
 bot_moveresult_t VAR_27;
 bot_goal_t VAR_28;

 VAR_13 = VAR_9->enemy;

 if (VAR_9->attackchase_time > FUNC_3()) {

  VAR_28.entitynum = VAR_13;
  VAR_28.areanum = VAR_9->lastenemyareanum;
  FUNC_5(VAR_9->lastenemyorigin, VAR_28.origin);
  FUNC_8(VAR_28.mins, -8, -8, -8);
  FUNC_8(VAR_28.maxs, 8, 8, 8);

  FUNC_1(VAR_9);

  FUNC_14(&VAR_27, VAR_9->ms, &VAR_28, VAR_10);
  return VAR_27;
 }

 FUNC_11(&VAR_27, 0, sizeof(bot_moveresult_t));

 VAR_14 = FUNC_15(VAR_9->character, VAR_1, 0, 1);
 VAR_15 = FUNC_15(VAR_9->character, VAR_3, 0, 1);
 VAR_16 = FUNC_15(VAR_9->character, VAR_2, 0, 1);

 if (VAR_14 < 0.2) return VAR_27;

 FUNC_1(VAR_9);

 FUNC_0(VAR_13, &VAR_26);

 FUNC_9(VAR_26.origin, VAR_9->origin, VAR_21);

 VAR_17 = FUNC_7(VAR_21);
 FUNC_6(VAR_21, VAR_22);

 VAR_11 = VAR_7;

 if (VAR_9->attackcrouch_time < FUNC_3() - 1) {
  if (FUNC_12() < VAR_15) {
   VAR_11 = VAR_6;
  }

  else if (VAR_9->attackcrouch_time < FUNC_3() - 1 && FUNC_12() < VAR_16) {
   VAR_9->attackcrouch_time = FUNC_3() + VAR_16 * 5;
  }
 }
 if (VAR_9->attackcrouch_time > FUNC_3()) VAR_11 = VAR_5;

 if (VAR_11 == VAR_6) {

  if (VAR_9->attackjump_time > FUNC_3()) {
   VAR_11 = VAR_7;
  }
  else {
   VAR_9->attackjump_time = FUNC_3() + 1;
  }
 }
 if (VAR_9->cur_ps.weapon == VAR_8) {
  VAR_19 = 0;
  VAR_20 = 0;
 }
 else {
  VAR_19 = VAR_4;
  VAR_20 = 40;
 }

 if (VAR_14 <= 0.4) {

  if (VAR_17 > VAR_19 + VAR_20) {
   if (FUNC_13(VAR_9->ms, VAR_21, 400, VAR_11)) return VAR_27;
  }
  if (VAR_17 < VAR_19 - VAR_20) {
   if (FUNC_13(VAR_9->ms, VAR_22, 400, VAR_11)) return VAR_27;
  }
  return VAR_27;
 }

 VAR_9->attackstrafe_time += VAR_9->thinktime;

 VAR_18 = 0.4 + (1 - VAR_14) * 0.2;
 if (VAR_14 > 0.7) VAR_18 += FUNC_10() * 0.2;

 if (VAR_9->attackstrafe_time > VAR_18) {

  if (FUNC_12() > 0.935) {

   VAR_9->flags ^= VAR_0;
   VAR_9->attackstrafe_time = 0;
  }
 }

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_24[0] = VAR_21[0];
  VAR_24[1] = VAR_21[1];
  VAR_24[2] = 0;
  FUNC_7(VAR_24);

  FUNC_2(VAR_24, VAR_25, VAR_23);

  if (VAR_9->flags & VAR_0) FUNC_6(VAR_23, VAR_23);

  if (FUNC_12() > 0.9) {
   FUNC_4(VAR_23, VAR_22, VAR_23);
  }
  else {

   if (VAR_17 > VAR_19 + VAR_20) {
    FUNC_4(VAR_23, VAR_21, VAR_23);
   }
   else if (VAR_17 < VAR_19 - VAR_20) {
    FUNC_4(VAR_23, VAR_22, VAR_23);
   }
  }

  if (FUNC_13(VAR_9->ms, VAR_23, 400, VAR_11))
   return VAR_27;

  VAR_9->flags ^= VAR_0;
  VAR_9->attackstrafe_time = 0;
 }


 return VAR_27;
}
