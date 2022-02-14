
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;

void FUNC_3 (long VAR_2) {
  while (VAR_2 > 0) {
    int VAR_3 = VAR_2 < VAR_0 ? VAR_2 : VAR_0;
    int VAR_4 = FUNC_1 (VAR_3);
    FUNC_0 (VAR_4 > 0);
    if (VAR_4 > VAR_3) {
      FUNC_0 (VAR_4 <= VAR_3 + 4);
      VAR_4 = VAR_3;
    }
    FUNC_2 (VAR_1, VAR_4);
    VAR_1 += VAR_4;
    VAR_2 -= VAR_4;
  }
  FUNC_0 (!VAR_2);
}
