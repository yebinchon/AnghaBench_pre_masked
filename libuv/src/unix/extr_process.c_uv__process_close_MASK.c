
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* loop; int queue; } ;
typedef TYPE_2__ uv_process_t ;
struct TYPE_5__ {int child_watcher; int process_handles; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(uv_process_t* VAR_0) {
  FUNC_1(&VAR_0->queue);
  FUNC_2(VAR_0);
  if (FUNC_0(&VAR_0->loop->process_handles))
    FUNC_3(&VAR_0->loop->child_watcher);
}
