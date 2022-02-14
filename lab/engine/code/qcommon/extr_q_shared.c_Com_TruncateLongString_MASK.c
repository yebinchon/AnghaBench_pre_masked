
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

void FUNC_3( char *VAR_1, const char *VAR_2 )
{
 int VAR_3 = FUNC_2( VAR_2 );

 if( VAR_3 <= VAR_0 )
  FUNC_1( VAR_1, VAR_2, VAR_0 );
 else
 {
  FUNC_1( VAR_1, VAR_2, ( VAR_0 / 2 ) - 3 );
  FUNC_0( VAR_1, VAR_0, " ... " );
  FUNC_0( VAR_1, VAR_0, VAR_2 + VAR_3 - ( VAR_0 / 2 ) + 3 );
 }
}
