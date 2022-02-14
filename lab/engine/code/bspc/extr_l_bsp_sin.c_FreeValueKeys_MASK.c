
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* key; struct TYPE_5__* value; struct TYPE_5__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_6__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(entity_t *VAR_0)
{
 epair_t *VAR_1,*VAR_2;

 for (VAR_1=VAR_0->epairs ; VAR_1 ; VAR_1=VAR_2)
 {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->value);
  FUNC_0(VAR_1->key);
  FUNC_0(VAR_1);
 }
 VAR_0->epairs = ((void*)0);
}
