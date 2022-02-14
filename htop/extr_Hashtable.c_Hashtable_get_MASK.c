
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int size; TYPE_1__** buckets; } ;
struct TYPE_5__ {unsigned int key; void* value; struct TYPE_5__* next; } ;
typedef TYPE_1__ HashtableItem ;
typedef TYPE_2__ Hashtable ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

inline void* FUNC_2(Hashtable* VAR_0, unsigned int VAR_1) {
   unsigned int VAR_2 = VAR_1 % VAR_0->size;
   HashtableItem* VAR_3 = VAR_0->buckets[VAR_2];
   while (1) {
      if (VAR_3 == ((void*)0)) {
         FUNC_1(FUNC_0(VAR_0));
         return ((void*)0);
      } else if (VAR_3->key == VAR_1) {
         FUNC_1(FUNC_0(VAR_0));
         return VAR_3->value;
      } else
         VAR_3 = VAR_3->next;
   }
}
