
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float*,float*) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*) ;
 float FUNC_2 (float*) ;
 float FUNC_3 (float*,float*) ;
 int FUNC_4 (float*,float*,float*) ;

__attribute__((used)) static void FUNC_5( int *VAR_1, int VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5 ){
 int VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 float VAR_13, VAR_14;
 int VAR_15, VAR_16;
 vec3_t VAR_17[ VAR_0 ];



 VAR_15 = 3;
 FUNC_1( VAR_3, VAR_17[ 0 ] );
 FUNC_1( VAR_4, VAR_17[ 1 ] );
 FUNC_1( VAR_5, VAR_17[ 2 ] );


 for ( VAR_6 = 0; VAR_6 + 2 < VAR_15; VAR_6 += 2 )
 {

  if ( VAR_15 + 2 >= VAR_0 ) {
   break;
  }


  for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ )
  {
   VAR_8[ VAR_7 ] = VAR_17[ VAR_6 + 1 ][ VAR_7 ] - VAR_17[ VAR_6 ][ VAR_7 ];
   VAR_9[ VAR_7 ] = VAR_17[ VAR_6 + 2 ][ VAR_7 ] - VAR_17[ VAR_6 + 1 ][ VAR_7 ];
   VAR_10[ VAR_7 ] = ( VAR_17[ VAR_6 ][ VAR_7 ] + VAR_17[ VAR_6 + 1 ][ VAR_7 ] * 2.0f + VAR_17[ VAR_6 + 2 ][ VAR_7 ] ) * 0.25f;
  }


  FUNC_4( VAR_17[ VAR_6 + 1 ], VAR_10, VAR_11 );
  VAR_13 = FUNC_2( VAR_11 );
  if ( VAR_13 < VAR_2 ) {
   continue;
  }


  VAR_15 += 2;


  for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ )
  {
   VAR_8[ VAR_7 ] = 0.5f * ( VAR_17[ VAR_6 ][ VAR_7 ] + VAR_17[ VAR_6 + 1 ][ VAR_7 ] );
   VAR_9[ VAR_7 ] = 0.5f * ( VAR_17[ VAR_6 + 1 ][ VAR_7 ] + VAR_17[ VAR_6 + 2 ][ VAR_7 ] );
   VAR_10[ VAR_7 ] = 0.5f * ( VAR_8[ VAR_7 ] + VAR_9[ VAR_7 ] );
  }


  for ( VAR_7 = VAR_15 - 1; VAR_7 > VAR_6 + 3; VAR_7-- )
   FUNC_1( VAR_17[ VAR_7 - 2 ], VAR_17[ VAR_7 ] );


  FUNC_1( VAR_8, VAR_17[ VAR_6 + 1 ] );
  FUNC_1( VAR_10, VAR_17[ VAR_6 + 2 ] );
  FUNC_1( VAR_9, VAR_17[ VAR_6 + 3 ] );


  VAR_6 -= 2;
 }


 for ( VAR_6 = 1; VAR_6 < VAR_15; VAR_6 += 2 )
 {
  for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ )
  {
   VAR_8[ VAR_7 ] = 0.5f * ( VAR_17[ VAR_6 ][ VAR_7 ] + VAR_17[ VAR_6 + 1 ][ VAR_7 ] );
   VAR_9[ VAR_7 ] = 0.5f * ( VAR_17[ VAR_6 ][ VAR_7 ] + VAR_17[ VAR_6 - 1 ][ VAR_7 ] );
   VAR_17[ VAR_6 ][ VAR_7 ] = 0.5f * ( VAR_8[ VAR_7 ] + VAR_9[ VAR_7 ] );
  }
 }


 for ( VAR_6 = 0; VAR_6 + 2 < VAR_15; VAR_6++ )
 {

  FUNC_4( VAR_17[ VAR_6 + 1 ], VAR_17[ VAR_6 ], VAR_11 );
  VAR_13 = FUNC_3( VAR_11, VAR_11 );
  FUNC_4( VAR_17[ VAR_6 + 2 ], VAR_17[ VAR_6 + 1 ], VAR_12 );
  VAR_14 = FUNC_3( VAR_12, VAR_12 );


  if ( VAR_13 < 0.0625f || VAR_14 < 0.0625f || FUNC_0( VAR_11, VAR_12 ) >= 1.0f ) {
   for ( VAR_7 = VAR_6 + 1; VAR_7 + 1 < VAR_15; VAR_7++ )
    FUNC_1( VAR_17[ VAR_7 + 1 ], VAR_17[ VAR_7 ] );
   VAR_15--;
   continue;
  }
 }


 VAR_15 >>= 1;
 VAR_16 = 0;
 while ( VAR_15 > 1 )
 {
  VAR_15 >>= 1;
  VAR_16++;
 }


 if ( VAR_16 > *VAR_1 ) {
  *VAR_1 = VAR_16;
 }
}
