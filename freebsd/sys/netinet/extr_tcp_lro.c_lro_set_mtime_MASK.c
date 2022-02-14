
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;



__attribute__((used)) static void
FUNC_0(struct timeval *VAR_0, struct timespec *VAR_1)
{
 VAR_0->tv_sec = VAR_1->tv_sec;
 VAR_0->tv_usec = VAR_1->tv_nsec / 1000;
}
