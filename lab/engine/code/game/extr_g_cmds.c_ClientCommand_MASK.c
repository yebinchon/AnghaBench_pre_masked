
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_33__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
typedef int cmd ;
struct TYPE_34__ {scalar_t__ intermissiontime; } ;
struct TYPE_31__ {scalar_t__ connected; scalar_t__ localClient; } ;
struct TYPE_32__ {TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_26 (int ,char*,int) ;
 int FUNC_27 (int,int ) ;
 int FUNC_28 (char*,char*) ;

void FUNC_29( int VAR_8 ) {
 gentity_t *VAR_9;
 char VAR_10[VAR_1];

 VAR_9 = VAR_4 + VAR_8;
 if (!VAR_9->client || VAR_9->client->pers.connected != VAR_0) {
  if (VAR_9->client && VAR_9->client->pers.localClient) {


   FUNC_26( 0, VAR_10, sizeof( VAR_10 ) );
   if (FUNC_25 (VAR_10, "team") == 0) {
    FUNC_18 (VAR_9);
   }
  }
  return;
 }


 FUNC_26( 0, VAR_10, sizeof( VAR_10 ) );

 if (FUNC_25 (VAR_10, "say") == 0) {
  FUNC_12 (VAR_9, VAR_2, VAR_6);
  return;
 }
 if (FUNC_25 (VAR_10, "say_team") == 0) {
  FUNC_12 (VAR_9, VAR_3, VAR_6);
  return;
 }
 if (FUNC_25 (VAR_10, "tell") == 0) {
  FUNC_19 ( VAR_9 );
  return;
 }
 if (FUNC_25 (VAR_10, "score") == 0) {
  FUNC_13 (VAR_9);
  return;
 }


 if (VAR_5.intermissiontime) {
  FUNC_12 (VAR_9, VAR_6, VAR_7);
  return;
 }

 if (FUNC_25 (VAR_10, "give") == 0)
  FUNC_5 (VAR_9);
 else if (FUNC_25 (VAR_10, "god") == 0)
  FUNC_6 (VAR_9);
 else if (FUNC_25 (VAR_10, "notarget") == 0)
  FUNC_10 (VAR_9);
 else if (FUNC_25 (VAR_10, "noclip") == 0)
  FUNC_9 (VAR_9);
 else if (FUNC_25 (VAR_10, "kill") == 0)
  FUNC_7 (VAR_9);
 else if (FUNC_25 (VAR_10, "teamtask") == 0)
  FUNC_16 (VAR_9);
 else if (FUNC_25 (VAR_10, "levelshot") == 0)
  FUNC_8 (VAR_9);
 else if (FUNC_25 (VAR_10, "follow") == 0)
  FUNC_3 (VAR_9);
 else if (FUNC_25 (VAR_10, "follownext") == 0)
  FUNC_2 (VAR_9, 1);
 else if (FUNC_25 (VAR_10, "followprev") == 0)
  FUNC_2 (VAR_9, -1);
 else if (FUNC_25 (VAR_10, "team") == 0)
  FUNC_18 (VAR_9);
 else if (FUNC_25 (VAR_10, "where") == 0)
  FUNC_24 (VAR_9);
 else if (FUNC_25 (VAR_10, "callvote") == 0)
  FUNC_1 (VAR_9);
 else if (FUNC_25 (VAR_10, "vote") == 0)
  FUNC_23 (VAR_9);
 else if (FUNC_25 (VAR_10, "callteamvote") == 0)
  FUNC_0 (VAR_9);
 else if (FUNC_25 (VAR_10, "teamvote") == 0)
  FUNC_17 (VAR_9);
 else if (FUNC_25 (VAR_10, "gc") == 0)
  FUNC_4( VAR_9 );
 else if (FUNC_25 (VAR_10, "setviewpos") == 0)
  FUNC_14( VAR_9 );
 else if (FUNC_25 (VAR_10, "stats") == 0)
  FUNC_15( VAR_9 );
 else if (FUNC_25 (VAR_10, "dm_pickup") == 0)
  FUNC_11( VAR_9 );
 else
  FUNC_27( VAR_8, FUNC_28("print \"unknown cmd %s\n\"", VAR_10 ) );
}
