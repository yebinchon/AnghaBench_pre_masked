
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double) ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,double) ;

double FUNC_4 (void) {
  if (FUNC_2()) {
    return 0;
  }
  double VAR_1 = FUNC_1();
  if (!FUNC_0 (VAR_1)) {
    FUNC_3 (VAR_0, "Wrong rating %.6lf", VAR_1);
  }
  return VAR_1;
}
