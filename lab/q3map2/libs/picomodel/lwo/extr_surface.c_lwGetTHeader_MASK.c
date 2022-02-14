
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_4__ {int eindex; int val; } ;
struct TYPE_5__ {void* axis; void* negative; void* enabled; TYPE_1__ opacity; void* opac_type; void* chan; int ord; } ;
typedef TYPE_2__ lwTexture ;







 int VAR_0 ;
 int FUNC_0 (int *,unsigned short,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

int FUNC_9( picoMemStream_t *VAR_1, int VAR_2, lwTexture *VAR_3 ){
 unsigned int VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7;




 FUNC_8( 0 );
 VAR_6 = FUNC_1( VAR_1 );



 VAR_3->ord = FUNC_3( VAR_1 );



 VAR_4 = FUNC_5( VAR_1 );
 VAR_5 = FUNC_4( VAR_1 );
 if ( 0 > FUNC_7() ) {
  return 0;
 }



 while ( 1 ) {
  VAR_5 += VAR_5 & 1;
  FUNC_8( 0 );

  switch ( VAR_4 ) {
  case 131:
   VAR_3->chan = FUNC_5( VAR_1 );
   break;

  case 128:
   VAR_3->opac_type = FUNC_4( VAR_1 );
   VAR_3->opacity.val = FUNC_2( VAR_1 );
   VAR_3->opacity.eindex = FUNC_6( VAR_1 );
   break;

  case 130:
   VAR_3->enabled = FUNC_4( VAR_1 );
   break;

  case 129:
   VAR_3->negative = FUNC_4( VAR_1 );
   break;

  case 132:
   VAR_3->axis = FUNC_4( VAR_1 );
   break;

  default:
   break;
  }



  VAR_7 = FUNC_7();
  if ( VAR_7 < 0 || VAR_7 > VAR_5 ) {
   return 0;
  }



  if ( VAR_7 < VAR_5 ) {
   FUNC_0( VAR_1, VAR_5 - VAR_7, VAR_0 );
  }



  if ( VAR_2 <= FUNC_1( VAR_1 ) - VAR_6 ) {
   break;
  }



  FUNC_8( 0 );
  VAR_4 = FUNC_5( VAR_1 );
  VAR_5 = FUNC_4( VAR_1 );
  if ( 6 != FUNC_7() ) {
   return 0;
  }
 }

 FUNC_8( FUNC_1( VAR_1 ) - VAR_6 );
 return 1;
}
