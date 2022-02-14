
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int items; int ** array; int type; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

void FUNC_4(Vector* VAR_0, int VAR_1, void* VAR_2) {
   Object* VAR_3 = VAR_2;
   FUNC_3(VAR_1 >= 0);
   FUNC_3(FUNC_0(VAR_3, VAR_0->type));
   FUNC_3(FUNC_2(VAR_0));

   if (VAR_1 > VAR_0->items) {
      VAR_1 = VAR_0->items;
   }

   FUNC_1(VAR_0);

   for (int VAR_4 = VAR_0->items; VAR_4 > VAR_1; VAR_4--) {
      VAR_0->array[VAR_4] = VAR_0->array[VAR_4-1];
   }
   VAR_0->array[VAR_1] = VAR_3;
   VAR_0->items++;
   FUNC_3(FUNC_2(VAR_0));
}
