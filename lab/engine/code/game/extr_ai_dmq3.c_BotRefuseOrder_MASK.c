
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int order_time; int decisionmaker; int client; int ordered; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(bot_state_t *VAR_2) {
 if (!VAR_2->ordered)
  return;

 if ( VAR_2->order_time && VAR_2->order_time > FUNC_1() - 10 ) {
  FUNC_2(VAR_2->client, VAR_0);
  FUNC_0(VAR_2, VAR_2->decisionmaker, VAR_1);
  VAR_2->order_time = 0;
 }
}
