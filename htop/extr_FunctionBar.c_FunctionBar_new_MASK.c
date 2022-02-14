
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int staticData; char** keys; int* events; int size; void** functions; } ;
typedef TYPE_1__ FunctionBar ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (char const* const) ;

FunctionBar* FUNC_2(const char* const* VAR_3, const char* const* VAR_4, const int* VAR_5) {
   FunctionBar* VAR_6 = FUNC_0(1, sizeof(FunctionBar));
   VAR_6->functions = FUNC_0(16, sizeof(char*));
   if (!VAR_3) {
      VAR_3 = VAR_2;
   }
   for (int VAR_7 = 0; VAR_7 < 15 && VAR_3[VAR_7]; VAR_7++) {
      VAR_6->functions[VAR_7] = FUNC_1(VAR_3[VAR_7]);
   }
   if (VAR_4 && VAR_5) {
      VAR_6->staticData = 0;
      VAR_6->keys = FUNC_0(15, sizeof(char*));
      VAR_6->events = FUNC_0(15, sizeof(int));
      int VAR_8 = 0;
      while (VAR_8 < 15 && VAR_3[VAR_8]) {
         VAR_6->keys[VAR_8] = FUNC_1(VAR_4[VAR_8]);
         VAR_6->events[VAR_8] = VAR_5[VAR_8];
         VAR_8++;
      }
      VAR_6->size = VAR_8;
   } else {
      VAR_6->staticData = 1;
      VAR_6->keys = (char**) VAR_1;
      VAR_6->events = VAR_0;
      VAR_6->size = 10;
   }
   return VAR_6;
}
