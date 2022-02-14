
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int netname ;
struct TYPE_3__ {char* teamleader; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

void FUNC_2(bot_state_t *VAR_3, int VAR_4, int VAR_5) {
 char VAR_6[VAR_0];

 if (!FUNC_1(VAR_3->teamleader, FUNC_0(VAR_4, VAR_6, sizeof(VAR_6)))) {
  VAR_3->teamleader[0] = '\0';
  VAR_1[VAR_4] = VAR_2;
 }
}
