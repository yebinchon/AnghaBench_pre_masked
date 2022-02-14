
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char*,size_t) ;

void FUNC_3(void) {
  char VAR_2[1024];
  char* VAR_3;
  for (;;) {
    ssize_t VAR_4, VAR_5, VAR_6;
    do {
      VAR_4 = FUNC_1(0, VAR_2, sizeof VAR_2);
    } while (VAR_4 == -1 && VAR_1 == VAR_0);
    if (VAR_4 == 0) {
      return;
    }
    FUNC_0(VAR_4 > 0);
    VAR_6 = VAR_4;
    VAR_3 = VAR_2;
    while (VAR_6) {
      do {
        VAR_5 = FUNC_2(1, VAR_3, (size_t)VAR_6);
      } while (VAR_5 == -1 && VAR_1 == VAR_0);
      FUNC_0(VAR_5 >= 0);
      VAR_3 = VAR_3 + VAR_5;
      VAR_6 = VAR_6 - VAR_5;
    }
  }
}
