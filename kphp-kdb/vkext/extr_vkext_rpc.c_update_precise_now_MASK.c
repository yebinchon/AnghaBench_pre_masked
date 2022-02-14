
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 long long FUNC_2 () ;

void FUNC_3 () {
  long long VAR_3 = FUNC_2 ();
  if (VAR_3 - VAR_1 > 1000000) {
    FUNC_0 (VAR_2);
    VAR_1 = VAR_3;
    VAR_0 = FUNC_1 ();
  } else {
    VAR_0 += 1e-6;
  }
}
