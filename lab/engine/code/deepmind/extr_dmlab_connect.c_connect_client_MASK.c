
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_connecting; int map_loaded; int engine_frame_period_msec; int server_port; } ;
typedef TYPE_1__ GameContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(GameContext* VAR_0) {
  FUNC_0(FUNC_3("connect -6 [::1]:%d\n", VAR_0->server_port));
  FUNC_2("fixedtime", FUNC_3("%d", VAR_0->engine_frame_period_msec));
  FUNC_1();
  VAR_0->is_connecting = 1;
  VAR_0->map_loaded = 0;
}
