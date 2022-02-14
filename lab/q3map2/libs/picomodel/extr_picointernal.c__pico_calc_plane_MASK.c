
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoVec_t ;
typedef int * picoVec4_t ;
typedef int picoVec3_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

picoVec_t FUNC_4( picoVec4_t VAR_0, picoVec3_t VAR_1, picoVec3_t VAR_2, picoVec3_t VAR_3 ){
 picoVec3_t VAR_4, VAR_5;

 FUNC_3( VAR_2, VAR_1, VAR_4 );
 FUNC_3( VAR_3, VAR_1, VAR_5 );
 FUNC_0( VAR_5, VAR_4, VAR_0 );
 VAR_0[ 3 ] = FUNC_1( VAR_1, VAR_0 );
 return FUNC_2( VAR_0 );
}
