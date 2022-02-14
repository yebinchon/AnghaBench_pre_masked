
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; void* key; struct TYPE_5__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_6__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (void*,char*) ;

void FUNC_4 (entity_t *VAR_0, char *VAR_1, char *VAR_2)
{
 epair_t *VAR_3;

 for (VAR_3=VAR_0->epairs ; VAR_3 ; VAR_3=VAR_3->next)
  if (!FUNC_3 (VAR_3->key, VAR_1) )
  {
   FUNC_0(VAR_3->value);
   VAR_3->value = FUNC_2(VAR_2);
   return;
  }
 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->next = VAR_0->epairs;
 VAR_0->epairs = VAR_3;
 VAR_3->key = FUNC_2(VAR_1);
 VAR_3->value = FUNC_2(VAR_2);
}
