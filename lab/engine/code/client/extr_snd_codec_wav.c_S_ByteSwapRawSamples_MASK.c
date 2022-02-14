
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (short) ;

__attribute__((used)) static void FUNC_1( int VAR_0, int VAR_1, int VAR_2, const byte *VAR_3 ) {
 int VAR_4;

 if ( VAR_1 != 2 ) {
  return;
 }
 if ( FUNC_0( 256 ) == 256 ) {
  return;
 }

 if ( VAR_2 == 2 ) {
  VAR_0 <<= 1;
 }
 for ( VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++ ) {
  ((short *)VAR_3)[VAR_4] = FUNC_0( ((short *)VAR_3)[VAR_4] );
 }
}
