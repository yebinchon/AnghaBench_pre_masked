
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableValue ;
typedef int uiTableModelHandler ;
typedef int uiTableModel ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(uiTableModelHandler *VAR_3, uiTableModel *VAR_4, int VAR_5, int VAR_6, const uiTableValue *VAR_7)
{
 if (VAR_5 == 9 && VAR_6 == 2)
  FUNC_0(VAR_1, FUNC_3(VAR_7));
 if (VAR_6 == 6) {
  int VAR_8;

  VAR_8 = VAR_2;
  VAR_2 = VAR_5;
  if (VAR_8 != -1)
   FUNC_1(VAR_4, VAR_8);
  FUNC_1(VAR_4, VAR_2);
 }
 if (VAR_6 == 7)
  VAR_0[VAR_5] = FUNC_2(VAR_7);
}
