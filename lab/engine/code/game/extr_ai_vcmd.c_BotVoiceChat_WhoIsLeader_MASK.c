
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netname ;
struct TYPE_5__ {int cs; int teamleader; int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(bot_state_t *VAR_3, int VAR_4, int VAR_5) {
 char VAR_6[VAR_1];

 if (!FUNC_4()) return;

 FUNC_2(VAR_3->client, VAR_6, sizeof(VAR_6));

 if (!FUNC_3(VAR_6, VAR_3->teamleader)) {
  FUNC_0(VAR_3, "iamteamleader", ((void*)0));
  FUNC_5(VAR_3->cs, 0, VAR_0);
  FUNC_1(VAR_3, -1, VAR_2);
 }
}
