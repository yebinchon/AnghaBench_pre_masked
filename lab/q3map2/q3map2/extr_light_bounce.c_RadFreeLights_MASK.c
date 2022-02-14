
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * w; struct TYPE_4__* next; } ;
typedef TYPE_1__ light_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2( void ){
 light_t *VAR_2, *VAR_3;



 for ( VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_3 )
 {
  VAR_3 = VAR_2->next;
  if ( VAR_2->w != ((void*)0) ) {
   FUNC_0( VAR_2->w );
  }
  FUNC_1( VAR_2 );
 }
 VAR_1 = 0;
 VAR_0 = ((void*)0);
}
