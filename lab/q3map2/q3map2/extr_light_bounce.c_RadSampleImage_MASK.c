
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef float byte ;


 int FUNC_0 (float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( byte *VAR_2, int VAR_3, int VAR_4, float VAR_5[ 2 ], float VAR_6[ 4 ] ){
 float VAR_7[ 2 ];
 int VAR_8, VAR_9;



 VAR_6[ 0 ] = VAR_6[ 1 ] = VAR_6[ 2 ] = VAR_6[ 3 ] = 255;


 if ( VAR_2 == ((void*)0) || VAR_3 < 1 || VAR_4 < 1 ) {
  return VAR_0;
 }


 VAR_7[ 0 ] = VAR_5[ 0 ];
 while ( VAR_7[ 0 ] < 0.0f )
  VAR_7[ 0 ] += 1.0f;
 VAR_7[ 1 ] = VAR_5[ 1 ];
 while ( VAR_7[ 1 ] < 0.0f )
  VAR_7[ 1 ] += 1.0f;


 VAR_8 = ( (float) VAR_3 * VAR_7[ 0 ] ) + 0.5f;
 VAR_8 %= VAR_3;
 VAR_9 = ( (float) VAR_4 * VAR_7[ 1 ] ) + 0.5f;
 VAR_9 %= VAR_4;


 VAR_2 += ( VAR_9 * VAR_3 * 4 ) + ( VAR_8 * 4 );
 FUNC_0( VAR_2, VAR_6 );
 VAR_6[ 3 ] = VAR_2[ 3 ];
 return VAR_1;
}
