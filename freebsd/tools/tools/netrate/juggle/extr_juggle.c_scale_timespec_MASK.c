
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;



__attribute__((used)) static void
FUNC_0(struct timespec *VAR_0, int VAR_1)
{

 if (VAR_1 == 0)
  return;

 VAR_0->tv_sec /= VAR_1;
 VAR_0->tv_nsec /= VAR_1;
}
