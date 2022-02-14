
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int state; } ;
typedef TYPE_1__ event_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;

int FUNC_3 (int VAR_5) {
  event_t *VAR_6;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_3);
  VAR_6 = VAR_2 + VAR_5;
  if (VAR_6->fd != VAR_5) return -1;
  if (VAR_6->state & VAR_1) {
    VAR_6->state &= ~VAR_1;
    if (FUNC_1 (VAR_4, VAR_0, VAR_5, 0) < 0) {
      FUNC_2 ("epoll_ctl()");
    }
  }
  return 0;
}
