
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableValue ;
struct checkboxColumnParams {int m; int modelColumn; } ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererToggle ;
typedef int GValue ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(GtkCellRendererToggle *VAR_1, gchar *VAR_2, gpointer VAR_3)
{
 struct checkboxColumnParams *VAR_4 = (struct checkboxColumnParams *) VAR_3;
 GValue VAR_5 = VAR_0;
 int VAR_6;
 uiTableValue *VAR_7;
 GtkTreePath *VAR_8;
 GtkTreeIter VAR_9;

 VAR_8 = FUNC_8(VAR_2);
 FUNC_5(FUNC_1(VAR_4->m), &VAR_9, VAR_8);
 FUNC_7(VAR_8);
 FUNC_6(FUNC_1(VAR_4->m), &VAR_9, VAR_4->modelColumn, &VAR_5);
 VAR_6 = FUNC_3(&VAR_5);
 FUNC_4(&VAR_5);
 VAR_7 = FUNC_11(!VAR_6);
 FUNC_9(VAR_4->m, VAR_4->modelColumn, VAR_2, VAR_7, ((void*)0));
 FUNC_10(VAR_7);


 FUNC_2(((void*)0), FUNC_0(VAR_1), FUNC_1(VAR_4->m), &VAR_9, VAR_3);
}
