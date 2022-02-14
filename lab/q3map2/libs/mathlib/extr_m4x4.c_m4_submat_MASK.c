
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * m4x4_t ;
typedef int * m3x3_t ;



void FUNC_0( m4x4_t VAR_0, m3x3_t VAR_1, int VAR_2, int VAR_3 ){
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_6 = 0;
 for ( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
 {
  if ( VAR_4 == VAR_2 ) {
   continue;
  }
  if ( VAR_4 < VAR_2 ) {
   VAR_6 = VAR_4;
  }
  else
  {
   VAR_6 = VAR_4 - 1;
  }

  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {
   if ( VAR_5 == VAR_3 ) {
    continue;
   }
   if ( VAR_5 < VAR_3 ) {
    VAR_7 = VAR_5;
   }
   else
   {
    VAR_7 = VAR_5 - 1;
   }

   VAR_1[VAR_6 * 3 + VAR_7] = VAR_0[VAR_4 * 4 + VAR_5 ];
  }
 }
}
