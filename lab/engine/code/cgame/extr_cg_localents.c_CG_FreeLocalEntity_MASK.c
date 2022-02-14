
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* prev; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_5__ {TYPE_2__* next; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1( localEntity_t *VAR_1 ) {
 if ( !VAR_1->prev ) {
  FUNC_0( "CG_FreeLocalEntity: not active" );
 }


 VAR_1->prev->next = VAR_1->next;
 VAR_1->next->prev = VAR_1->prev;


 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
}
