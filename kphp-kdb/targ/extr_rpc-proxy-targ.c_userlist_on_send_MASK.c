
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {int dummy; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gather*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6 (struct gather *VAR_7, int VAR_8) {
  if (!VAR_4) {
    return FUNC_1 (VAR_7, VAR_8);
  } else {
    if (!VAR_6[VAR_8]) {
      return -1;
    } else {
      FUNC_5 (VAR_1, VAR_2);
      int VAR_9 = VAR_5[VAR_8];
      int VAR_10 = 0;
      FUNC_4 (VAR_6[VAR_8]);
      while (VAR_9 != -1) {
        FUNC_4 (VAR_0[VAR_9]);
        VAR_9 = VAR_3[VAR_9];
        VAR_10 ++;
      }
      FUNC_0 (VAR_10 == VAR_6[VAR_8]);
      FUNC_2 (FUNC_3 (), 0);
      return 0;
    }
  }
}
