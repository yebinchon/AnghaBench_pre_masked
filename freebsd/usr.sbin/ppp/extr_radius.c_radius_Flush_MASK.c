
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int fd; } ;
struct radius {TYPE_1__ cx; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct radius*,int) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;

void
FUNC_4(struct radius *VAR_1)
{
  struct timeval VAR_2;
  fd_set VAR_3;

  while (VAR_1->cx.fd != -1) {
    FUNC_1(&VAR_3);
    FUNC_0(VAR_1->cx.fd, &VAR_3);
    VAR_2.tv_sec = 0;
    VAR_2.tv_usec = VAR_0;
    FUNC_3(VAR_1->cx.fd + 1, &VAR_3, ((void*)0), ((void*)0), &VAR_2);
    FUNC_2(VAR_1, 1);
  }
}
