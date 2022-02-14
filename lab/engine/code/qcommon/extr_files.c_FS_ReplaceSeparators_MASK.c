
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 char VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2( char *VAR_3 ) {
 char *VAR_4;
 qboolean VAR_5 = VAR_1;

 for ( VAR_4 = VAR_3 ; *VAR_4 ; VAR_4++ ) {
  if ( *VAR_4 == '/' || *VAR_4 == '\\' ) {
   if ( !VAR_5 ) {
    *VAR_4 = VAR_0;
    VAR_5 = VAR_2;
   } else {
    FUNC_0 (VAR_4, VAR_4 + 1, FUNC_1 (VAR_4));
   }
  } else {
   VAR_5 = VAR_1;
  }
 }
}
