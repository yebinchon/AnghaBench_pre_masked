
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int items; int type; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (int) ;

void FUNC_4(Vector* VAR_0, void* VAR_1) {
   Object* VAR_2 = VAR_1;
   FUNC_3(FUNC_0((Object*)VAR_2, VAR_0->type));
   FUNC_3(FUNC_1(VAR_0));
   int VAR_3 = VAR_0->items;
   FUNC_2(VAR_0, VAR_0->items, VAR_2);
   FUNC_3(VAR_0->items == VAR_3+1); (void)(VAR_3);
   FUNC_3(FUNC_1(VAR_0));
}
