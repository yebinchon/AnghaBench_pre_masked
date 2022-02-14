
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_0( int VAR_5, int VAR_6, int *VAR_7, int *VAR_8 ){
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = VAR_0;

 for ( VAR_9 = 0 ; VAR_9 <= VAR_1 - VAR_5 ; VAR_9++ ) {
  VAR_12 = 0;

  for ( VAR_10 = 0 ; VAR_10 < VAR_5 ; VAR_10++ ) {
   if ( VAR_2[VAR_9 + VAR_10] >= VAR_11 ) {
    break;
   }
   if ( VAR_2[VAR_9 + VAR_10] > VAR_12 ) {
    VAR_12 = VAR_2[VAR_9 + VAR_10];
   }
  }
  if ( VAR_10 == VAR_5 ) {
   *VAR_7 = VAR_9;
   *VAR_8 = VAR_11 = VAR_12;
  }
 }

 if ( VAR_11 + VAR_6 > VAR_0 ) {
  return VAR_3;
 }

 for ( VAR_9 = 0 ; VAR_9 < VAR_5 ; VAR_9++ ) {
  VAR_2[*VAR_7 + VAR_9] = VAR_11 + VAR_6;
 }

 return VAR_4;
}
