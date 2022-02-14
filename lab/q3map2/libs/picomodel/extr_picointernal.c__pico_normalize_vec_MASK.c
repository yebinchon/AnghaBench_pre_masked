
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double picoVec_t ;
typedef double* picoVec3_t ;


 double FUNC_0 (double) ;

picoVec_t FUNC_1( picoVec3_t VAR_0 ){
 double VAR_1, VAR_2;

 VAR_1 = FUNC_0( VAR_0[ 0 ] * VAR_0[ 0 ] + VAR_0[ 1 ] * VAR_0[ 1 ] + VAR_0[ 2 ] * VAR_0[ 2 ] );
 if ( VAR_1 == 0.0 ) {
  return 0.0;
 }
 VAR_2 = 1.0 / VAR_1;
 VAR_0[ 0 ] *= (picoVec_t) VAR_2;
 VAR_0[ 1 ] *= (picoVec_t) VAR_2;
 VAR_0[ 2 ] *= (picoVec_t) VAR_2;
 return (picoVec_t) VAR_1;
}
