
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int items; int ** array; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

Object* FUNC_2(Vector* VAR_0, int VAR_1) {
   FUNC_1(VAR_1 >= 0 && VAR_1 < VAR_0->items);
   FUNC_1(FUNC_0(VAR_0));
   Object* VAR_2 = VAR_0->array[VAR_1];

   VAR_0->items--;
   for (int VAR_3 = VAR_1; VAR_3 < VAR_0->items; VAR_3++)
      VAR_0->array[VAR_3] = VAR_0->array[VAR_3+1];

   FUNC_1(FUNC_0(VAR_0));
   return VAR_2;
}
