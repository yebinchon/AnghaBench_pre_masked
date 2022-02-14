
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static void
FUNC_1(struct timeval *VAR_0, const struct timeval *VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0) && VAR_2 != -1) {
  VAR_0->tv_sec = VAR_2;
  VAR_0->tv_usec = 0;
  return;
 }

 if (VAR_1) {
  *VAR_0 = *VAR_1;
 } else {
  FUNC_0(VAR_0);
 }
}
