
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;

qboolean FUNC_1 (char **VAR_1, int VAR_2) {
 char *VAR_3;

 do {
  VAR_3 = FUNC_0( VAR_1, VAR_0 );
  if( VAR_3[1] == 0 ) {
   if( VAR_3[0] == '{' ) {
    VAR_2++;
   }
   else if( VAR_3[0] == '}' ) {
    VAR_2--;
   }
  }
 } while( VAR_2 && *VAR_1 );

 return ( VAR_2 == 0 );
}
