
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ caught_signals; scalar_t__ dispatched_signals; } ;
typedef TYPE_1__ uv_signal_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(uv_signal_t* VAR_0) {

  FUNC_1(VAR_0);





  if (VAR_0->caught_signals == VAR_0->dispatched_signals) {
    FUNC_0((uv_handle_t*) VAR_0);
  }
}
