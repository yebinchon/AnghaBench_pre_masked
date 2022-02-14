
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 int FUNC_0 (int ,float) ;
 scalar_t__ FUNC_1 (int,int) ;

int FUNC_2( vec3_t VAR_0, float VAR_1, int VAR_2, int *VAR_3 ){
 int VAR_4, VAR_5;



 VAR_5 = FUNC_0( VAR_0, VAR_1 );


 if ( VAR_5 < 0 || VAR_2 <= 0 || VAR_3 == ((void*)0) ) {
  return VAR_5;
 }


 for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
 {
  if ( VAR_5 == VAR_3[ VAR_4 ] || FUNC_1( VAR_5, VAR_3[ VAR_4 ] ) ) {
   return VAR_5;
  }
 }


 return -1;
}
