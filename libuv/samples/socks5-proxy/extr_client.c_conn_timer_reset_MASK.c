
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idle_timeout; int timer_handle; } ;
typedef TYPE_1__ conn ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(conn *VAR_1) {
  FUNC_0(0 == FUNC_1(&VAR_1->timer_handle,
                            VAR_0,
                            VAR_1->idle_timeout,
                            0));
}
