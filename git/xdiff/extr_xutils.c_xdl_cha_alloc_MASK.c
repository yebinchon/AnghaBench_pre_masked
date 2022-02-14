
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nsize; int isize; TYPE_2__* ancur; TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ chastore_t ;
struct TYPE_5__ {scalar_t__ icurr; struct TYPE_5__* next; } ;
typedef TYPE_2__ chanode_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void *FUNC_1(chastore_t *VAR_0) {
 chanode_t *VAR_1;
 void *VAR_2;

 if (!(VAR_1 = VAR_0->ancur) || VAR_1->icurr == VAR_0->nsize) {
  if (!(VAR_1 = (chanode_t *) FUNC_0(sizeof(chanode_t) + VAR_0->nsize))) {

   return ((void*)0);
  }
  VAR_1->icurr = 0;
  VAR_1->next = ((void*)0);
  if (VAR_0->tail)
   VAR_0->tail->next = VAR_1;
  if (!VAR_0->head)
   VAR_0->head = VAR_1;
  VAR_0->tail = VAR_1;
  VAR_0->ancur = VAR_1;
 }

 VAR_2 = (char *) VAR_1 + sizeof(chanode_t) + VAR_1->icurr;
 VAR_1->icurr += VAR_0->isize;

 return VAR_2;
}
