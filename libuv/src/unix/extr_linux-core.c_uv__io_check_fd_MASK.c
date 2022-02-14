
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int backend_fd; } ;
typedef TYPE_2__ uv_loop_t ;
struct TYPE_4__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int,struct epoll_event*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct epoll_event*,int ,int) ;

int FUNC_4(uv_loop_t* VAR_5, int VAR_6) {
  struct epoll_event VAR_7;
  int VAR_8;

  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.events = VAR_3;
  VAR_7.data.fd = -1;

  VAR_8 = 0;
  if (FUNC_2(VAR_5->backend_fd, VAR_1, VAR_6, &VAR_7))
    if (VAR_4 != VAR_0)
      VAR_8 = FUNC_0(VAR_4);

  if (VAR_8 == 0)
    if (FUNC_2(VAR_5->backend_fd, VAR_2, VAR_6, &VAR_7))
      FUNC_1();

  return VAR_8;
}
