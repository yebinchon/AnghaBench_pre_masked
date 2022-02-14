
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( const char *VAR_0, char *VAR_1, int VAR_2 ){
 int VAR_3 = VAR_2;
 char *VAR_4 = VAR_1;

 while ( ( *VAR_1 = *VAR_0 ) != '\0' )
 {
  if ( *VAR_1 == '/' || *VAR_1 == '\\' ) {
   VAR_4 = ( VAR_1 + 1 );
   *VAR_1 = '/';
  }
  VAR_1++; VAR_0++;

  if ( --VAR_3 < 1 ) {
   *VAR_4 = '\0';
   return 0;
  }
 }
 *VAR_4 = '\0';
 return 1;
}
