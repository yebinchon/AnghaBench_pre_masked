
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableNotification ;
typedef int uiTableModel ;
typedef int intmax_t ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int) ;




void FUNC_8(uiTableModel *VAR_1, uiTableNotification VAR_2, intmax_t VAR_3, intmax_t VAR_4)
{
 GtkTreeModel *VAR_5 = FUNC_0(VAR_1);
 GtkTreePath *VAR_6;
 GtkTreeIter VAR_7;

 VAR_6 = FUNC_7(VAR_3, -1);
 switch (VAR_2) {
 case 128:
  if (FUNC_2(VAR_5, &VAR_7, VAR_6) == VAR_0)
   FUNC_1("invalid row given to row inserted in uiTableModelNotify()");
  FUNC_5(VAR_5, VAR_6, &VAR_7);
  break;
 case 129:
  FUNC_4(VAR_5, VAR_6);
  break;
 case 130:
  if (FUNC_2(VAR_5, &VAR_7, VAR_6) == VAR_0)
   FUNC_1("invalid row given to row changed in uiTableModelNotify()");
  FUNC_3(VAR_5, VAR_6, &VAR_7);
  break;
 default:
  FUNC_1("unknown uiTable notification %d in uiTableModelNotify()", VAR_2);
 }
 FUNC_6(VAR_6);
}
