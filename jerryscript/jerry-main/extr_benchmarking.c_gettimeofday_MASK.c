
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



int FUNC_0 (struct timeval *VAR_0,
                  void *VAR_1)
{
  (void) VAR_1;
  VAR_0->tv_sec = 0;
  VAR_0->tv_usec = 0;
  return 0;
}
