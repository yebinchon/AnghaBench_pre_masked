
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int redflagstatus; int blueflagstatus; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_5(bot_state_t *VAR_1) {
 int VAR_2;


 if (FUNC_4(VAR_1) == VAR_0) VAR_2 = VAR_1->redflagstatus * 2 + VAR_1->blueflagstatus;
 else VAR_2 = VAR_1->blueflagstatus * 2 + VAR_1->redflagstatus;

 switch(VAR_2) {
  case 0: FUNC_0(VAR_1); break;
  case 1: FUNC_2(VAR_1); break;
  case 2: FUNC_3(VAR_1); break;
  case 3: FUNC_1(VAR_1); break;
 }
}
