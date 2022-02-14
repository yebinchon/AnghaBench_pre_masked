
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* columns; } ;
struct TYPE_4__ {int len; int* modes; } ;
typedef TYPE_2__ Settings ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char*,char,int*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int* FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(Settings* VAR_0, char* VAR_1, int VAR_2) {
   char* VAR_3 = FUNC_2(VAR_1);
   int VAR_4;
   char** VAR_5 = FUNC_1(VAR_3, ' ', &VAR_4);
   FUNC_4(VAR_3);
   int VAR_6 = 0;
   for (int VAR_7 = 0; VAR_5[VAR_7]; VAR_7++) {
      VAR_6++;
   }
   VAR_0->columns[VAR_2].len = VAR_6;
   int* VAR_8 = FUNC_5(VAR_6, sizeof(int));
   for (int VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
      VAR_8[VAR_9] = FUNC_3(VAR_5[VAR_9]);
   }
   FUNC_0(VAR_5);
   VAR_0->columns[VAR_2].modes = VAR_8;
}
