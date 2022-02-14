
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0( int VAR_3, int *VAR_4 ){
 int VAR_5, VAR_6, VAR_7;



 if ( VAR_3 < 3 || VAR_1 < VAR_3 || VAR_4 == ((void*)0) ) {
  return VAR_1;
 }


 VAR_7 = 1 + VAR_1 - VAR_3;


 if ( VAR_3 == 3 ) {

  for ( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
  {

   if ( VAR_4[ 0 ] == VAR_0[ VAR_5 ] &&
     VAR_4[ 1 ] == VAR_0[ VAR_5 + 1 ] &&
     VAR_4[ 2 ] == VAR_0[ VAR_5 + 2 ] ) {
    VAR_2 += VAR_3;
    return VAR_5;
   }
  }


  return VAR_1;
 }


 for ( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
 {

  if ( VAR_4[ 0 ] == VAR_0[ VAR_5 ] &&
    VAR_4[ 1 ] == VAR_0[ VAR_5 + 1 ] &&
    VAR_4[ 2 ] == VAR_0[ VAR_5 + 2 ] &&
    VAR_4[ 3 ] == VAR_0[ VAR_5 + 3 ] ) {

   if ( VAR_3 == 4 ) {
    return VAR_5;
   }


   for ( VAR_6 = 4; VAR_6 < VAR_3; VAR_6++ )
   {
    if ( VAR_4[ VAR_6 ] != VAR_0[ VAR_5 + VAR_6 ] ) {
     break;
    }
    else if ( VAR_6 == ( VAR_3 - 1 ) ) {
     VAR_2 += VAR_3;
     return VAR_5;
    }
   }
  }
 }


 return VAR_1;
}
