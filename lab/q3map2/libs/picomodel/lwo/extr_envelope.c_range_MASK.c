
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static float FUNC_1( float VAR_0, float VAR_1, float VAR_2, int *VAR_3 ){
 float VAR_4, VAR_5 = VAR_2 - VAR_1;

 if ( VAR_5 == 0.0 ) {
  if ( VAR_3 ) {
   *VAR_3 = 0;
  }
  return VAR_1;
 }

 VAR_4 = VAR_1 + VAR_0 - VAR_5 * ( float ) FUNC_0( ( double ) VAR_0 / VAR_5 );
 if ( VAR_3 ) {
  *VAR_3 = -( int )( ( VAR_4 - VAR_0 ) / VAR_5 + ( VAR_4 > VAR_0 ? 0.5 : -0.5 ) );
 }

 return VAR_4;
}
