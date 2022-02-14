
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; struct pollfd* items; } ;
typedef TYPE_1__ uv__os390_epoll ;
struct pollfd {int fd; int revents; } ;
struct epoll_event {int fd; int events; } ;
typedef int nmsgsfds_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct pollfd*,int ,int) ;

int FUNC_4(uv__os390_epoll* VAR_2, struct epoll_event* VAR_3,
               int VAR_4, int VAR_5) {
  nmsgsfds_t VAR_6;
  struct pollfd* VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;

  FUNC_2(VAR_6, 1, VAR_2->size - 1);
  VAR_7 = VAR_2->items;
  VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_5);
  if (VAR_8 <= 0)
    return VAR_8;

  VAR_8 = FUNC_0(VAR_8) + FUNC_1(VAR_8);

  VAR_9 = 0;
  VAR_10 = 0;
  for (int VAR_11 = 0;
       VAR_11 < VAR_2->size && VAR_11 < VAR_4 && VAR_9 < VAR_8; ++VAR_11) {
    struct epoll_event VAR_12;
    struct pollfd* VAR_13;

    VAR_13 = &VAR_7[VAR_11];
    if (VAR_13->fd == -1 || VAR_13->revents == 0)
      continue;

    VAR_12.fd = VAR_13->fd;
    VAR_12.events = VAR_13->revents;
    if (VAR_13->revents & VAR_0 && VAR_13->revents & VAR_1)
      VAR_9 += 2;
    else if (VAR_13->revents & (VAR_0 | VAR_1))
      ++VAR_9;

    VAR_13->revents = 0;
    VAR_3[VAR_10++] = VAR_12;
  }

  return VAR_10;
}
