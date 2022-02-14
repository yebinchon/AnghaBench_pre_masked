
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkboxColumnParams {int t; int editableColumn; int m; int modelColumn; } ;
typedef scalar_t__ gpointer ;
typedef int gboolean ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;
typedef int GValue ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int *,char*,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *,char*) ;

__attribute__((used)) static void FUNC_6(GtkTreeViewColumn *VAR_1, GtkCellRenderer *VAR_2, GtkTreeModel *VAR_3, GtkTreeIter *VAR_4, gpointer VAR_5)
{
 struct checkboxColumnParams *VAR_6 = (struct checkboxColumnParams *) VAR_5;
 GValue VAR_7 = VAR_0;
 gboolean VAR_8;

 FUNC_4(VAR_3, VAR_4, VAR_6->modelColumn, &VAR_7);
 VAR_8 = FUNC_2(&VAR_7) != 0;
 FUNC_1(VAR_2, "active", VAR_8, ((void*)0));
 FUNC_3(&VAR_7);

 FUNC_5(VAR_6->m, VAR_4, VAR_6->editableColumn, VAR_2, "activatable");

 FUNC_0(VAR_6->t, VAR_3, VAR_4, VAR_2);
}
