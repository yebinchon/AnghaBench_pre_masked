
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ stop_flag; scalar_t__ idle_handles; scalar_t__ endgame_handles; scalar_t__ pending_reqs_tail; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const uv_loop_t* VAR_0) {
  if (VAR_0->stop_flag != 0)
    return 0;

  if (!FUNC_0(VAR_0) && !FUNC_1(VAR_0))
    return 0;

  if (VAR_0->pending_reqs_tail)
    return 0;

  if (VAR_0->endgame_handles)
    return 0;

  if (VAR_0->idle_handles)
    return 0;

  return FUNC_2(VAR_0);
}
