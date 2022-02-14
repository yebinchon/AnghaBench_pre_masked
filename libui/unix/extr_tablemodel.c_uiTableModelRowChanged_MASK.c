
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiTableModel ;
struct TYPE_3__ {int user_data; int stamp; } ;
typedef int GtkTreePath ;
typedef TYPE_1__ GtkTreeIter ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int) ;

void FUNC_5(uiTableModel *VAR_1, int VAR_2)
{
 GtkTreePath *VAR_3;
 GtkTreeIter VAR_4;

 VAR_3 = FUNC_4(VAR_2, -1);
 VAR_4.stamp = VAR_0;
 VAR_4.user_data = FUNC_0(VAR_2);
 FUNC_2(FUNC_1(VAR_1), VAR_3, &VAR_4);
 FUNC_3(VAR_3);
}
