
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

char *FUNC_1( char *VAR_0 ){
 if ( VAR_0 && *VAR_0 ) {
  char *VAR_1 = VAR_0;
  int VAR_2 = 1;

  while ( *VAR_1 )
  {
   if ( VAR_2 && !FUNC_0( *VAR_1 ) ) {
    VAR_2 = 0;
   }
   VAR_1++;
  }
  if ( VAR_2 ) {
   *VAR_0 = '\0';
  }
  else {
   VAR_1--;
   while ( ( FUNC_0( *VAR_1 ) ) && ( VAR_1 >= VAR_0 ) )
    *VAR_1-- = '\0';
  }
 }
 return VAR_0;
}
