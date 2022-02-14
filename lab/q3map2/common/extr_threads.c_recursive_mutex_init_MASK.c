
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_3__ {scalar_t__ lock; int cond; int a_mutex; int * owner; } ;
typedef TYPE_1__ pt_mutex_t ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void FUNC_3( pthread_mutexattr_t VAR_1 ){
 pt_mutex_t *VAR_2 = &VAR_0;

 VAR_2->owner = ((void*)0);
 if ( FUNC_2( &VAR_2->a_mutex, &VAR_1 ) != 0 ) {
  FUNC_0( "pthread_mutex_init failed\n" );
 }
 if ( FUNC_1( &VAR_2->cond, ((void*)0) ) != 0 ) {
  FUNC_0( "pthread_cond_init failed\n" );
 }

 VAR_2->lock = 0;
}
