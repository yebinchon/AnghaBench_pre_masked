
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backgroundColumn; } ;
typedef TYPE_1__ uiTable ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;


 int FUNC_0 (int *,int *,int,int *,char*,char*) ;

__attribute__((used)) static void FUNC_1(uiTable *VAR_0, GtkTreeModel *VAR_1, GtkTreeIter *VAR_2, GtkCellRenderer *VAR_3)
{
 if (VAR_0->backgroundColumn != -1)
  FUNC_0(VAR_1, VAR_2, VAR_0->backgroundColumn,
   VAR_3, "cell-background-rgba", "cell-background-set");
}
