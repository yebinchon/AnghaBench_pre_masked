
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static void
FUNC_1(struct timeval *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 == -1) {
  VAR_1 = VAR_2;
 }

 if (VAR_1 == -1) {
  FUNC_0(VAR_0);
 } else {
  struct timeval VAR_3;
  VAR_3.tv_sec = VAR_1;
  VAR_3.tv_usec = 0;
  *VAR_0 = VAR_3;
 }
}
