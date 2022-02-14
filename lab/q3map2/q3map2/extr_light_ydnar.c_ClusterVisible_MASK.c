
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_0( int VAR_5, int VAR_6 ){
 int VAR_7, VAR_8;
 byte *VAR_9;



 if ( VAR_5 < 0 || VAR_6 < 0 ) {
  return VAR_3;
 }


 if ( VAR_5 == VAR_6 ) {
  return VAR_4;
 }


 if ( VAR_2 <= 8 ) {
  return VAR_4;
 }


 VAR_7 = ( (int *) VAR_1 )[ 0 ];
 VAR_8 = ( (int*) VAR_1 )[ 1 ];
 VAR_9 = VAR_1 + VAR_0 + ( VAR_5 * VAR_8 );


 if ( ( VAR_9[ VAR_6 >> 3 ] & ( 1 << ( VAR_6 & 7 ) ) ) ) {
  return VAR_4;
 }
 return VAR_3;
}
