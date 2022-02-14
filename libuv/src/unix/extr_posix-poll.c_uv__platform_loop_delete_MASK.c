
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * poll_fds; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int *) ;

void FUNC_1(uv_loop_t* VAR_0) {
  FUNC_0(VAR_0->poll_fds);
  VAR_0->poll_fds = ((void*)0);
}
