
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* prev; struct TYPE_2__* next; } ;
typedef TYPE_1__ lwNode ;



void FUNC_0( void **VAR_0, void *VAR_1 ){
 lwNode *VAR_2, *VAR_3;

 VAR_2 = *( ( lwNode ** ) VAR_0 );
 if ( !VAR_2 ) {
  *VAR_0 = VAR_1;
  return;
 }
 while ( VAR_2 ) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
 VAR_3->next = ( lwNode * ) VAR_1;
 ( ( lwNode * ) VAR_1 )->prev = VAR_3;
}
