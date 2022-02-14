
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ repeat; int * timer_cb; } ;
typedef TYPE_1__ uv_timer_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(uv_timer_t* VAR_1) {
  if (VAR_1->timer_cb == ((void*)0))
    return VAR_0;

  if (VAR_1->repeat) {
    FUNC_1(VAR_1);
    FUNC_0(VAR_1, VAR_1->timer_cb, VAR_1->repeat, VAR_1->repeat);
  }

  return 0;
}
