
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char*,int,char*,char*,char const*,char const*,char const*,char const*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_2( char *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8 ) {
 char *VAR_9, *VAR_10;
 int VAR_11;

 VAR_9 = "default";

 if ( VAR_5[0] == '*' ) {
  VAR_10 = "heads/";
  VAR_5++;
 }
 else {
  VAR_10 = "";
 }
 while(1) {
  for ( VAR_11 = 0; VAR_11 < 2; VAR_11++ ) {
   if ( VAR_11 == 0 && VAR_4 && *VAR_4 ) {
    FUNC_0( VAR_2, VAR_3, "models/players/%s%s/%s/%s%s_%s.%s", VAR_10, VAR_5, VAR_6, VAR_4, VAR_7, VAR_9, VAR_8 );
   }
   else {
    FUNC_0( VAR_2, VAR_3, "models/players/%s%s/%s/%s_%s.%s", VAR_10, VAR_5, VAR_6, VAR_7, VAR_9, VAR_8 );
   }
   if ( FUNC_1( VAR_2 ) ) {
    return VAR_1;
   }
   if ( VAR_11 == 0 && VAR_4 && *VAR_4 ) {
    FUNC_0( VAR_2, VAR_3, "models/players/%s%s/%s%s_%s.%s", VAR_10, VAR_5, VAR_4, VAR_7, VAR_6, VAR_8 );
   }
   else {
    FUNC_0( VAR_2, VAR_3, "models/players/%s%s/%s_%s.%s", VAR_10, VAR_5, VAR_7, VAR_6, VAR_8 );
   }
   if ( FUNC_1( VAR_2 ) ) {
    return VAR_1;
   }
   if ( !VAR_4 || !*VAR_4 ) {
    break;
   }
  }

  if ( VAR_10[0] ) {
   break;
  }
  VAR_10 = "heads/";
 }

 return VAR_0;
}
