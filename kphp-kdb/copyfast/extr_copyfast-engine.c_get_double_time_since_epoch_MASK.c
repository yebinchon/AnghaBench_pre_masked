
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int ) ;

double FUNC_1() {
  struct timeval VAR_0;
  FUNC_0(&VAR_0, 0);
  return VAR_0.tv_sec + 1e-6 * VAR_0.tv_usec;
}
