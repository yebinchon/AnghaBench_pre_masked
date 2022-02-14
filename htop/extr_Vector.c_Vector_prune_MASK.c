
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int items; scalar_t__* array; scalar_t__ owner; } ;
typedef TYPE_1__ Vector ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(Vector* VAR_0) {
   FUNC_2(FUNC_1(VAR_0));
   if (VAR_0->owner) {
      for (int VAR_1 = 0; VAR_1 < VAR_0->items; VAR_1++)
         if (VAR_0->array[VAR_1]) {
            FUNC_0(VAR_0->array[VAR_1]);

         }
   }
   VAR_0->items = 0;
}
