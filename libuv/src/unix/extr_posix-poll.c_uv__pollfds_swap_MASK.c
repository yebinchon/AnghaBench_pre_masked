
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pollfd* poll_fds; } ;
typedef TYPE_1__ uv_loop_t ;
struct pollfd {int dummy; } ;



__attribute__((used)) static void FUNC_0(uv_loop_t* VAR_0, size_t VAR_1, size_t VAR_2) {
  struct pollfd VAR_3;
  VAR_3 = VAR_0->poll_fds[VAR_1];
  VAR_0->poll_fds[VAR_1] = VAR_0->poll_fds[VAR_2];
  VAR_0->poll_fds[VAR_2] = VAR_3;
}
