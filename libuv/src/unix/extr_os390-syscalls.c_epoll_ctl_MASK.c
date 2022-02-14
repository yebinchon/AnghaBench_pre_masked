
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; TYPE_1__* items; } ;
typedef TYPE_2__ uv__os390_epoll ;
struct epoll_event {int events; } ;
struct TYPE_5__ {int fd; scalar_t__ revents; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(uv__os390_epoll* VAR_7,
              int VAR_8,
              int VAR_9,
              struct epoll_event *VAR_10) {
  FUNC_2(&VAR_6);

  if (VAR_8 == VAR_3) {
    if (VAR_9 >= VAR_7->size || VAR_7->items[VAR_9].fd == -1) {
      FUNC_3(&VAR_6);
      VAR_5 = VAR_1;
      return -1;
    }
    VAR_7->items[VAR_9].fd = -1;
  } else if (VAR_8 == VAR_2) {





    FUNC_1(VAR_7, VAR_9 + 2);
    if (VAR_7->items[VAR_9].fd != -1) {
      FUNC_3(&VAR_6);
      VAR_5 = VAR_0;
      return -1;
    }
    VAR_7->items[VAR_9].fd = VAR_9;
    VAR_7->items[VAR_9].events = VAR_10->events;
    VAR_7->items[VAR_9].revents = 0;
  } else if (VAR_8 == VAR_4) {
    if (VAR_9 >= VAR_7->size - 1 || VAR_7->items[VAR_9].fd == -1) {
      FUNC_3(&VAR_6);
      VAR_5 = VAR_1;
      return -1;
    }
    VAR_7->items[VAR_9].events = VAR_10->events;
    VAR_7->items[VAR_9].revents = 0;
  } else
    FUNC_0();

  FUNC_3(&VAR_6);
  return 0;
}
