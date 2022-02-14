
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;

int FUNC_2( picoMemStream_t *VAR_2 ){
 int VAR_3, VAR_4;

 if ( VAR_1 == VAR_0 ) {
  return 0;
 }

 VAR_4 = FUNC_1( VAR_2 );
 if ( VAR_4 != 0xFF ) {
  VAR_3 = VAR_4 << 8;
  VAR_4 = FUNC_1( VAR_2 );
  VAR_3 |= VAR_4;
  VAR_1 += 2;
 }
 else {
  VAR_4 = FUNC_1( VAR_2 );
  VAR_3 = VAR_4 << 16;
  VAR_4 = FUNC_1( VAR_2 );
  VAR_3 |= VAR_4 << 8;
  VAR_4 = FUNC_1( VAR_2 );
  VAR_3 |= VAR_4;
  VAR_1 += 4;
 }

 if ( FUNC_0( VAR_2 ) ) {
  VAR_1 = VAR_0;
  return 0;
 }
 return VAR_3;
}
