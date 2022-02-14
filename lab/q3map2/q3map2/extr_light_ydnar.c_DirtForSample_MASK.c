
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {scalar_t__ cluster; int origin; int hit; scalar_t__ opaque; int end; int normal; } ;
typedef TYPE_1__ trace_t ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (float) ;
 float VAR_0 ;
 float FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,float*) ;
 float FUNC_6 (float*) ;
 int FUNC_7 (int ,float,float*,int ) ;
 int FUNC_8 (float*,float*) ;
 int FUNC_9 (float*,float,float,float) ;
 int FUNC_10 (int ,int ,float*) ;
 float FUNC_11 (float) ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 float** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 float FUNC_12 (float,int ) ;
 float FUNC_13 (float) ;

float FUNC_14( trace_t *VAR_8 ){
 int VAR_9;
 float VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;



 if ( !VAR_6 ) {
  return 1.0f;
 }
 if ( VAR_8 == ((void*)0) || VAR_8->cluster < 0 ) {
  return 0.0f;
 }


 VAR_10 = 0.0f;
 VAR_14 = 1.0f / VAR_1;
 FUNC_5( VAR_8->normal, VAR_15 );


 if ( VAR_15[ 0 ] == 0.0f && VAR_15[ 1 ] == 0.0f ) {
  if ( VAR_15[ 2 ] == -1.0f ) {
   FUNC_9( VAR_18, -1.0f, 0.0f, 0.0f );
   FUNC_9( VAR_17, 0.0f, 1.0f, 0.0f );
  }
  else {
   FUNC_9( VAR_18, 1.0f, 0.0f, 0.0f );
   FUNC_9( VAR_17, 0.0f, 1.0f, 0.0f );
  }
 }
 else
 {
  FUNC_9( VAR_16, 0.0f, 0.0f, 1.0f );
  FUNC_0( VAR_15, VAR_16, VAR_18 );
  FUNC_8( VAR_18, VAR_18 );
  FUNC_0( VAR_18, VAR_15, VAR_17 );
  FUNC_8( VAR_17, VAR_17 );
 }


 if ( VAR_3 == 1 ) {

  for ( VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ )
  {

   VAR_12 = FUNC_2() * FUNC_1( 360.0f );
   VAR_13 = FUNC_2() * FUNC_1( VAR_0 );
   VAR_19[ 0 ] = FUNC_11( VAR_12 ) * FUNC_13( VAR_13 );
   VAR_19[ 1 ] = FUNC_13( VAR_12 ) * FUNC_13( VAR_13 );
   VAR_19[ 2 ] = FUNC_11( VAR_13 );


   VAR_20[ 0 ] = VAR_18[ 0 ] * VAR_19[ 0 ] + VAR_17[ 0 ] * VAR_19[ 1 ] + VAR_15[ 0 ] * VAR_19[ 2 ];
   VAR_20[ 1 ] = VAR_18[ 1 ] * VAR_19[ 0 ] + VAR_17[ 1 ] * VAR_19[ 1 ] + VAR_15[ 1 ] * VAR_19[ 2 ];
   VAR_20[ 2 ] = VAR_18[ 2 ] * VAR_19[ 0 ] + VAR_17[ 2 ] * VAR_19[ 1 ] + VAR_15[ 2 ] * VAR_19[ 2 ];


   FUNC_7( VAR_8->origin, VAR_1, VAR_20, VAR_8->end );
   FUNC_3( VAR_8 );


   FUNC_4( VAR_8 );
   if ( VAR_8->opaque ) {
    FUNC_10( VAR_8->hit, VAR_8->origin, VAR_21 );
    VAR_10 += 1.0f - VAR_14 * FUNC_6( VAR_21 );
   }
  }
 }
 else
 {

  for ( VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ )
  {

   VAR_20[ 0 ] = VAR_18[ 0 ] * VAR_5[ VAR_9 ][ 0 ] + VAR_17[ 0 ] * VAR_5[ VAR_9 ][ 1 ] + VAR_15[ 0 ] * VAR_5[ VAR_9 ][ 2 ];
   VAR_20[ 1 ] = VAR_18[ 1 ] * VAR_5[ VAR_9 ][ 0 ] + VAR_17[ 1 ] * VAR_5[ VAR_9 ][ 1 ] + VAR_15[ 1 ] * VAR_5[ VAR_9 ][ 2 ];
   VAR_20[ 2 ] = VAR_18[ 2 ] * VAR_5[ VAR_9 ][ 0 ] + VAR_17[ 2 ] * VAR_5[ VAR_9 ][ 1 ] + VAR_15[ 2 ] * VAR_5[ VAR_9 ][ 2 ];


   FUNC_7( VAR_8->origin, VAR_1, VAR_20, VAR_8->end );
   FUNC_3( VAR_8 );


   FUNC_4( VAR_8 );
   if ( VAR_8->opaque ) {
    FUNC_10( VAR_8->hit, VAR_8->origin, VAR_21 );
    VAR_10 += 1.0f - VAR_14 * FUNC_6( VAR_21 );
   }
  }
 }


 FUNC_7( VAR_8->origin, VAR_1, VAR_15, VAR_8->end );
 FUNC_3( VAR_8 );


 FUNC_4( VAR_8 );
 if ( VAR_8->opaque ) {
  FUNC_10( VAR_8->hit, VAR_8->origin, VAR_21 );
  VAR_10 += 1.0f - VAR_14 * FUNC_6( VAR_21 );
 }


 if ( VAR_10 <= 0.0f ) {
  return 1.0f;
 }


 VAR_11 = FUNC_12( VAR_10 / ( VAR_7 + 1 ), VAR_2 );
 if ( VAR_11 > 1.0f ) {
  VAR_11 = 1.0f;
 }


 VAR_11 *= VAR_4;
 if ( VAR_11 > 1.0f ) {
  VAR_11 = 1.0f;
 }


 return 1.0f - VAR_11;
}
