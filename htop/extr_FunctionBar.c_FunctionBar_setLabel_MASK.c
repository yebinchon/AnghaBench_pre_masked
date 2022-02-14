
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* events; int * functions; } ;
typedef TYPE_1__ FunctionBar ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

void FUNC_2(FunctionBar* VAR_0, int VAR_1, const char* VAR_2) {
   for (int VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
      if (VAR_0->events[VAR_3] == VAR_1) {
         FUNC_0(VAR_0->functions[VAR_3]);
         VAR_0->functions[VAR_3] = FUNC_1(VAR_2);
         break;
      }
   }
}
