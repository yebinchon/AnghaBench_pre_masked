
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ColorModelColumn; } ;
struct textColumnParams {int t; TYPE_1__ params; int editableColumn; int m; int modelColumn; } ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;
typedef int GValue ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int,int *,char*,char*) ;
 int FUNC_2 (int *,char*,int const*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,int *,int ,int *,char*) ;

__attribute__((used)) static void FUNC_7(GtkTreeViewColumn *VAR_1, GtkCellRenderer *VAR_2, GtkTreeModel *VAR_3, GtkTreeIter *VAR_4, gpointer VAR_5)
{
 struct textColumnParams *VAR_6 = (struct textColumnParams *) VAR_5;
 GValue VAR_7 = VAR_0;
 const gchar *VAR_8;

 FUNC_5(VAR_3, VAR_4, VAR_6->modelColumn, &VAR_7);
 VAR_8 = FUNC_3(&VAR_7);
 FUNC_2(VAR_2, "text", VAR_8, ((void*)0));
 FUNC_4(&VAR_7);

 FUNC_6(VAR_6->m, VAR_4, VAR_6->editableColumn, VAR_2, "editable");

 if (VAR_6->params.ColorModelColumn != -1)
  FUNC_1(VAR_3, VAR_4, VAR_6->params.ColorModelColumn,
   VAR_2, "foreground-rgba", "foreground-set");

 FUNC_0(VAR_6->t, VAR_3, VAR_4, VAR_2);
}
