
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int size; scalar_t__ owner; int items; TYPE_1__** buckets; } ;
struct TYPE_6__ {unsigned int key; struct TYPE_6__* next; void* value; } ;
typedef TYPE_1__ HashtableItem ;
typedef TYPE_2__ Hashtable ;


 TYPE_1__* FUNC_0 (unsigned int,void*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

void FUNC_4(Hashtable* VAR_0, unsigned int VAR_1, void* VAR_2) {
   unsigned int VAR_3 = VAR_1 % VAR_0->size;
   HashtableItem** VAR_4 = &(VAR_0->buckets[VAR_3]);
   while (1)
      if (*VAR_4 == ((void*)0)) {
         *VAR_4 = FUNC_0(VAR_1, VAR_2);
         VAR_0->items++;
         break;
      } else if ((*VAR_4)->key == VAR_1) {
         if (VAR_0->owner)
            FUNC_3((*VAR_4)->value);
         (*VAR_4)->value = VAR_2;
         break;
      } else
         VAR_4 = &((*VAR_4)->next);
   FUNC_2(FUNC_1(VAR_0));
}
