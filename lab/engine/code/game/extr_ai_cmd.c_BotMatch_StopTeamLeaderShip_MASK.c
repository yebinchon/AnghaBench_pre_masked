
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int teammate ;
typedef int netname ;
struct TYPE_6__ {char* teamleader; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_7__ {int subtype; } ;
typedef TYPE_2__ bot_match_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,char*,int) ;

void FUNC_5(bot_state_t *VAR_6, bot_match_t *VAR_7) {
 int VAR_8;
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];

 if (!FUNC_3()) return;

 FUNC_4(VAR_7, VAR_3, VAR_9, sizeof(VAR_9));

 if (VAR_7->subtype & VAR_2) {
  FUNC_4(VAR_7, VAR_1, VAR_10, sizeof(VAR_10));
  VAR_8 = FUNC_1(VAR_10);
 }

 else {
  VAR_8 = FUNC_1(VAR_9);
 }
 if (VAR_8 >= 0) {
  if (!FUNC_2(VAR_6->teamleader, FUNC_0(VAR_8, VAR_10, sizeof(VAR_10)))) {
   VAR_6->teamleader[0] = '\0';
   VAR_4[VAR_8] = VAR_5;
  }
 }
}
