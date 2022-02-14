
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct TYPE_6__ {int fd; int state; int epoll_state; scalar_t__ ready; } ;
typedef TYPE_2__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int,struct epoll_event*) ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int ,int ,int,int,int) ;

int FUNC_7 (int VAR_10, int VAR_11) {
  event_t *VAR_12;
  int VAR_13;
  struct epoll_event VAR_14;
  if (!VAR_11) {
    return FUNC_3 (VAR_10);
  }
  FUNC_0 (VAR_10 >= 0 && VAR_10 < VAR_8);
  VAR_12 = VAR_7 + VAR_10;
  if (VAR_12->fd != VAR_10) {
    FUNC_4 (VAR_12, 0, sizeof(event_t));
    VAR_12->fd = VAR_10;
  }
  VAR_11 &= VAR_4 | VAR_5 | VAR_3 | VAR_6;
  VAR_12->ready = 0;
  if ((VAR_12->state & (VAR_3 | VAR_6 | VAR_2)) == VAR_11 + VAR_2) {
    return 0;
  }
  VAR_12->state = (VAR_12->state & ~(VAR_3 | VAR_6)) | (VAR_11 & (VAR_3 | VAR_6));
  VAR_13 = FUNC_1 (VAR_11);
  if (VAR_13 != VAR_12->epoll_state || (VAR_11 & VAR_4) || !(VAR_12->state & VAR_2)) {
    VAR_14.events = VAR_13;
    VAR_14.data.fd = VAR_10;

    FUNC_6 (1, "epoll_ctl(%d,%d,%d,%d,%08x)\n", VAR_9, (VAR_12->state & VAR_2) ? VAR_1 : VAR_0, VAR_10, VAR_14.data.fd, VAR_14.events);

    if (FUNC_2 (VAR_9, (VAR_12->state & VAR_2) ? VAR_1 : VAR_0, VAR_10, &VAR_14) < 0) {
      FUNC_5("epoll_ctl()");
    }
    VAR_12->state |= VAR_2;
  }
  return 0;
}
