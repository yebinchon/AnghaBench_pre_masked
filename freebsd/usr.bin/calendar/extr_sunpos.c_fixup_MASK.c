
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double
FUNC_0(double *VAR_0)
{

 if (*VAR_0 < 0) {
  while (*VAR_0 < 0)
   *VAR_0 += 360;
 } else {
  while (*VAR_0 > 360)
   *VAR_0 -= 360;
 }

 return (*VAR_0);
}
