
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;

void FUNC_4 (const char *VAR_3, int VAR_4) {
  while (VAR_4 > 0) {
    if (FUNC_3 (VAR_2 == VAR_1 + VAR_0)) {
      FUNC_0 ();
    }
    int VAR_5 = FUNC_2 (VAR_4, VAR_1 + VAR_0 - VAR_2);
    FUNC_1 (VAR_2, VAR_3, VAR_5);
    VAR_2 += VAR_5;
    VAR_3 += VAR_5;
    VAR_4 -= VAR_5;
  }

}
