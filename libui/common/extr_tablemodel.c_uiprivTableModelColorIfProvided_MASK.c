
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableValue ;
typedef int uiTableModel ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double*,double*,double*,double*) ;
 int * FUNC_2 (int *,int,int) ;

int FUNC_3(uiTableModel *VAR_0, int VAR_1, int VAR_2, double *VAR_3, double *VAR_4, double *VAR_5, double *VAR_6)
{
 uiTableValue *VAR_7;

 if (VAR_2 == -1)
  return 0;
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_7 == ((void*)0))
  return 0;
 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7);
 return 1;
}
