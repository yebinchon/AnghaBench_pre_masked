
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

int FUNC_1( picoMemStream_t *VAR_2 ){
 int VAR_3;

 if ( VAR_1 == VAR_0 ) {
  return 0;
 }
 VAR_3 = FUNC_0( VAR_2 );
 if ( VAR_3 < 0 ) {
  VAR_1 = VAR_0;
  return 0;
 }
 if ( VAR_3 > 127 ) {
  VAR_3 -= 256;
 }
 VAR_1 += 1;
 return VAR_3;
}
