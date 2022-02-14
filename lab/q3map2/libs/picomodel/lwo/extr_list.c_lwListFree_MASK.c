
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ lwNode ;
typedef int (* ListFreeFunc ) (TYPE_1__*) ;



void FUNC_0( void *VAR_0, ListFreeFunc VAR_1 ){
 lwNode *VAR_2, *VAR_3;

 VAR_2 = ( lwNode * ) VAR_0;
 while ( VAR_2 ) {
  VAR_3 = VAR_2->next;
  VAR_1( VAR_2 );
  VAR_2 = VAR_3;
 }
}
