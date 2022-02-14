
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int items; int arraySize; int growthRate; int ** array; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int **,int) ;

__attribute__((used)) static void FUNC_3(Vector* VAR_0) {
   FUNC_1(FUNC_0(VAR_0));
   if (VAR_0->items >= VAR_0->arraySize) {


      VAR_0->arraySize = VAR_0->items + VAR_0->growthRate;
      VAR_0->array = (Object**) FUNC_2(VAR_0->array, sizeof(Object*) * VAR_0->arraySize);


   }
   FUNC_1(FUNC_0(VAR_0));
}
