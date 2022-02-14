
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ltgtype; int ordered; int client; int decisionmaker; scalar_t__ rushbaseaway_time; scalar_t__ teamgoal_time; } ;
typedef TYPE_1__ bot_state_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_4(bot_state_t *VAR_3) {

 if (FUNC_0(VAR_3)) {

  if (VAR_3->ltgtype != VAR_1) {
   FUNC_1(VAR_3);
   VAR_3->ltgtype = VAR_1;
   VAR_3->teamgoal_time = FUNC_3() + VAR_0;
   VAR_3->rushbaseaway_time = 0;
   VAR_3->decisionmaker = VAR_3->client;
   VAR_3->ordered = VAR_2;
   FUNC_2(VAR_3);
  }
 }
}
