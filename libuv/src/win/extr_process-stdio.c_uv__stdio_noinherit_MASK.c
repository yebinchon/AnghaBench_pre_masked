
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3(BYTE* VAR_2) {
  int VAR_3, VAR_4;

  VAR_4 = FUNC_0(VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    HANDLE VAR_5 = FUNC_1(VAR_2, VAR_3);
    if (VAR_5 != VAR_1) {
      FUNC_2(VAR_5, VAR_0, 0);
    }
  }
}
