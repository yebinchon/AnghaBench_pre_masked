
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float byte ;


 int FUNC_0 (float const*,float,float*) ;
 float VAR_0 ;
 float VAR_1 ;
 float FUNC_1 (float,float) ;

void FUNC_2( const float *VAR_2, byte *VAR_3, float VAR_4 ){
 int VAR_5;
 float VAR_6, VAR_7;
 vec3_t VAR_8;



 if ( VAR_4 <= 0.0f ) {
  VAR_4 = 1.0f;
 }


 FUNC_0( VAR_2, VAR_4, VAR_8 );


 VAR_7 = 1.0f / VAR_1;
 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
 {

  if ( VAR_8[ VAR_5 ] < 0.0f ) {
   VAR_8[ VAR_5 ] = 0.0f;
   continue;
  }


  VAR_8[ VAR_5 ] = FUNC_1( VAR_8[ VAR_5 ] / 255.0f, VAR_7 ) * 255.0f;
 }


 VAR_6 = VAR_8[ 0 ];
 if ( VAR_8[ 1 ] > VAR_6 ) {
  VAR_6 = VAR_8[ 1 ];
 }
 if ( VAR_8[ 2 ] > VAR_6 ) {
  VAR_6 = VAR_8[ 2 ];
 }
 if ( VAR_6 > 255.0f ) {
  FUNC_0( VAR_8, ( 255.0f / VAR_6 ), VAR_8 );
 }


 FUNC_0( VAR_8, ( 1.0f / VAR_0 ), VAR_8 );


 VAR_3[ 0 ] = VAR_8[ 0 ];
 VAR_3[ 1 ] = VAR_8[ 1 ];
 VAR_3[ 2 ] = VAR_8[ 2 ];
}
