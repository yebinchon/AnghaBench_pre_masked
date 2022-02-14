
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

char *FUNC_0( char *VAR_3 ){
 int VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_1[0] = 0;

 if ( !VAR_3 ) {
  return ((void*)0);
 }


skipwhite:
 while ( ( VAR_4 = *VAR_3 ) <= ' ' )
 {
  if ( VAR_4 == 0 ) {
   VAR_0 = VAR_2;
   return ((void*)0);
  }
  VAR_3++;
 }


 if ( VAR_4 == '/' && VAR_3[1] == '/' ) {
  while ( *VAR_3 && *VAR_3 != '\n' )
   VAR_3++;
  goto skipwhite;
 }



 if ( VAR_4 == '\"' ) {
  VAR_3++;
  do
  {
   VAR_4 = *VAR_3++;
   if ( VAR_4 == '\"' ) {
    VAR_1[VAR_5] = 0;
    return VAR_3;
   }
   VAR_1[VAR_5] = VAR_4;
   VAR_5++;
  } while ( 1 );
 }


 if ( VAR_4 == '{' || VAR_4 == '}' || VAR_4 == ')' || VAR_4 == '(' || VAR_4 == '\'' || VAR_4 == ':' ) {
  VAR_1[VAR_5] = VAR_4;
  VAR_5++;
  VAR_1[VAR_5] = 0;
  return VAR_3 + 1;
 }


 do
 {
  VAR_1[VAR_5] = VAR_4;
  VAR_3++;
  VAR_5++;
  VAR_4 = *VAR_3;
  if ( VAR_4 == '{' || VAR_4 == '}' || VAR_4 == ')' || VAR_4 == '(' || VAR_4 == '\'' || VAR_4 == ':' ) {
   break;
  }
 } while ( VAR_4 > 32 );

 VAR_1[VAR_5] = 0;
 return VAR_3;
}
