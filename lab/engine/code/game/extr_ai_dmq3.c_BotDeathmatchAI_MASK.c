
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int userinfo ;
typedef int name ;
typedef int gender ;
struct TYPE_18__ {int * persistant; } ;
struct TYPE_19__ {scalar_t__ setupcount; int entergame_time; TYPE_1__ cur_ps; int lasthitcount; int * inventory; int lastframe_health; int client; int gs; int inuse; scalar_t__ (* ainode ) (TYPE_2__*) ;scalar_t__ entergamechat; scalar_t__ stand_time; int flags; int cs; int character; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 () ;
 size_t VAR_5 ;
 int FUNC_18 (char*,char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,char*,int ) ;
 int FUNC_24 (int ,int ,char*,int) ;
 int FUNC_25 (int ,char*,int) ;
 int FUNC_26 (int ,char*) ;

void FUNC_27(bot_state_t *VAR_11, float VAR_12) {
 char VAR_13[144], VAR_14[144];
 char VAR_15[VAR_6];
 int VAR_16;


 if (VAR_11->setupcount > 0) {
  VAR_11->setupcount--;
  if (VAR_11->setupcount > 0) return;

  FUNC_24(VAR_11->character, VAR_1, VAR_13, sizeof(VAR_13));

  FUNC_25(VAR_11->client, VAR_15, sizeof(VAR_15));
  FUNC_18(VAR_15, "sex", VAR_13);
  FUNC_26(VAR_11->client, VAR_15);

  if (VAR_13[0] == 'm') FUNC_22(VAR_11->cs, VAR_4);
  else if (VAR_13[0] == 'f') FUNC_22(VAR_11->cs, VAR_2);
  else FUNC_22(VAR_11->cs, VAR_3);

  FUNC_16(VAR_11->client, VAR_14, sizeof(VAR_14));
  FUNC_23(VAR_11->cs, VAR_14, VAR_11->client);

  VAR_11->lastframe_health = VAR_11->inventory[VAR_5];
  VAR_11->lasthitcount = VAR_11->cur_ps.persistant[VAR_8];

  VAR_11->setupcount = 0;

  FUNC_13();
 }

 VAR_11->flags &= ~VAR_0;

 if (!FUNC_9(VAR_11)) {

  FUNC_12(VAR_11);

  FUNC_15(VAR_11);

  FUNC_7(VAR_11);

  FUNC_5(VAR_11);
 }

 FUNC_6(VAR_11);

 if (!FUNC_9(VAR_11) && !FUNC_10(VAR_11)) {

  FUNC_14(VAR_11);
 }

 if (!VAR_11->ainode) {
  FUNC_0(VAR_11, "BotDeathmatchAI: no ai node");
 }

 if (!VAR_11->entergamechat && VAR_11->entergame_time > FUNC_17() - 8) {
  if (FUNC_4(VAR_11)) {
   VAR_11->stand_time = FUNC_17() + FUNC_3(VAR_11);
   FUNC_1(VAR_11, "BotDeathmatchAI: chat enter game");
  }
  VAR_11->entergamechat = VAR_10;
 }

 FUNC_11();

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  if (VAR_11->ainode(VAR_11)) break;
 }

 if (!VAR_11->inuse) return;

 if (VAR_16 >= VAR_7) {
  FUNC_21(VAR_11->gs);
  FUNC_20(VAR_11->gs);
  FUNC_8(VAR_11);
  FUNC_16(VAR_11->client, VAR_14, sizeof(VAR_14));
  FUNC_2(VAR_9, "%s at %1.1f switched more than %d AI nodes\n", VAR_14, FUNC_17(), VAR_7);
 }

 VAR_11->lastframe_health = VAR_11->inventory[VAR_5];
 VAR_11->lasthitcount = VAR_11->cur_ps.persistant[VAR_8];
}
