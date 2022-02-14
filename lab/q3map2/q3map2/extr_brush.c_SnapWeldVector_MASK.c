
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ){
 int VAR_4;
 vec_t VAR_5, VAR_6, VAR_7;



 if ( VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) ) {
  return;
 }


 for ( VAR_4 = 0; VAR_4 < 3; VAR_4++ )
 {

  VAR_5 = FUNC_0( VAR_1[ VAR_4 ] );
  VAR_6 = FUNC_0( VAR_2[ VAR_4 ] );


  if ( VAR_5 == VAR_1[ VAR_4 ] ) {
   VAR_3[ VAR_4 ] = VAR_1[ VAR_4 ];
  }
  else if ( VAR_6 == VAR_2[ VAR_4 ] ) {
   VAR_3[ VAR_4 ] = VAR_2[ VAR_4 ];
  }


  else if ( FUNC_1( VAR_5 - VAR_1[ VAR_4 ] ) < FUNC_1( VAR_6 - VAR_2[ VAR_4 ] ) ) {
   VAR_3[ VAR_4 ] = VAR_1[ VAR_4 ];
  }
  else{
   VAR_3[ VAR_4 ] = VAR_2[ VAR_4 ];
  }


  VAR_7 = FUNC_0( VAR_3[ VAR_4 ] );
  if ( FUNC_1( VAR_7 - VAR_3[ VAR_4 ] ) <= VAR_0 ) {
   VAR_3[ VAR_4 ] = VAR_7;
  }
 }
}
