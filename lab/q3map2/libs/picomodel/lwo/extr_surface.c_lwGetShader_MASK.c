
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_5__ {int data; void* name; void* flags; void* ord; } ;
typedef TYPE_1__ lwPlugin ;


 unsigned int VAR_0 ;

 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned short,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned short) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;

lwPlugin *FUNC_10( picoMemStream_t *VAR_2, int VAR_3 ){
 lwPlugin *VAR_4;
 unsigned int VAR_5;
 unsigned short VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_0( 1, sizeof( lwPlugin ) );
 if ( !VAR_4 ) {
  return ((void*)0);
 }

 VAR_9 = FUNC_2( VAR_2 );
 FUNC_9( 0 );
 VAR_7 = FUNC_4( VAR_2 );
 VAR_4->ord = FUNC_3( VAR_2 );
 VAR_5 = FUNC_5( VAR_2 );
 VAR_6 = FUNC_4( VAR_2 );
 if ( 0 > FUNC_6() ) {
  goto Fail;
 }

 while ( VAR_7 > 0 ) {
  VAR_6 += VAR_6 & 1;
  VAR_7 -= VAR_6;
  if ( VAR_5 == VAR_0 ) {
   VAR_4->flags = FUNC_4( VAR_2 );
   break;
  }
  else {
   FUNC_1( VAR_2, VAR_6, VAR_1 );
   VAR_5 = FUNC_5( VAR_2 );
   VAR_6 = FUNC_4( VAR_2 );
  }
 }

 VAR_5 = FUNC_5( VAR_2 );
 VAR_6 = FUNC_4( VAR_2 );
 if ( 0 > FUNC_6() ) {
  goto Fail;
 }

 while ( 1 ) {
  VAR_6 += VAR_6 & 1;
  FUNC_9( 0 );

  switch ( VAR_5 ) {
  case 128:
   VAR_4->name = FUNC_3( VAR_2 );
   VAR_8 = FUNC_6();
   VAR_4->data = FUNC_7( VAR_2, VAR_6 - VAR_8 );
   break;

  default:
   break;
  }



  VAR_8 = FUNC_6();
  if ( VAR_8 < 0 || VAR_8 > VAR_6 ) {
   goto Fail;
  }



  if ( VAR_8 < VAR_6 ) {
   FUNC_1( VAR_2, VAR_6 - VAR_8, VAR_1 );
  }



  if ( VAR_3 <= FUNC_2( VAR_2 ) - VAR_9 ) {
   break;
  }



  FUNC_9( 0 );
  VAR_5 = FUNC_5( VAR_2 );
  VAR_6 = FUNC_4( VAR_2 );
  if ( 6 != FUNC_6() ) {
   goto Fail;
  }
 }

 FUNC_9( FUNC_2( VAR_2 ) - VAR_9 );
 return VAR_4;

Fail:
 FUNC_8( VAR_4 );
 return ((void*)0);
}
