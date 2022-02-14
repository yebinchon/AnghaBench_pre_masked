
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(GtkTreeViewColumn *VAR_3, GtkCellRenderer *VAR_4, GtkTreeModel *VAR_5, GtkTreeIter *VAR_6, gpointer VAR_7)
{
 if (!VAR_1) {
  FUNC_0(VAR_4,
   "pulse", -1,
   "value", 0,
   ((void*)0));
  return;
 }
 VAR_2++;
 if (VAR_2 == VAR_0)
  VAR_2 = 1;
 FUNC_0(VAR_4, "pulse", VAR_2, ((void*)0));
}
