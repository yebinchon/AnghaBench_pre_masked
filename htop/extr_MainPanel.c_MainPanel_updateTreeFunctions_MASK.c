
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MainPanel ;
typedef int FunctionBar ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;

void FUNC_3(MainPanel* VAR_0, bool VAR_1) {
   FunctionBar* VAR_2 = FUNC_2(VAR_0);
   if (VAR_1) {
      FUNC_0(VAR_2, FUNC_1(5), "Sorted");
      FUNC_0(VAR_2, FUNC_1(6), "Collap");
   } else {
      FUNC_0(VAR_2, FUNC_1(5), "Tree  ");
      FUNC_0(VAR_2, FUNC_1(6), "SortBy");
   }
}
