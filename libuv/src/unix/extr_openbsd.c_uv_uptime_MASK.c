
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
typedef int info ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int*,int,struct timeval*,size_t*,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(double* VAR_1) {
  time_t VAR_2;
  struct timeval VAR_3;
  size_t VAR_4 = sizeof(VAR_3);
  static int VAR_5[] = {129, 128};

  if (FUNC_1(VAR_5, 2, &VAR_3, &VAR_4, ((void*)0), 0))
    return FUNC_0(VAR_0);

  VAR_2 = FUNC_2(((void*)0));

  *VAR_1 = (double)(VAR_2 - VAR_3.tv_sec);
  return 0;
}
