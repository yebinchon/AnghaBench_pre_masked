
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;

void FUNC_4(BYTE* VAR_1) {
  int VAR_2, VAR_3;

  VAR_3 = FUNC_0(VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    HANDLE VAR_4 = FUNC_1(VAR_1, VAR_2);
    if (VAR_4 != VAR_0) {
      FUNC_2(VAR_4);
    }
  }

  FUNC_3(VAR_1);
}
