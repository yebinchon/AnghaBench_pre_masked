
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ name; } ;
typedef int ProcessField ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (char*,char,int*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(ProcessField* VAR_3, int* VAR_4, const char* VAR_5) {
   char* VAR_6 = FUNC_2(VAR_5);
   int VAR_7;
   char** VAR_8 = FUNC_1(VAR_6, ' ', &VAR_7);
   FUNC_4(VAR_6);
   int VAR_9, VAR_10;
   *VAR_4 = 0;
   for (VAR_10 = 0, VAR_9 = 0; VAR_9 < VAR_1 && VAR_8[VAR_9]; VAR_9++) {

      int VAR_11 = FUNC_3(VAR_8[VAR_9]) + 1;
      if (VAR_11 > 0 && VAR_2[VAR_11].name && VAR_11 < VAR_1) {
         VAR_3[VAR_10] = VAR_11;
         *VAR_4 |= VAR_2[VAR_11].flags;
         VAR_10++;
      }
   }
   VAR_3[VAR_10] = VAR_0;
   FUNC_0(VAR_8);
}
