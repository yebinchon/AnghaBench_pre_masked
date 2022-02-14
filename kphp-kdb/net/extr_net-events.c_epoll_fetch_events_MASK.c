
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; int timestamp; int epoll_ready; int ready; } ;
typedef TYPE_2__ event_t ;
struct TYPE_7__ {int fd; } ;
struct TYPE_9__ {int events; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_4__* VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_7 ;

int FUNC_6 (int VAR_8) {
  int VAR_9, VAR_10;
  int VAR_11 = FUNC_2 (VAR_3, VAR_6, VAR_2, VAR_8);
  if (VAR_11 < 0 && VAR_4 == VAR_0) {
    VAR_11 = 0;
  }
  if (VAR_11 < 0) {
    FUNC_4 ("epoll_wait()");
  }
  if (VAR_7 > 1 && VAR_11) {
    FUNC_3 ("epoll_wait(%d, ...) = %d\n", VAR_3, VAR_11);
  }
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
    VAR_9 = VAR_6[VAR_10].data.fd;
    FUNC_0 (VAR_9 >= 0 && VAR_9 < VAR_2);
    event_t *VAR_12 = VAR_1 + VAR_9;
    FUNC_0 (VAR_12->fd == VAR_9);
    VAR_12->ready |= FUNC_1 (VAR_12->epoll_ready = VAR_6[VAR_10].events);
    VAR_12->timestamp = VAR_5;
    FUNC_5 (VAR_12);
  }
  return VAR_11;
}
