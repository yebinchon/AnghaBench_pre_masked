
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;



__attribute__((used)) static __inline struct timespec
FUNC_0(const struct timeval *VAR_0)
{
 struct timespec VAR_1 = {
  .tv_sec = VAR_0->tv_sec,
  .tv_nsec = VAR_0->tv_usec * 1000
 };
 return VAR_1;
}
