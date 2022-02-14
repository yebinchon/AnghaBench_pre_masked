
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_accu_t ;
typedef scalar_t__* vec3_accu_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3( vec3_accu_t VAR_1, vec3_accu_t VAR_2, vec3_accu_t VAR_3 ){
 int VAR_4;
 vec_accu_t VAR_5, VAR_6, VAR_7, VAR_8;

 if ( VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) ) {
  FUNC_0( "SnapWeldVectorAccu: NULL argument" );
 }

 for ( VAR_4 = 0; VAR_4 < 3; VAR_4++ )
 {
  VAR_5 = FUNC_1( VAR_1[VAR_4] );
  VAR_6 = FUNC_1( VAR_2[VAR_4] );
  VAR_7 = FUNC_2( VAR_5 - VAR_1[VAR_4] );
  VAR_8 = FUNC_2( VAR_6 - VAR_2[VAR_4] );

  if ( VAR_7 < VAR_8 ) {
   if ( VAR_7 < VAR_0 ) {
    VAR_3[VAR_4] = VAR_5;
   }
   else{VAR_3[VAR_4] = VAR_1[VAR_4]; }
  }
  else
  {
   if ( VAR_8 < VAR_0 ) {
    VAR_3[VAR_4] = VAR_6;
   }
   else{VAR_3[VAR_4] = VAR_2[VAR_4]; }
  }
 }
}
