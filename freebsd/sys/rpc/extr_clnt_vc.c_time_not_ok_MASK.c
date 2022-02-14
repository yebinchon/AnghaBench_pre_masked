
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int bool_t ;



__attribute__((used)) static bool_t
FUNC_0(struct timeval *VAR_0)
{
 return (VAR_0->tv_sec <= -1 || VAR_0->tv_sec > 100000000 ||
  VAR_0->tv_usec <= -1 || VAR_0->tv_usec > 1000000);
}
