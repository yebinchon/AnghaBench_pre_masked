
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;
typedef int qboolean ;


 float VAR_0 ;
 float FUNC_0 (double*) ;
 int FUNC_1 (double*,double*,double*) ;

__attribute__((used)) static qboolean FUNC_2( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ) {
 vec3_t VAR_4;
 vec3_t VAR_5;
 vec3_t VAR_6;
 float VAR_7;
 int VAR_8;


 for ( VAR_8 = 0 ; VAR_8 < 3 ; VAR_8++ ) {
  VAR_5[VAR_8] = 0.5*(VAR_1[VAR_8] + VAR_3[VAR_8]);
 }


 for ( VAR_8 = 0 ; VAR_8 < 3 ; VAR_8++ ) {
  VAR_4[VAR_8] = 0.5 * ( 0.5*(VAR_1[VAR_8] + VAR_2[VAR_8]) + 0.5*(VAR_2[VAR_8] + VAR_3[VAR_8]) );
 }


 FUNC_1( VAR_4, VAR_5, VAR_6 );
 VAR_7 = FUNC_0( VAR_6 );

 return VAR_7 >= VAR_0;
}
