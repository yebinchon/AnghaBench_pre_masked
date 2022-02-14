
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; } ;
typedef TYPE_1__ chastore_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ chanode_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(chastore_t *VAR_0) {
 chanode_t *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->head; (VAR_2 = VAR_1) != ((void*)0);) {
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
}
