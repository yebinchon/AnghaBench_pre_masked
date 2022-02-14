
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,float,float,float) ;
 float FUNC_1 (float) ;

__attribute__((used)) static float FUNC_2( float VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4,
      float *VAR_5, float *VAR_6 ){
 float VAR_7, VAR_8;

 VAR_8 = *VAR_5 + ( *VAR_6 - *VAR_5 ) * 0.5f;
 VAR_7 = FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_8 );
 if ( FUNC_1( VAR_4 - VAR_7 ) > .0001f ) {
  if ( VAR_7 > VAR_4 ) {
   *VAR_6 = VAR_8;
  }
  else{
   *VAR_5 = VAR_8;
  }
  return FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );
 }
 else{
  return VAR_8;
 }
}
