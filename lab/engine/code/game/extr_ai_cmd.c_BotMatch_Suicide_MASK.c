
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netname ;
struct TYPE_5__ {int client; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7(bot_state_t *VAR_4, bot_match_t *VAR_5) {
 char VAR_6[VAR_1];
 int VAR_7;

 if (!FUNC_3()) return;

 if (!FUNC_0(VAR_4, VAR_5)) return;

 FUNC_6(VAR_4->client, "kill");

 FUNC_4(VAR_5, VAR_2, VAR_6, sizeof(VAR_6));
 VAR_7 = FUNC_2(VAR_6);

 FUNC_1(VAR_4, VAR_7, VAR_3);
 FUNC_5(VAR_4->client, VAR_0);
}
