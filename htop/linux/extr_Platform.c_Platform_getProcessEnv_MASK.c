
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,int,char*,int ) ;

char* FUNC_6(pid_t VAR_0) {
   char VAR_1[32+1];
   FUNC_5(VAR_1, 32, "/proc/%d/environ", VAR_0);
   FILE* VAR_2 = FUNC_1(VAR_1, "r");
   char *VAR_3 = ((void*)0);
   if (VAR_2) {
      size_t VAR_4 = 4096, VAR_5 = 0, VAR_6;
      VAR_3 = FUNC_3(VAR_4);
      while (VAR_3 && (VAR_6 = FUNC_2(VAR_3+VAR_5, 1, VAR_4-VAR_5, VAR_2)) > 0) {
         VAR_5 += VAR_6;
         VAR_4 *= 2;
         VAR_3 = FUNC_4(VAR_3, VAR_4);
      }
      FUNC_0(VAR_2);
      if (VAR_5 < 2 || VAR_3[VAR_5-1] || VAR_3[VAR_5-2]) {
         if (VAR_5 + 2 < VAR_4) {
            VAR_3 = FUNC_4(VAR_3, VAR_4+2);
         }
         VAR_3[VAR_5] = 0;
         VAR_3[VAR_5+1] = 0;
      }
   }
   return VAR_3;
}
