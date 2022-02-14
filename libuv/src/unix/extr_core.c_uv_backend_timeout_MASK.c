
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ stop_flag; scalar_t__ closing_handles; int pending_queue; int idle_handles; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;

int FUNC_4(const uv_loop_t* VAR_0) {
  if (VAR_0->stop_flag != 0)
    return 0;

  if (!FUNC_1(VAR_0) && !FUNC_2(VAR_0))
    return 0;

  if (!FUNC_0(&VAR_0->idle_handles))
    return 0;

  if (!FUNC_0(&VAR_0->pending_queue))
    return 0;

  if (VAR_0->closing_handles)
    return 0;

  return FUNC_3(VAR_0);
}
