
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int hex ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2( char *VAR_2, int VAR_3, const char *VAR_4 )
{
 char VAR_5[5];
 int VAR_6;
 int VAR_7;

 if( VAR_2 == ((void*)0) || VAR_4 == ((void*)0) )
  return VAR_0;

 if( VAR_3 <= 0 )
  return VAR_1;

 for( VAR_6 = 0; *VAR_4 && VAR_6 + 1 <= VAR_3; VAR_4++, VAR_6++ ) {
  if( *VAR_4 == '\\' ) {
   FUNC_1( VAR_5, VAR_4 + 1, sizeof(VAR_5) );
   VAR_7 = FUNC_0( VAR_5 );
   if( VAR_7 > -1 ) {
    VAR_2[VAR_6] = VAR_7;
    VAR_4 += 4;
   } else {
    VAR_2[VAR_6] = *VAR_4;
   }
  } else {
   VAR_2[VAR_6] = *VAR_4;
  }
 }
 VAR_2[VAR_6] = '\0';

 return VAR_1;
}
