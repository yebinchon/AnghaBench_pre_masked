
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int VAR_0 ;

int FUNC_5()
{
  fd_set VAR_1;

  FUNC_1 (&VAR_1);

  FUNC_0 (FUNC_2 (VAR_0), &VAR_1);

  struct timeval VAR_2;

  VAR_2.tv_sec = 1;
  VAR_2.tv_usec = 0;

  int VAR_3 = FUNC_4 (1, &VAR_1, ((void*)0), ((void*)0), &VAR_2);

  if (VAR_3 == 0) return 0;
  if (VAR_3 == -1) return -1;

  return FUNC_3();
}
