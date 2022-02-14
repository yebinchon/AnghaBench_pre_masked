
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int mapDrawSurface_t ;
struct TYPE_12__ {float density; int inverseAlpha; float odds; } ;
typedef TYPE_1__ foliage_t ;
struct TYPE_13__ {int normal; int xyz; } ;
typedef TYPE_2__ foliageInstance_t ;
struct TYPE_14__ {float* xyz; float* normal; scalar_t__** color; } ;
typedef TYPE_3__ bspDrawVert_t ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 size_t VAR_0 ;
 int FUNC_1 (float*,float*,float*,float*) ;
 float FUNC_2 () ;
 int FUNC_3 (int ,float*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__**,TYPE_3__**) ;
 float FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,float,int ) ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_8( mapDrawSurface_t *VAR_3, foliage_t *VAR_4, bspDrawVert_t **VAR_5 ){
 bspDrawVert_t VAR_6, *VAR_7[ 3 ];
 int VAR_8;



 if ( VAR_2 >= VAR_0 ) {
  return;
 }


 {
  vec4_t VAR_9;



  if ( !FUNC_1( VAR_9, VAR_5[ 0 ]->xyz, VAR_5[ 1 ]->xyz, VAR_5[ 2 ]->xyz ) ) {
   return;
  }


  if ( VAR_9[ 2 ] < 0.5f ) {
   return;
  }
 }


 {
  int VAR_10;
  float *VAR_11, *VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  foliageInstance_t *VAR_18;



  VAR_18 = &VAR_1[ VAR_2 ];


  VAR_8 = -1;
  VAR_17 = 0.0f;
  FUNC_4( VAR_18->xyz );
  FUNC_4( VAR_18->normal );
  for ( VAR_10 = 0; VAR_10 < 3; VAR_10++ )
  {

   VAR_11 = VAR_5[ VAR_10 ]->xyz;
   VAR_12 = VAR_5[ ( VAR_10 + 1 ) % 3 ]->xyz;


   VAR_13 = VAR_11[ 0 ] - VAR_12[ 0 ];
   VAR_14 = VAR_11[ 1 ] - VAR_12[ 1 ];
   VAR_15 = VAR_11[ 2 ] - VAR_12[ 2 ];
   VAR_16 = ( VAR_13 * VAR_13 ) + ( VAR_14 * VAR_14 ) + ( VAR_15 * VAR_15 );


   if ( VAR_16 > VAR_17 ) {
    VAR_17 = VAR_16;
    VAR_8 = VAR_10;
   }


   FUNC_3( VAR_18->xyz, VAR_5[ VAR_10 ]->xyz, VAR_18->xyz );
   FUNC_3( VAR_18->normal, VAR_5[ VAR_10 ]->normal, VAR_18->normal );
  }


  if ( VAR_17 <= ( VAR_4->density * VAR_4->density ) ) {
   float VAR_19, VAR_20, VAR_21;



   if ( VAR_4->inverseAlpha == 2 ) {
    VAR_19 = 1.0f;
   }
   else
   {
    VAR_19 = ( (float) VAR_5[ 0 ]->color[ 0 ][ 3 ] + (float) VAR_5[ 1 ]->color[ 0 ][ 3 ] + (float) VAR_5[ 2 ]->color[ 0 ][ 3 ] ) / 765.0f;
    if ( VAR_4->inverseAlpha == 1 ) {
     VAR_19 = 1.0f - VAR_19;
    }
    if ( VAR_19 < 0.75f ) {
     return;
    }
   }


   VAR_20 = VAR_4->odds * VAR_19;
   VAR_21 = FUNC_2();
   if ( VAR_21 > VAR_20 ) {
    return;
   }


   FUNC_7( VAR_18->xyz, 0.33333333f, VAR_18->xyz );
   if ( FUNC_6( VAR_18->normal, VAR_18->normal ) == 0.0f ) {
    return;
   }


   VAR_2++;
   return;
  }
 }


 FUNC_0( VAR_5[ VAR_8 ], VAR_5[ ( VAR_8 + 1 ) % 3 ], &VAR_6 );


 FUNC_5( VAR_5, VAR_7 );
 VAR_7[ VAR_8 ] = &VAR_6;
 FUNC_8( VAR_3, VAR_4, VAR_7 );


 FUNC_5( VAR_5, VAR_7 );
 VAR_7[ ( VAR_8 + 1 ) % 3 ] = &VAR_6;
 FUNC_8( VAR_3, VAR_4, VAR_7 );
}
