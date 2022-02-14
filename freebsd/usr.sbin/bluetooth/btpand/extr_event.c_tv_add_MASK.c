
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;



__attribute__((used)) static void
FUNC_0(struct timeval *VAR_0, struct timeval const *VAR_1)
{
 VAR_0->tv_sec += VAR_1->tv_sec;
 VAR_0->tv_usec += VAR_1->tv_usec;

 if(VAR_0->tv_usec >= 1000000) {
  VAR_0->tv_usec -= 1000000;
  VAR_0->tv_sec += 1;
 }
}
