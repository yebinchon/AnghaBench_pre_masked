
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int respawn_wait; double respawn_time; double respawnchat_time; int enemy; int client; int chatto; int cs; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 double FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(bot_state_t *VAR_1) {

 if (VAR_1->respawn_wait) {
  if (!FUNC_1(VAR_1)) {
   FUNC_0(VAR_1, "respawn: respawned");
  }
  else {
   FUNC_4(VAR_1->client);
  }
 }
 else if (VAR_1->respawn_time < FUNC_2()) {

  VAR_1->respawn_wait = VAR_0;

  FUNC_4(VAR_1->client);

  if (VAR_1->respawnchat_time) {
   FUNC_3(VAR_1->cs, 0, VAR_1->chatto);
   VAR_1->enemy = -1;
  }
 }
 if (VAR_1->respawnchat_time && VAR_1->respawnchat_time < FUNC_2() - 0.5) {
  FUNC_5(VAR_1->client);
 }

 return VAR_0;
}
