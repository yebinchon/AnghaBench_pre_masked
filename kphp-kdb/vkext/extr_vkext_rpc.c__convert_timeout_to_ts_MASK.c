
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;



__attribute__((used)) static struct timeval FUNC_0 (double VAR_0) {
  struct timeval VAR_1;
  int VAR_2 = 0;

  VAR_2 = (int)VAR_0;
  VAR_1.tv_sec = VAR_2;
  VAR_1.tv_usec = (int)(((VAR_0 - VAR_2) * 1e6) / 1000000);
  return VAR_1;
}
