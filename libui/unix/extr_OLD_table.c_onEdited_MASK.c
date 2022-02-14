
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* mh; } ;
typedef TYPE_2__ uiTableModel ;
struct tablePart {TYPE_1__* tv; } ;
struct TYPE_8__ {int (* SetCellValue ) (TYPE_4__*,TYPE_2__*,int,int,void const*) ;} ;
struct TYPE_6__ {TYPE_2__* model; } ;
typedef int GtkTreePath ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int,int,void const*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(struct tablePart *VAR_0, int VAR_1, const char *VAR_2, const void *VAR_3)
{
 GtkTreePath *VAR_4;
 int VAR_5;
 uiTableModel *VAR_6;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_1(VAR_4)[0];
 FUNC_0(VAR_4);
 VAR_6 = VAR_0->tv->model;
 (*(VAR_6->mh->SetCellValue))(VAR_6->mh, VAR_6, VAR_5, VAR_1, VAR_3);

 FUNC_4(VAR_6, VAR_5);
}
