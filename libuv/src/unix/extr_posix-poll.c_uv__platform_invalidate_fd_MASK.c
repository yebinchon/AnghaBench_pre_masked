
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t poll_fds_used; TYPE_1__* poll_fds; scalar_t__ poll_fds_iterating; } ;
typedef TYPE_2__ uv_loop_t ;
struct TYPE_5__ {int fd; scalar_t__ revents; scalar_t__ events; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;

void FUNC_2(uv_loop_t* VAR_0, int VAR_1) {
  size_t VAR_2;

  FUNC_0(VAR_1 >= 0);

  if (VAR_0->poll_fds_iterating) {

    for (VAR_2 = 0; VAR_2 < VAR_0->poll_fds_used; VAR_2++)
      if (VAR_0->poll_fds[VAR_2].fd == VAR_1) {
        VAR_0->poll_fds[VAR_2].fd = -1;
        VAR_0->poll_fds[VAR_2].events = 0;
        VAR_0->poll_fds[VAR_2].revents = 0;
      }
  } else {

    FUNC_1(VAR_0, VAR_1);
  }
}
