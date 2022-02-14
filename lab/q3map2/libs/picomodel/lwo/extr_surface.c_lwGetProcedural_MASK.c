
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_5__ {int data; int name; void** value; void* axis; } ;
struct TYPE_6__ {TYPE_1__ proc; } ;
struct TYPE_7__ {TYPE_2__ param; int tmap; } ;
typedef TYPE_3__ lwTexture ;






 int VAR_0 ;
 int FUNC_0 (int *,unsigned short,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned short) ;
 int FUNC_8 (int *,unsigned short,int *) ;
 int FUNC_9 (int) ;

int FUNC_10( picoMemStream_t *VAR_1, int VAR_2, lwTexture *VAR_3 ){
 unsigned int VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1( VAR_1 );
 VAR_4 = FUNC_5( VAR_1 );
 VAR_5 = FUNC_4( VAR_1 );
 if ( 0 > FUNC_6() ) {
  return 0;
 }

 while ( 1 ) {
  VAR_5 += VAR_5 & 1;
  FUNC_9( 0 );

  switch ( VAR_4 ) {
  case 129:
   if ( !FUNC_8( VAR_1, VAR_5, &VAR_3->tmap ) ) {
    return 0;
   }
   break;

  case 131:
   VAR_3->param.proc.axis = FUNC_4( VAR_1 );
   break;

  case 128:
   VAR_3->param.proc.value[ 0 ] = FUNC_2( VAR_1 );
   if ( VAR_5 >= 8 ) {
    VAR_3->param.proc.value[ 1 ] = FUNC_2( VAR_1 );
   }
   if ( VAR_5 >= 12 ) {
    VAR_3->param.proc.value[ 2 ] = FUNC_2( VAR_1 );
   }
   break;

  case 130:
   VAR_3->param.proc.name = FUNC_3( VAR_1 );
   VAR_6 = FUNC_6();
   VAR_3->param.proc.data = FUNC_7( VAR_1, VAR_5 - VAR_6 );
   break;

  default:
   break;
  }



  VAR_6 = FUNC_6();
  if ( VAR_6 < 0 || VAR_6 > VAR_5 ) {
   return 0;
  }



  if ( VAR_6 < VAR_5 ) {
   FUNC_0( VAR_1, VAR_5 - VAR_6, VAR_0 );
  }



  if ( VAR_2 <= FUNC_1( VAR_1 ) - VAR_7 ) {
   break;
  }



  FUNC_9( 0 );
  VAR_4 = FUNC_5( VAR_1 );
  VAR_5 = FUNC_4( VAR_1 );
  if ( 6 != FUNC_6() ) {
   return 0;
  }
 }

 FUNC_9( FUNC_1( VAR_1 ) - VAR_7 );
 return 1;
}
