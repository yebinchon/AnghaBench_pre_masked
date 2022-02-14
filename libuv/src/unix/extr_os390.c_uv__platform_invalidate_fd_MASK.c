
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nwatchers; int * ep; scalar_t__* watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct epoll_event {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,struct epoll_event*) ;

void FUNC_2(uv_loop_t* VAR_1, int VAR_2) {
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
      if ((int) VAR_3[VAR_5].fd == VAR_2)
        VAR_3[VAR_5].fd = -1;


  if (VAR_1->ep != ((void*)0))
    FUNC_1(VAR_1->ep, VAR_0, VAR_2, &VAR_4);
}
