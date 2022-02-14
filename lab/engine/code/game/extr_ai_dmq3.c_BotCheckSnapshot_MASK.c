
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int eventParm; int event; } ;
typedef TYPE_2__ entityState_t ;
struct TYPE_15__ {int externalEventParm; int externalEvent; } ;
struct TYPE_17__ {TYPE_1__ cur_ps; int client; scalar_t__ numproxmines; scalar_t__ kamikazebody; int ms; } ;
typedef TYPE_3__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_1 ;

void FUNC_7(bot_state_t *VAR_2) {
 int VAR_3;
 entityState_t VAR_4;


 FUNC_6(VAR_2->ms, VAR_1, 0, VAR_0);

 VAR_2->kamikazebody = 0;

 VAR_2->numproxmines = 0;

 VAR_3 = 0;
 while( ( VAR_3 = FUNC_1( VAR_2->client, VAR_3, &VAR_4 ) ) != -1 ) {

  FUNC_2(VAR_2, &VAR_4);

  FUNC_3(VAR_2, &VAR_4);







 }

 FUNC_0(VAR_2->client, &VAR_4);

 VAR_4.event = VAR_2->cur_ps.externalEvent;
 VAR_4.eventParm = VAR_2->cur_ps.externalEventParm;

 FUNC_2(VAR_2, &VAR_4);
}
