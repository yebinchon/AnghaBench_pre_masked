
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_10__ {void* eindex; void** val; } ;
struct TYPE_9__ {void* eindex; void** val; } ;
struct TYPE_8__ {void* eindex; void** val; } ;
struct TYPE_7__ {void* eindex; void** val; } ;
struct TYPE_11__ {void* coord_sys; int ref_object; TYPE_4__ falloff; void* fall_type; TYPE_3__ rotate; TYPE_2__ center; TYPE_1__ size; } ;
typedef TYPE_5__ lwTMap ;
 int VAR_0 ;
 int FUNC_0 (int *,unsigned short,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

int FUNC_9( picoMemStream_t *VAR_1, int VAR_2, lwTMap *VAR_3 ){
 unsigned int VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_1( VAR_1 );
 VAR_4 = FUNC_5( VAR_1 );
 VAR_5 = FUNC_4( VAR_1 );
 if ( 0 > FUNC_7() ) {
  return 0;
 }

 while ( 1 ) {
  VAR_5 += VAR_5 & 1;
  FUNC_8( 0 );

  switch ( VAR_4 ) {
  case 128:
   for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
    VAR_3->size.val[ VAR_8 ] = FUNC_2( VAR_1 );
   VAR_3->size.eindex = FUNC_6( VAR_1 );
   break;

  case 133:
   for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
    VAR_3->center.val[ VAR_8 ] = FUNC_2( VAR_1 );
   VAR_3->center.eindex = FUNC_6( VAR_1 );
   break;

  case 129:
   for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
    VAR_3->rotate.val[ VAR_8 ] = FUNC_2( VAR_1 );
   VAR_3->rotate.eindex = FUNC_6( VAR_1 );
   break;

  case 131:
   VAR_3->fall_type = FUNC_4( VAR_1 );
   for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
    VAR_3->falloff.val[ VAR_8 ] = FUNC_2( VAR_1 );
   VAR_3->falloff.eindex = FUNC_6( VAR_1 );
   break;

  case 130:
   VAR_3->ref_object = FUNC_3( VAR_1 );
   break;

  case 132:
   VAR_3->coord_sys = FUNC_4( VAR_1 );
   break;

  default:
   break;
  }



  VAR_6 = FUNC_7();
  if ( VAR_6 < 0 || VAR_6 > VAR_5 ) {
   return 0;
  }



  if ( VAR_6 < VAR_5 ) {
   FUNC_0( VAR_1, VAR_5 - VAR_6, VAR_0 );
  }



  if ( VAR_2 <= FUNC_1( VAR_1 ) - VAR_7 ) {
   break;
  }



  FUNC_8( 0 );
  VAR_4 = FUNC_5( VAR_1 );
  VAR_5 = FUNC_4( VAR_1 );
  if ( 6 != FUNC_7() ) {
   return 0;
  }
 }

 FUNC_8( FUNC_1( VAR_1 ) - VAR_7 );
 return 1;
}
