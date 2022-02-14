
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int backend_fd; int * cf_state; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(uv_loop_t* VAR_1) {
  int VAR_2;
  VAR_1->backend_fd = -1;
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
    return VAR_2;
  return VAR_2;
}
