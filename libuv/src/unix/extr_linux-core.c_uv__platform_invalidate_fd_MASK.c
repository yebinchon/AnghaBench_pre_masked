
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t nwatchers; scalar_t__ backend_fd; scalar_t__* watchers; } ;
typedef TYPE_2__ uv_loop_t ;
struct TYPE_4__ {int fd; } ;
struct epoll_event {TYPE_1__ data; } ;
typedef int dummy ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int,struct epoll_event*) ;
 int FUNC_2 (struct epoll_event*,int ,int) ;

void FUNC_3(uv_loop_t* VAR_1, int VAR_2) {
  struct epoll_event* VAR_3;
  struct epoll_event VAR_4;
  uintptr_t VAR_5;
  uintptr_t VAR_6;

  FUNC_0(VAR_1->watchers != ((void*)0));
  FUNC_0(VAR_2 >= 0);

  VAR_3 = (struct epoll_event*) VAR_1->watchers[VAR_1->nwatchers];
  VAR_6 = (uintptr_t) VAR_1->watchers[VAR_1->nwatchers + 1];
  if (VAR_3 != ((void*)0))

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
      if (VAR_3[VAR_5].data.fd == VAR_2)
        VAR_3[VAR_5].data.fd = -1;







  if (VAR_1->backend_fd >= 0) {



    FUNC_2(&VAR_4, 0, sizeof(VAR_4));
    FUNC_1(VAR_1->backend_fd, VAR_0, VAR_2, &VAR_4);
  }
}
