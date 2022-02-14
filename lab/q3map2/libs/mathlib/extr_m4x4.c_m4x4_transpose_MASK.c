
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* m4x4_t ;



void FUNC_0( m4x4_t VAR_0 ){
 int VAR_1, VAR_2;
 float VAR_3, *VAR_4, *VAR_5;

 for ( VAR_1 = 1; VAR_1 < 4; VAR_1++ ) {
  for ( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ ) {
   VAR_4 = VAR_0 + ( VAR_2 * 4 + VAR_1 );
   VAR_5 = VAR_0 + ( VAR_1 * 4 + VAR_2 );
   VAR_3 = *VAR_4;
   *VAR_4 = *VAR_5;
   *VAR_5 = VAR_3;
  }
 }
}
