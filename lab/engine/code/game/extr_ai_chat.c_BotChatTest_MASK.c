
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int name ;
struct TYPE_8__ {size_t client; size_t lastkilledby; size_t lastkilledplayer; int cs; int botdeathtype; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_9__ {TYPE_1__* client; } ;
struct TYPE_7__ {int lasthurt_client; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (size_t,char*,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char*) ;

void FUNC_12(bot_state_t *VAR_2) {

 char VAR_3[32];
 char *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_11(VAR_2->cs, "game_enter");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "game_enter",
     FUNC_8(VAR_2->client, VAR_3, 32),
     FUNC_4(VAR_2),
     "[invalid var]",
     "[invalid var]",
     FUNC_3(),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "game_exit");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "game_exit",
     FUNC_8(VAR_2->client, VAR_3, 32),
     FUNC_4(VAR_2),
     "[invalid var]",
     "[invalid var]",
     FUNC_3(),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "level_start");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "level_start",
     FUNC_8(VAR_2->client, VAR_3, 32),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "level_end_victory");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "level_end_victory",
    FUNC_8(VAR_2->client, VAR_3, 32),
    FUNC_4(VAR_2),
    FUNC_1(),
    FUNC_2(),
    FUNC_3(),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "level_end_lose");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "level_end_lose",
    FUNC_8(VAR_2->client, VAR_3, 32),
    FUNC_4(VAR_2),
    FUNC_1(),
    FUNC_2(),
    FUNC_3(),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "level_end");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "level_end",
    FUNC_8(VAR_2->client, VAR_3, 32),
    FUNC_4(VAR_2),
    FUNC_1(),
    FUNC_2(),
    FUNC_3(),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 FUNC_8(VAR_2->lastkilledby, VAR_3, sizeof(VAR_3));
 VAR_5 = FUNC_11(VAR_2->cs, "death_drown");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {

  FUNC_0(VAR_2, "death_drown", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_slime");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_slime", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_lava");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_lava", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_cratered");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_cratered", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_suicide");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_suicide", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_telefrag");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_telefrag", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_gauntlet");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_gauntlet",
    VAR_3,
    FUNC_6(VAR_2->botdeathtype),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_rail");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_rail",
    VAR_3,
    FUNC_6(VAR_2->botdeathtype),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_bfg");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_bfg",
    VAR_3,
    FUNC_6(VAR_2->botdeathtype),
    ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_insult");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_insult",
     VAR_3,
     FUNC_6(VAR_2->botdeathtype),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "death_praise");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "death_praise",
     VAR_3,
     FUNC_6(VAR_2->botdeathtype),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }

 FUNC_8(VAR_2->lastkilledplayer, VAR_3, 32);

 VAR_5 = FUNC_11(VAR_2->cs, "kill_gauntlet");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {

  FUNC_0(VAR_2, "kill_gauntlet", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "kill_rail");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "kill_rail", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "kill_telefrag");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "kill_telefrag", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "kill_insult");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "kill_insult", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "kill_praise");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "kill_praise", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "enemy_suicide");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "enemy_suicide", VAR_3, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 FUNC_7(VAR_1[VAR_2->client].client->lasthurt_client, VAR_3, sizeof(VAR_3));
 VAR_4 = FUNC_6(VAR_1[VAR_2->client].client->lasthurt_client);
 VAR_5 = FUNC_11(VAR_2->cs, "hit_talking");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "hit_talking", VAR_3, VAR_4, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "hit_nodeath");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "hit_nodeath", VAR_3, VAR_4, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "hit_nokill");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "hit_nokill", VAR_3, VAR_4, ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }

 if (VAR_2->lastkilledplayer == VAR_2->client) {
  FUNC_9(VAR_3, FUNC_4(VAR_2));
 }
 else {
  FUNC_8(VAR_2->lastkilledplayer, VAR_3, sizeof(VAR_3));
 }

 VAR_5 = FUNC_11(VAR_2->cs, "random_misc");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {

  FUNC_0(VAR_2, "random_misc",
     FUNC_4(VAR_2),
     VAR_3,
     "[invalid var]",
     "[invalid var]",
     FUNC_3(),
     FUNC_5(),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
 VAR_5 = FUNC_11(VAR_2->cs, "random_insult");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_0(VAR_2, "random_insult",
     FUNC_4(VAR_2),
     VAR_3,
     "[invalid var]",
     "[invalid var]",
     FUNC_3(),
     FUNC_5(),
     ((void*)0));
  FUNC_10(VAR_2->cs, 0, VAR_0);
 }
}
