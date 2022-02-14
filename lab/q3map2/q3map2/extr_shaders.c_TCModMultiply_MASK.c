
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int** tcMod_t ;



void FUNC_0( tcMod_t VAR_0, tcMod_t VAR_1, tcMod_t VAR_2 ){
 int VAR_3;


 for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
 {
  VAR_2[ VAR_3 ][ 0 ] = ( VAR_0[ VAR_3 ][ 0 ] * VAR_1[ 0 ][ 0 ] ) + ( VAR_0[ VAR_3 ][ 1 ] * VAR_1[ 1 ][ 0 ] ) + ( VAR_0[ VAR_3 ][ 2 ] * VAR_1[ 2 ][ 0 ] );
  VAR_2[ VAR_3 ][ 1 ] = ( VAR_0[ VAR_3 ][ 0 ] * VAR_1[ 0 ][ 1 ] ) + ( VAR_0[ VAR_3 ][ 1 ] * VAR_1[ 1 ][ 1 ] ) + ( VAR_0[ VAR_3 ][ 2 ] * VAR_1[ 2 ][ 1 ] );
  VAR_2[ VAR_3 ][ 2 ] = ( VAR_0[ VAR_3 ][ 0 ] * VAR_1[ 0 ][ 2 ] ) + ( VAR_0[ VAR_3 ][ 1 ] * VAR_1[ 1 ][ 2 ] ) + ( VAR_0[ VAR_3 ][ 2 ] * VAR_1[ 2 ][ 2 ] );
 }
}
