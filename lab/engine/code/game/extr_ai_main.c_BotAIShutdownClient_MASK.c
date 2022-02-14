
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {int inuse; int patrolpoints; int checkpoints; int character; int ws; int cs; int gs; int ms; int client; } ;
typedef TYPE_1__ bot_state_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_5, qboolean VAR_6) {
 bot_state_t *VAR_7;

 VAR_7 = VAR_1[VAR_5];
 if (!VAR_7 || !VAR_7->inuse) {

  return VAR_3;
 }

 if (VAR_6) {
  FUNC_3(VAR_7);
 }

 if (FUNC_0(VAR_7)) {
  FUNC_5(VAR_7->cs, VAR_7->client, VAR_0);
 }

 FUNC_9(VAR_7->ms);

 FUNC_8(VAR_7->gs);

 FUNC_7(VAR_7->cs);

 FUNC_10(VAR_7->ws);

 FUNC_6(VAR_7->character);

 FUNC_2(VAR_7->checkpoints);
 FUNC_2(VAR_7->patrolpoints);

 FUNC_1(VAR_7);

 FUNC_4(VAR_7, 0, sizeof(bot_state_t));

 VAR_7->inuse = VAR_3;

 VAR_2--;

 return VAR_4;
}
