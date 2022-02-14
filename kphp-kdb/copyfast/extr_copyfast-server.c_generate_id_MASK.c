
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,long long) ;

long long FUNC_2 (long long VAR_3) {
  while (1) {
    int VAR_4 = ((VAR_3 & VAR_1) != 0);
    if (VAR_4 && FUNC_1 (VAR_2, VAR_3)) {
      VAR_4 = 0;
    }
    if (VAR_4) {
      return VAR_3;
    }
    VAR_3 = (VAR_3 & VAR_0) | (unsigned) FUNC_0();
  }
  return 0;
}
