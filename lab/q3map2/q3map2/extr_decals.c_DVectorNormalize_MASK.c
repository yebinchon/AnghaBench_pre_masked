
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double dvec_t ;
typedef double* dvec3_t ;


 int FUNC_0 (double*) ;
 scalar_t__ FUNC_1 (double) ;

dvec_t FUNC_2( dvec3_t VAR_0, dvec3_t VAR_1 ){
 dvec_t VAR_2, VAR_3;


 VAR_2 = (dvec_t) FUNC_1( VAR_0[ 0 ] * VAR_0[ 0 ] + VAR_0[ 1 ] * VAR_0[ 1 ] + VAR_0[ 2 ] * VAR_0[ 2 ] );
 if ( VAR_2 == 0.0 ) {
  FUNC_0( VAR_1 );
  return 0.0;
 }

 VAR_3 = 1.0 / VAR_2;
 VAR_1[ 0 ] = VAR_0[ 0 ] * VAR_3;
 VAR_1[ 1 ] = VAR_0[ 1 ] * VAR_3;
 VAR_1[ 2 ] = VAR_0[ 2 ] * VAR_3;

 return VAR_2;
}
