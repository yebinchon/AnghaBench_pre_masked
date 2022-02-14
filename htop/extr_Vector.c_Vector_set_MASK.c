
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int items; int ** array; scalar_t__ owner; int type; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

void FUNC_5(Vector* VAR_0, int VAR_1, void* VAR_2) {
   Object* VAR_3 = VAR_2;
   FUNC_4(VAR_1 >= 0);
   FUNC_4(FUNC_1((Object*)VAR_3, VAR_0->type));
   FUNC_4(FUNC_3(VAR_0));

   FUNC_2(VAR_0);
   if (VAR_1 >= VAR_0->items) {
      VAR_0->items = VAR_1+1;
   } else {
      if (VAR_0->owner) {
         Object* VAR_4 = VAR_0->array[VAR_1];
         FUNC_4 (VAR_4 != ((void*)0));
         if (VAR_0->owner) {
            FUNC_0(VAR_4);
         }
      }
   }
   VAR_0->array[VAR_1] = VAR_3;
   FUNC_4(FUNC_3(VAR_0));
}
