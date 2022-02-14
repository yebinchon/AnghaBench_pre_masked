
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uiImage ;
struct imageColumnParams {TYPE_1__* t; int modelColumn; } ;
typedef scalar_t__ gpointer ;
struct TYPE_2__ {int treeWidget; } ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;
typedef int GValue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_1 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(GtkTreeViewColumn *VAR_1, GtkCellRenderer *VAR_2, GtkTreeModel *VAR_3, GtkTreeIter *VAR_4, gpointer VAR_5)
{
 struct imageColumnParams *VAR_6 = (struct imageColumnParams *) VAR_5;
 GValue VAR_7 = VAR_0;
 uiImage *VAR_8;


 FUNC_4(VAR_3, VAR_4, VAR_6->modelColumn, &VAR_7);
 VAR_8 = (uiImage *) FUNC_2(&VAR_7);
 FUNC_1(VAR_2, "surface",
  FUNC_5(VAR_8, VAR_6->t->treeWidget),
  ((void*)0));
 FUNC_3(&VAR_7);

 FUNC_0(VAR_6->t, VAR_3, VAR_4, VAR_2);
}
