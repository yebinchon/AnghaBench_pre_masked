
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {float* normal; int numLights; float* color; TYPE_1__* light; TYPE_1__** lights; } ;
typedef TYPE_2__ trace_t ;
typedef scalar_t__ byte ;
struct TYPE_5__ {scalar_t__ style; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (int ,float*) ;
 int FUNC_4 (float*,float,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_5( trace_t *VAR_7, byte VAR_8[ VAR_2 ], vec3_t VAR_9[ VAR_2 ] ){
 int VAR_10, VAR_11;



 for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ )
  FUNC_2( VAR_9[ VAR_11 ] );


 if ( VAR_6 ) {
  VAR_9[ 0 ][ 0 ] = ( VAR_7->normal[ 0 ] + 1.0f ) * 127.5f;
  VAR_9[ 0 ][ 1 ] = ( VAR_7->normal[ 1 ] + 1.0f ) * 127.5f;
  VAR_9[ 0 ][ 2 ] = ( VAR_7->normal[ 2 ] + 1.0f ) * 127.5f;
  return;
 }


 if ( !VAR_4 ) {
  FUNC_3( VAR_3, VAR_9[ 0 ] );
 }


 for ( VAR_10 = 0; VAR_10 < VAR_7->numLights && VAR_7->lights[ VAR_10 ] != ((void*)0); VAR_10++ )
 {

  VAR_7->light = VAR_7->lights[ VAR_10 ];


  for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ )
  {
   if ( VAR_8[ VAR_11 ] == VAR_7->light->style ||
     VAR_8[ VAR_11 ] == VAR_1 ) {
    break;
   }
  }


  if ( VAR_11 >= VAR_2 ) {
   continue;
  }


  FUNC_0( VAR_7 );
  if ( VAR_7->color[ 0 ] == 0.0f && VAR_7->color[ 1 ] == 0.0f && VAR_7->color[ 2 ] == 0.0f ) {
   continue;
  }


  if ( VAR_7->light->flags & VAR_0 ) {
   FUNC_4( VAR_7->color, -1.0f, VAR_7->color );
  }


  VAR_8[ VAR_11 ] = VAR_7->light->style;


  FUNC_1( VAR_9[ VAR_11 ], VAR_7->color, VAR_9[ VAR_11 ] );


  if ( VAR_5 &&
    VAR_9[ 0 ][ 0 ] >= 255.0f &&
    VAR_9[ 0 ][ 1 ] >= 255.0f &&
    VAR_9[ 0 ][ 2 ] >= 255.0f ) {
   break;
  }
 }
}
