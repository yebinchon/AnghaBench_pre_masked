
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_0( char *VAR_2, qboolean *VAR_3 ) {
 int VAR_4;

 while( (VAR_4 = *VAR_2) <= ' ') {
  if( !VAR_4 ) {
   return ((void*)0);
  }
  if( VAR_4 == '\n' ) {
   VAR_0++;
   *VAR_3 = VAR_1;
  }
  VAR_2++;
 }

 return VAR_2;
}
