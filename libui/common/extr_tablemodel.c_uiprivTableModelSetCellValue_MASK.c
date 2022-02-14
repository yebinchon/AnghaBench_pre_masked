
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiTableValue ;
struct TYPE_4__ {int (* SetCellValue ) (TYPE_1__*,int *,int,int,int const*) ;} ;
typedef TYPE_1__ uiTableModelHandler ;
typedef int uiTableModel ;


 int FUNC_0 (TYPE_1__*,int *,int,int,int const*) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2(uiTableModel *VAR_0, int VAR_1, int VAR_2, const uiTableValue *VAR_3)
{
 uiTableModelHandler *VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 (*(VAR_4->SetCellValue))(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
}
