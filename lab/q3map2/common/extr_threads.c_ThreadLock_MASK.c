
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_3__ {int lock; int a_mutex; int * owner; int cond; } ;
typedef TYPE_1__ pt_mutex_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;

void FUNC_5( void ){
 pt_mutex_t *VAR_2 = &VAR_0;

 if ( !VAR_1 ) {
  return;
 }

 FUNC_2( &VAR_2->a_mutex );
 if ( FUNC_1( FUNC_4(), (pthread_t)&VAR_2->owner ) ) {
  VAR_2->lock++;
 }
 else
 {
  if ( ( !VAR_2->owner ) && ( VAR_2->lock == 0 ) ) {
   VAR_2->owner = (pthread_t *)FUNC_4();
   VAR_2->lock = 1;
  }
  else
  {
   while ( 1 )
   {
    FUNC_0( &VAR_2->cond, &VAR_2->a_mutex );
    if ( ( !VAR_2->owner ) && ( VAR_2->lock == 0 ) ) {
     VAR_2->owner = (pthread_t *)FUNC_4();
     VAR_2->lock = 1;
     break;
    }
   }
  }
 }
 FUNC_3( &VAR_2->a_mutex );
}
