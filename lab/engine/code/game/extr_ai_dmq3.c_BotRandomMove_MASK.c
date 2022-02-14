
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {int ms; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_6__ {int movedir; int failure; } ;
typedef TYPE_2__ bot_moveresult_t ;


 int FUNC_0 (int*,int*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int*,int,int ) ;

void FUNC_4(bot_state_t *VAR_2, bot_moveresult_t *VAR_3) {
 vec3_t VAR_4, VAR_5;

 VAR_5[0] = 0;
 VAR_5[1] = FUNC_2() * 360;
 VAR_5[2] = 0;
 FUNC_0(VAR_5, VAR_4, ((void*)0), ((void*)0));

 FUNC_3(VAR_2->ms, VAR_4, 400, VAR_0);

 VAR_3->failure = VAR_1;
 FUNC_1(VAR_4, VAR_3->movedir);
}
