
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int path ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;

qboolean FUNC_7 (char *VAR_5) {
 char *VAR_6;
 char VAR_7[VAR_1];



 if ( FUNC_6( VAR_5, ".." ) || FUNC_6( VAR_5, "::" ) ) {
  FUNC_1( "WARNING: refusing to create relative path \"%s\"\n", VAR_5 );
  return VAR_4;
 }

 FUNC_3( VAR_7, VAR_5, sizeof( VAR_7 ) );
 FUNC_2( VAR_7 );


 VAR_6 = FUNC_5( VAR_7, VAR_2 );
 if ( VAR_6 != ((void*)0) ) {
  VAR_6++;
 }

 for (; VAR_6 != ((void*)0) && *VAR_6 ; VAR_6++) {
  if (*VAR_6 == VAR_2) {

   *VAR_6 = 0;
   if (!FUNC_4 (VAR_7)) {
    FUNC_0( VAR_0, "FS_CreatePath: failed to create path \"%s\"",
     VAR_7 );
   }
   *VAR_6 = VAR_2;
  }
 }

 return VAR_3;
}
