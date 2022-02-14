
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* NumRows ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ uiTableModelHandler ;
typedef int uiTableModel ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (int *) ;

int FUNC_2(uiTableModel *VAR_0)
{
 uiTableModelHandler *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 return (*(VAR_1->NumRows))(VAR_1, VAR_0);
}
