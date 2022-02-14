
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int ainode; int ms; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(bot_state_t *VAR_2, char *VAR_3) {
 FUNC_0(VAR_2, "battle fight", "", VAR_3);
 FUNC_1(VAR_2->ms);
 VAR_2->ainode = VAR_0;
 VAR_2->flags &= ~VAR_1;
}
