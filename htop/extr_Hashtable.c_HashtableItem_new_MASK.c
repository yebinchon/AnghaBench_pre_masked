
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int key; int * next; void* value; } ;
typedef TYPE_1__ HashtableItem ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static HashtableItem* FUNC_1(unsigned int VAR_0, void* VAR_1) {
   HashtableItem* VAR_2;

   VAR_2 = FUNC_0(sizeof(HashtableItem));
   VAR_2->key = VAR_0;
   VAR_2->value = VAR_1;
   VAR_2->next = ((void*)0);
   return VAR_2;
}
