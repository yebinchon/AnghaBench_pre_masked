
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableValue ;
struct textColumnParams {int m; int modelColumn; } ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(GtkCellRendererText *VAR_0, gchar *VAR_1, gchar *VAR_2, gpointer VAR_3)
{
 struct textColumnParams *VAR_4 = (struct textColumnParams *) VAR_3;
 uiTableValue *VAR_5;
 GtkTreeIter VAR_6;

 VAR_5 = FUNC_5(VAR_2);
 FUNC_2(VAR_4->m, VAR_4->modelColumn, VAR_1, VAR_5, &VAR_6);
 FUNC_4(VAR_5);

 FUNC_3(((void*)0), FUNC_0(VAR_0), FUNC_1(VAR_4->m), &VAR_6, VAR_3);
}
