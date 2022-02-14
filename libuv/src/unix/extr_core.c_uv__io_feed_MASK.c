
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pending_queue; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_6__ {int pending_queue; } ;
typedef TYPE_2__ uv__io_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(uv_loop_t* VAR_0, uv__io_t* VAR_1) {
  if (FUNC_0(&VAR_1->pending_queue))
    FUNC_1(&VAR_0->pending_queue, &VAR_1->pending_queue);
}
