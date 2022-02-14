
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {int* extra; } ;


 int FUNC_0 (struct gather*) ;
 scalar_t__ FUNC_1 (struct gather*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;

void FUNC_6 (struct gather *VAR_0) {
  int *VAR_1 = VAR_0->extra;
  if (FUNC_1 (VAR_0) >= 0) {
    FUNC_3 (VAR_1[1]);
    if (VAR_1[2] >= 0) {
      FUNC_3 (VAR_1[2]);
    }
    FUNC_4 (VAR_1 + 3, VAR_1[0] * 4);
    FUNC_2 ();
  }
  FUNC_5 (VAR_1, 4 * VAR_1[0] + 12);
  FUNC_0 (VAR_0);
}
