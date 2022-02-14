
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;

int FUNC_3 (int VAR_0, const int VAR_1)
{
  struct timeval VAR_2;

  VAR_2.tv_sec = VAR_1;
  VAR_2.tv_usec = 0;

  fd_set VAR_3;

  FUNC_1 (&VAR_3);
  FUNC_0 (VAR_0, &VAR_3);

  return FUNC_2 (VAR_0 + 1, &VAR_3, ((void*)0), ((void*)0), &VAR_2);
}
