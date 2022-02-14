
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* events; int * functions; int * keys; } ;
typedef TYPE_1__ FunctionBar ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const FunctionBar* VAR_1, int VAR_2) {
   int VAR_3 = 0;
   for (int VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++) {
      VAR_3 += FUNC_0(VAR_1->keys[VAR_4]);
      VAR_3 += FUNC_0(VAR_1->functions[VAR_4]);
      if (VAR_2 < VAR_3) {
         return VAR_1->events[VAR_4];
      }
   }
   return VAR_0;
}
