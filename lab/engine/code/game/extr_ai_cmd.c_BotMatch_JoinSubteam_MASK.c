
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int teammate ;
typedef int netname ;
struct TYPE_5__ {char* subteam; int cs; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;


 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *,int ,char*,int) ;

void FUNC_7(bot_state_t *VAR_4, bot_match_t *VAR_5) {
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 int VAR_8;

 if (!FUNC_3()) return;

 if (!FUNC_1(VAR_4, VAR_5)) return;

 FUNC_6(VAR_5, VAR_3, VAR_6, sizeof(VAR_6));

 FUNC_4(VAR_4->subteam, VAR_6, 32);
 VAR_4->subteam[31] = '\0';

 FUNC_6(VAR_5, VAR_2, VAR_7, sizeof(VAR_7));
 FUNC_0(VAR_4, "joinedteam", VAR_6, ((void*)0));
 VAR_8 = FUNC_2(VAR_7);
 FUNC_5(VAR_4->cs, VAR_8, VAR_0);
}
