
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

int FUNC_2 (void) {
  int VAR_3;
  if (VAR_2) return 0;
  VAR_0[0].fd = -1;
  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 < 0) {
    FUNC_1 ("epoll_create()");
    return -1;
  }
  VAR_2 = VAR_3;
  return VAR_3;
}
