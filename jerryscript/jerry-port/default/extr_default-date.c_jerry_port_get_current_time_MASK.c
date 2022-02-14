
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int*) ;

double FUNC_2 (void)
{

  struct timeval VAR_0;

  if (FUNC_0 (&VAR_0, ((void*)0)) == 0)
  {
    return ((double) VAR_0.tv_sec) * 1000.0 + ((double) VAR_0.tv_usec) / 1000.0;
  }
  return 0.0;
}
