
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ lwNode ;
typedef scalar_t__ (* ListCompareFunc ) (TYPE_1__*,TYPE_1__*) ;



void FUNC_0( void **VAR_0, void *VAR_1, ListCompareFunc VAR_2 ){
 lwNode **VAR_3, *VAR_4, *VAR_5, *VAR_6;

 if ( !*VAR_0 ) {
  *VAR_0 = VAR_1;
  return;
 }

 VAR_3 = ( lwNode ** ) VAR_0;
 VAR_4 = ( lwNode * ) VAR_1;
 VAR_5 = *VAR_3;
 VAR_6 = ((void*)0);

 while ( VAR_5 ) {
  if ( 0 < VAR_2( VAR_5, VAR_4 ) ) {
   break;
  }
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
 }

 if ( !VAR_6 ) {
  *VAR_3 = VAR_4;
  VAR_5->prev = VAR_4;
  VAR_4->next = VAR_5;
 }
 else if ( !VAR_5 ) {
  VAR_6->next = VAR_4;
  VAR_4->prev = VAR_6;
 }
 else {
  VAR_4->next = VAR_5;
  VAR_4->prev = VAR_6;
  VAR_6->next = VAR_4;
  VAR_5->prev = VAR_4;
 }
}
