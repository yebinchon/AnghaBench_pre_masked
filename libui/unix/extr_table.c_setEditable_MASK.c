
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableModel ;
typedef int gboolean ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int,int *) ;
 int * FUNC_2 (int ,int *) ;
 int* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(uiTableModel *VAR_0, GtkTreeIter *VAR_1, int VAR_2, GtkCellRenderer *VAR_3, const char *VAR_4)
{
 GtkTreePath *VAR_5;
 int VAR_6;
 gboolean VAR_7;


 VAR_5 = FUNC_2(FUNC_0(VAR_0), VAR_1);
 VAR_6 = FUNC_3(VAR_5)[0];
 VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_2) != 0;
 FUNC_1(VAR_3, VAR_4, VAR_7, ((void*)0));
}
