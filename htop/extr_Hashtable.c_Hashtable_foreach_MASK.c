
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; TYPE_1__** buckets; } ;
struct TYPE_5__ {struct TYPE_5__* next; int value; int key; } ;
typedef int (* Hashtable_PairFunction ) (int ,int ,void*) ;
typedef TYPE_1__ HashtableItem ;
typedef TYPE_2__ Hashtable ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(Hashtable* VAR_0, Hashtable_PairFunction VAR_1, void* VAR_2) {
   FUNC_1(FUNC_0(VAR_0));
   for (int VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
      HashtableItem* VAR_4 = VAR_0->buckets[VAR_3];
      while (VAR_4 != ((void*)0)) {
         VAR_1(VAR_4->key, VAR_4->value, VAR_2);
         VAR_4 = VAR_4->next;
      }
   }
   FUNC_1(FUNC_0(VAR_0));
}
