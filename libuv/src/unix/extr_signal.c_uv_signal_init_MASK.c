
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dispatched_signals; scalar_t__ caught_signals; scalar_t__ signum; } ;
typedef TYPE_1__ uv_signal_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(uv_loop_t* VAR_1, uv_signal_t* VAR_2) {
  int VAR_3;

  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
    return VAR_3;

  FUNC_0(VAR_1, (uv_handle_t*) VAR_2, VAR_0);
  VAR_2->signum = 0;
  VAR_2->caught_signals = 0;
  VAR_2->dispatched_signals = 0;

  return 0;
}
