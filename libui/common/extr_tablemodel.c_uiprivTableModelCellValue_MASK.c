
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiTableValue ;
struct TYPE_4__ {int * (* CellValue ) (TYPE_1__*,int *,int,int) ;} ;
typedef TYPE_1__ uiTableModelHandler ;
typedef int uiTableModel ;


 int * FUNC_0 (TYPE_1__*,int *,int,int) ;
 TYPE_1__* FUNC_1 (int *) ;

uiTableValue *FUNC_2(uiTableModel *VAR_0, int VAR_1, int VAR_2)
{
 uiTableModelHandler *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 return (*(VAR_3->CellValue))(VAR_3, VAR_0, VAR_1, VAR_2);
}
