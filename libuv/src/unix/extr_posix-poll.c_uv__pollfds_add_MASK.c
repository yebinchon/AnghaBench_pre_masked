
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t poll_fds_used; struct pollfd* poll_fds; int poll_fds_iterating; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_7__ {scalar_t__ fd; int pevents; } ;
typedef TYPE_2__ uv__io_t ;
struct pollfd {scalar_t__ fd; int events; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(uv_loop_t* VAR_0, uv__io_t* VAR_1) {
  size_t VAR_2;
  struct pollfd* VAR_3;


  FUNC_0(!VAR_0->poll_fds_iterating);
  for (VAR_2 = 0; VAR_2 < VAR_0->poll_fds_used; ++VAR_2) {
    if (VAR_0->poll_fds[VAR_2].fd == VAR_1->fd) {
      VAR_0->poll_fds[VAR_2].events = VAR_1->pevents;
      return;
    }
  }


  FUNC_1(VAR_0);
  VAR_3 = &VAR_0->poll_fds[VAR_0->poll_fds_used++];
  VAR_3->fd = VAR_1->fd;
  VAR_3->events = VAR_1->pevents;
}
