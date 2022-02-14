
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double* VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int) ;
 double FUNC_1 () ;
 double FUNC_2 (double) ;

void FUNC_3 (void) {
  double VAR_3 = FUNC_1 ();
  if (VAR_3 < 0.1) {
    VAR_3 = 0.1;
  }
  VAR_3 = -FUNC_2 (VAR_3);
  FUNC_0 (VAR_3 >= 0);
  VAR_1[0] = VAR_2 * VAR_3;
  VAR_1[1] = VAR_0 * VAR_3;
  VAR_1[2] = -0.1;
}
