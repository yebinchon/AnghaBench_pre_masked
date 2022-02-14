
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static bool
FUNC_1(double VAR_0, double VAR_1, double VAR_2, double VAR_3) {
 double VAR_4;

 if (FUNC_0(VAR_0 - VAR_1) < VAR_3) {
  return 1;
 }
 VAR_4 = (FUNC_0(VAR_1) > FUNC_0(VAR_0)) ? FUNC_0((VAR_0-VAR_1)/VAR_1) : FUNC_0((VAR_0-VAR_1)/VAR_0);
 return (VAR_4 < VAR_2);
}
