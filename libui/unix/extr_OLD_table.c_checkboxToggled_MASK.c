
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* mh; } ;
typedef TYPE_2__ uiTableModel ;
struct tablePart {int valueColumn; TYPE_1__* tv; } ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
struct TYPE_7__ {void* (* CellValue ) (TYPE_3__*,TYPE_2__*,int,int ) ;} ;
struct TYPE_5__ {TYPE_2__* model; } ;
typedef int GtkTreePath ;
typedef int GtkCellRendererToggle ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (struct tablePart*,int ,int *,int ) ;
 void* FUNC_4 (TYPE_3__*,TYPE_2__*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void FUNC_7(GtkCellRendererToggle *VAR_0, gchar *VAR_1, gpointer VAR_2)
{
 struct tablePart *VAR_3 = (struct tablePart *) VAR_2;
 GtkTreePath *VAR_4;
 int VAR_5;
 uiTableModel *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_1(VAR_4)[0];
 FUNC_0(VAR_4);
 VAR_6 = VAR_3->tv->model;
 VAR_7 = (*(VAR_6->mh->CellValue))(VAR_6->mh, VAR_6, VAR_5, VAR_3->valueColumn);
 VAR_8 = !FUNC_6(VAR_7);
 FUNC_3(VAR_3, VAR_3->valueColumn, VAR_1, FUNC_5(VAR_8));
}
