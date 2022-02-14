
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (int ,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_1(void)
{
  struct timeval VAR_0;

  VAR_0.tv_sec = 0;
  VAR_0.tv_usec = 100000;
  FUNC_0(0, ((void*)0), ((void*)0), ((void*)0), &VAR_0);
  return VAR_0.tv_usec != 100000;
}
