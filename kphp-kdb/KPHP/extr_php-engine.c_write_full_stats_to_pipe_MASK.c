
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int* FUNC_5 (size_t) ;
 int VAR_1 ;
 int FUNC_6 (int*,int ,size_t) ;
 int FUNC_7 (int*,int ,size_t) ;
 int VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int,int*,size_t) ;

void FUNC_11() {
  if (VAR_1 != -1) {
    FUNC_8();

    int VAR_5 = VAR_4 + 1 + (int)sizeof (int) * 5;
    VAR_5 = (VAR_5 + 3) & -4;
    int *VAR_6 = FUNC_5 ((size_t)VAR_5);
    FUNC_7 (VAR_6, 0, (size_t)VAR_5);

    VAR_6[2] = VAR_0;
    FUNC_6 (VAR_6 + 3, VAR_3, (size_t)VAR_4);

    FUNC_9 (VAR_2++, VAR_6, VAR_5);
    int VAR_7 = (int)FUNC_10 (VAR_1, VAR_6, (size_t)VAR_5);
    FUNC_0 (VAR_7 == VAR_5, FUNC_1 ("error during write to pipe [%d]\n", VAR_1));
    if (VAR_7 != VAR_5) {
      FUNC_4 (FUNC_3(), 9);
    }
    FUNC_2 (VAR_6);
  }
}
