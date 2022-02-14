
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef int* vec3_t ;


 scalar_t__ FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int*,int* const,int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ VAR_0 ;

void FUNC_6( vec3_t VAR_1, vec_t *VAR_2, int VAR_3, const vec3_t *VAR_4 ){
 int VAR_5;
 vec3_t VAR_6;
 vec_t VAR_7;

 if ( FUNC_2( VAR_1 ) ) {
  if ( VAR_3 > 0 ) {

   FUNC_4( VAR_6 );
   for ( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
   {
    FUNC_3( VAR_6, VAR_4[VAR_5], VAR_6 );
   }
   for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ ) { VAR_6[VAR_5] = VAR_6[VAR_5] / VAR_3; }
   *VAR_2 = FUNC_0( VAR_1, VAR_6 );
  }
 }

 if ( FUNC_5( VAR_1 ) ) {


  VAR_7 = FUNC_1( *VAR_2 );
  if ( -VAR_0 < *VAR_2 - VAR_7 && *VAR_2 - VAR_7 < VAR_0 ) {
   *VAR_2 = VAR_7;
  }
 }
}
