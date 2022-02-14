
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiTableValueType ;
struct TYPE_4__ {int (* ColumnType ) (TYPE_1__*,int *,int) ;} ;
typedef TYPE_1__ uiTableModelHandler ;
typedef int uiTableModel ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 TYPE_1__* FUNC_1 (int *) ;

uiTableValueType FUNC_2(uiTableModel *VAR_0, int VAR_1)
{
 uiTableModelHandler *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 return (*(VAR_2->ColumnType))(VAR_2, VAR_0, VAR_1);
}
