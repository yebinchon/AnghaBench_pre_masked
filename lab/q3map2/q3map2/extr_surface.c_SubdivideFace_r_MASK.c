
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec3_t ;
typedef int side_t ;
struct TYPE_10__ {int fogNum; } ;
typedef TYPE_2__ mapDrawSurface_t ;
typedef int entity_t ;
typedef int brush_t ;


 int FUNC_0 (int ,float*,float*) ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (TYPE_1__*,float*,float,float const,TYPE_1__**,TYPE_1__**) ;
 float FUNC_3 (float*,float*) ;
 TYPE_2__* FUNC_4 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_5 (char*,int) ;
 float FUNC_6 (float) ;
 float FUNC_7 (float) ;

__attribute__((used)) static void FUNC_8( entity_t *VAR_0, brush_t *VAR_1, side_t *VAR_2, winding_t *VAR_3, int VAR_4, float VAR_5 ){
 int VAR_6;
 int VAR_7;
 vec3_t VAR_8[ 2 ];
 const float VAR_9 = 0.1;
 int VAR_10, VAR_11;
 winding_t *VAR_12, *VAR_13;
 mapDrawSurface_t *VAR_14;



 if ( VAR_3 == ((void*)0) ) {
  return;
 }
 if ( VAR_3->numpoints < 3 ) {
  FUNC_5( "SubdivideFace_r: Bad w->numpoints (%d < 3)", VAR_3->numpoints );
 }


 FUNC_1( VAR_8[ 0 ], VAR_8[ 1 ] );
 for ( VAR_6 = 0; VAR_6 < VAR_3->numpoints; VAR_6++ )
  FUNC_0( VAR_3->p[ VAR_6 ], VAR_8[ 0 ], VAR_8[ 1 ] );


 for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ )
 {
  vec3_t VAR_15 = { 0, 0, 0 };
  vec3_t VAR_16 = { 0, 0, 0 };
  float VAR_17;



  VAR_10 = FUNC_7( VAR_8[ 0 ][ VAR_7 ] / VAR_5 ) * VAR_5;
  VAR_11 = FUNC_6( VAR_8[ 1 ][ VAR_7 ] / VAR_5 ) * VAR_5;
  VAR_15[ VAR_7 ] = VAR_10 + VAR_5;
  VAR_16[ VAR_7 ] = -1;
  VAR_17 = FUNC_3( VAR_15, VAR_16 );


  if ( ( VAR_11 - VAR_10 ) > VAR_5 ) {

   FUNC_2( VAR_3, VAR_16, VAR_17, VAR_9, &VAR_12, &VAR_13 );


   if ( VAR_12 == ((void*)0) ) {
    VAR_3 = VAR_13;
   }
   else if ( VAR_13 == ((void*)0) ) {
    VAR_3 = VAR_12;
   }
   else
   {
    FUNC_8( VAR_0, VAR_1, VAR_2, VAR_12, VAR_4, VAR_5 );
    FUNC_8( VAR_0, VAR_1, VAR_2, VAR_13, VAR_4, VAR_5 );
    return;
   }
  }
 }


 VAR_14 = FUNC_4( VAR_0, VAR_1, VAR_2, VAR_3 );


 VAR_14->fogNum = VAR_4;
}
