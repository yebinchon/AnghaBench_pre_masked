
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ProcessField ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE* VAR_0, ProcessField* VAR_1, const char* VAR_2) {
   FUNC_0(VAR_0, "%s=", VAR_2);
   const char* VAR_3 = "";
   for (int VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {

      FUNC_0(VAR_0, "%s%d", VAR_3, (int) VAR_1[VAR_4]-1);
      VAR_3 = " ";
   }
   FUNC_0(VAR_0, "\n");
}
