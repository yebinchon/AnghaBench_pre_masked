
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double,double) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(double VAR_0, double VAR_1)
{

 FUNC_1("optimizations don't break the sign of 0",
      FUNC_0(VAR_0 - VAR_1, 0.0)
      && FUNC_0(-VAR_0 + 0.0, 0.0)
      && FUNC_0(-VAR_0 - VAR_1, -0.0)
      && FUNC_0(-(VAR_0 - VAR_1), -0.0)
      && FUNC_0(-VAR_0 - (-VAR_1), 0.0));
}
