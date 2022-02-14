
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uiImage ;
struct tablePart {int type; int colorColumn; TYPE_1__* tv; int valueColumn; int textColumn; int imageColumn; } ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
struct TYPE_2__ {int backgroundColumn; int treeWidget; } ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkCellRenderer ;
typedef int GValue ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int *,char*,char*) ;
 int FUNC_1 (int *,char*,int,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *) ;





 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(GtkTreeViewColumn *VAR_1, GtkCellRenderer *VAR_2, GtkTreeModel *VAR_3, GtkTreeIter *VAR_4, gpointer VAR_5)
{
 struct tablePart *VAR_6 = (struct tablePart *) VAR_5;
 GValue VAR_7 = VAR_0;
 const gchar *VAR_8;
 uiImage *VAR_9;
 int VAR_10;

 switch (VAR_6->type) {
 case 128:
  FUNC_6(VAR_3, VAR_4, VAR_6->textColumn, &VAR_7);
  VAR_8 = FUNC_4(&VAR_7);
  FUNC_1(VAR_2, "text", VAR_8, ((void*)0));
  if (VAR_6->colorColumn != -1)
   FUNC_0(VAR_3, VAR_4,
    VAR_6->colorColumn,
    VAR_2, "foreground-rgba", "foreground-set");
  break;
 case 130:

  FUNC_6(VAR_3, VAR_4, VAR_6->imageColumn, &VAR_7);
  VAR_9 = (uiImage *) FUNC_3(&VAR_7);
  FUNC_1(VAR_2, "surface",
   FUNC_7(VAR_9, VAR_6->tv->treeWidget),
   ((void*)0));
  break;
 case 132:
  FUNC_6(VAR_3, VAR_4, VAR_6->textColumn, &VAR_7);
  VAR_8 = FUNC_4(&VAR_7);
  FUNC_1(VAR_2, "text", VAR_8, ((void*)0));
  break;
 case 131:
  FUNC_6(VAR_3, VAR_4, VAR_6->valueColumn, &VAR_7);
  FUNC_1(VAR_2, "active", FUNC_2(&VAR_7) != 0, ((void*)0));
  break;
 case 129:
  FUNC_6(VAR_3, VAR_4, VAR_6->valueColumn, &VAR_7);
  VAR_10 = FUNC_2(&VAR_7);
  if (VAR_10 == -1) {

  } else
   FUNC_1(VAR_2,
    "pulse", -1,
    "value", VAR_10,
    ((void*)0));
  break;
 }
 FUNC_5(&VAR_7);

 if (VAR_6->tv->backgroundColumn != -1)
  FUNC_0(VAR_3, VAR_4,
   VAR_6->tv->backgroundColumn,
   VAR_2, "cell-background-rgba", "cell-background-set");
}
