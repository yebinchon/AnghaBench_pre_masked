
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lock; int a_mutex; int cond; int * owner; } ;
typedef TYPE_1__ pt_mutex_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3( void ){
 pt_mutex_t *VAR_2 = &VAR_0;

 if ( !VAR_1 ) {
  return;
 }

 FUNC_1( &VAR_2->a_mutex );
 VAR_2->lock--;

 if ( VAR_2->lock == 0 ) {
  VAR_2->owner = ((void*)0);
  FUNC_0( &VAR_2->cond );
 }

 FUNC_2( &VAR_2->a_mutex );
}
