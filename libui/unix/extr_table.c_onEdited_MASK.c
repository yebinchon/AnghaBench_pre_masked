
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableValue ;
typedef int uiTableModel ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,int,int,int const*) ;

__attribute__((used)) static void FUNC_6(uiTableModel *VAR_0, int VAR_1, const char *VAR_2, const uiTableValue *VAR_3, GtkTreeIter *VAR_4)
{
 GtkTreePath *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = FUNC_3(VAR_5)[0];
 if (VAR_4 != ((void*)0))
  FUNC_1(FUNC_0(VAR_0), VAR_4, VAR_5);
 FUNC_2(VAR_5);
 FUNC_5(VAR_0, VAR_6, VAR_1, VAR_3);
}
