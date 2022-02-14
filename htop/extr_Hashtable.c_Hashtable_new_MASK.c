
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int owner; int ** buckets; scalar_t__ items; } ;
typedef int HashtableItem ;
typedef TYPE_1__ Hashtable ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (int) ;

Hashtable* FUNC_4(int VAR_0, bool VAR_1) {
   Hashtable* VAR_2;

   VAR_2 = FUNC_3(sizeof(Hashtable));
   VAR_2->items = 0;
   VAR_2->size = VAR_0;
   VAR_2->buckets = (HashtableItem**) FUNC_2(VAR_0, sizeof(HashtableItem*));
   VAR_2->owner = VAR_1;
   FUNC_1(FUNC_0(VAR_2));
   return VAR_2;
}
