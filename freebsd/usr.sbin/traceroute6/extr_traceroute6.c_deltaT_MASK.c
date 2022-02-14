
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



double
FUNC_0(struct timeval *VAR_0, struct timeval *VAR_1)
{
 double VAR_2;

 VAR_2 = (double)(VAR_1->tv_sec - VAR_0->tv_sec) * 1000.0 +
     (double)(VAR_1->tv_usec - VAR_0->tv_usec) / 1000.0;
 return (VAR_2);
}
