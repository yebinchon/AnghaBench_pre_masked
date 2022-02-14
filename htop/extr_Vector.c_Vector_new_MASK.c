
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int growthRate; int arraySize; int owner; int * type; scalar_t__ items; int ** array; } ;
typedef TYPE_1__ Vector ;
typedef int ObjectClass ;
typedef int Object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;

Vector* FUNC_2(ObjectClass* VAR_1, bool VAR_2, int VAR_3) {
   Vector* VAR_4;

   if (VAR_3 == VAR_0)
      VAR_3 = 10;
   VAR_4 = FUNC_1(sizeof(Vector));
   VAR_4->growthRate = VAR_3;
   VAR_4->array = (Object**) FUNC_0(VAR_3, sizeof(Object*));
   VAR_4->arraySize = VAR_3;
   VAR_4->items = 0;
   VAR_4->type = VAR_1;
   VAR_4->owner = VAR_2;
   return VAR_4;
}
