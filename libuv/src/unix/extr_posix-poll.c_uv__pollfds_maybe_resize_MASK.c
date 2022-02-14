
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t poll_fds_used; size_t poll_fds_size; struct pollfd* poll_fds; } ;
typedef TYPE_1__ uv_loop_t ;
struct pollfd {int fd; scalar_t__ revents; scalar_t__ events; } ;


 int FUNC_0 () ;
 struct pollfd* FUNC_1 (struct pollfd*,size_t) ;

__attribute__((used)) static void FUNC_2(uv_loop_t* VAR_0) {
  size_t VAR_1;
  size_t VAR_2;
  struct pollfd* VAR_3;

  if (VAR_0->poll_fds_used < VAR_0->poll_fds_size)
    return;

  VAR_2 = VAR_0->poll_fds_size ? VAR_0->poll_fds_size * 2 : 64;
  VAR_3 = FUNC_1(VAR_0->poll_fds, VAR_2 * sizeof(*VAR_0->poll_fds));
  if (VAR_3 == ((void*)0))
    FUNC_0();

  VAR_0->poll_fds = VAR_3;
  for (VAR_1 = VAR_0->poll_fds_size; VAR_1 < VAR_2; VAR_1++) {
    VAR_0->poll_fds[VAR_1].fd = -1;
    VAR_0->poll_fds[VAR_1].events = 0;
    VAR_0->poll_fds[VAR_1].revents = 0;
  }
  VAR_0->poll_fds_size = VAR_2;
}
