
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;

void FUNC_2( const char *VAR_0, char *VAR_1 ){
 const char *VAR_2;

 VAR_2 = VAR_0 + FUNC_1( VAR_0 ) - 1;




 while ( VAR_2 != VAR_0 && *( VAR_2 - 1 ) != '\\' && *( VAR_2 - 1 ) != '/' )
  VAR_2--;

 FUNC_0( VAR_1, VAR_0, VAR_2 - VAR_0 );
 VAR_1[VAR_2 - VAR_0] = 0;
}
