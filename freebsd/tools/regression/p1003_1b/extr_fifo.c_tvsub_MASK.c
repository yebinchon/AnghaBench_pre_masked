
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;



__attribute__((used)) static double
FUNC_0(const struct timeval *VAR_0, const struct timeval *VAR_1)
{
 long VAR_2;
 long VAR_3;

 VAR_2 = VAR_0->tv_sec - VAR_1->tv_sec;
 VAR_3 = VAR_0->tv_usec - VAR_1->tv_usec;

 return (double)(VAR_2 * 1000000 + VAR_3) / 1e6;
}
