
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int dirlist ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int) ;

__attribute__((used)) static qboolean FUNC_3( void ) {
 int VAR_3;
 char VAR_4[2048];
 char *VAR_5;
  char *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_3 = FUNC_2( "$modlist", "", VAR_4, sizeof(VAR_4) );
 VAR_5 = VAR_4;
 for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ ) {
  VAR_8 = FUNC_1( VAR_5 ) + 1;
    VAR_6 = VAR_5 + VAR_8;
  if (FUNC_0(VAR_5, VAR_0) == 0) {
   return VAR_2;
  }
    VAR_5 += VAR_8 + FUNC_1(VAR_6) + 1;
 }
 return VAR_1;
}
