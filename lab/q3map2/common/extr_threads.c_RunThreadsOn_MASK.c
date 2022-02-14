
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int pthread_t ;
typedef int pthread_mutexattr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int *,int *,void*,void*) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_10( int VAR_12, qboolean VAR_13, void ( *VAR_14 )( int ) ){
 pthread_mutexattr_t VAR_15;
 pthread_t VAR_16[VAR_0];

 int VAR_17, VAR_18;
 int VAR_19 = 0;
 void *VAR_20;

 VAR_17 = FUNC_1();
 VAR_6 = VAR_13;

 VAR_3 = 0;
 VAR_5 = -1;
 VAR_11 = VAR_12;

 if ( VAR_4 == 1 ) {
  VAR_14( 0 );
 }
 else
 {
  VAR_10 = VAR_8;

  if ( VAR_6 ) {
   FUNC_9( VAR_9, ((void*)0) );
  }

  if ( FUNC_6( &VAR_15 ) != 0 ) {
   FUNC_0( "pthread_mutexattr_init failed" );
  }



  if ( FUNC_7( &VAR_15, VAR_1 ) != 0 )

  { FUNC_0( "pthread_mutexattr_settype failed" ); }
  FUNC_8( VAR_15 );

  for ( VAR_19 = 0 ; VAR_19 < VAR_4 ; VAR_19++ )
  {

   if ( FUNC_3( &VAR_16[VAR_19], ((void*)0), (void*)VAR_14, (void*)(uintptr_t)VAR_19 ) != 0 ) {
    FUNC_0( "pthread_create failed" );
   }
  }
  for ( VAR_19 = 0 ; VAR_19 < VAR_4 ; VAR_19++ )
  {
   if ( FUNC_4( VAR_16[VAR_19], &VAR_20 ) != 0 ) {
    FUNC_0( "pthread_join failed" );
   }
  }
  FUNC_5( &VAR_15 );
  VAR_10 = VAR_7;
 }

 VAR_18 = FUNC_1();
 if ( VAR_6 ) {
  FUNC_2( " (%i)\n", VAR_18 - VAR_17 );
 }
}
