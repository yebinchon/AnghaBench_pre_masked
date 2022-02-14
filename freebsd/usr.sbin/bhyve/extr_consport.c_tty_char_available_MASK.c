
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static bool
FUNC_3(void)
{
 fd_set VAR_1;
 struct timeval VAR_2;

 FUNC_1(&VAR_1);
 FUNC_0(VAR_0, &VAR_1);
 VAR_2.tv_sec = 0;
 VAR_2.tv_usec = 0;
 if (FUNC_2(VAR_0 + 1, &VAR_1, ((void*)0), ((void*)0), &VAR_2) > 0) {
  return (1);
 } else {
  return (0);
 }
}
