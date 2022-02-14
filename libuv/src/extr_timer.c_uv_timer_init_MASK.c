
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ repeat; int * timer_cb; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

int FUNC_1(uv_loop_t* VAR_1, uv_timer_t* VAR_2) {
  FUNC_0(VAR_1, (uv_handle_t*)VAR_2, VAR_0);
  VAR_2->timer_cb = ((void*)0);
  VAR_2->repeat = 0;
  return 0;
}
