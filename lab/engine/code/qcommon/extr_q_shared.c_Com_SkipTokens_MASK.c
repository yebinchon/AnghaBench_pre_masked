
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,char*) ;

char *FUNC_1( char *VAR_0, int VAR_1, char *VAR_2 )
{
 int VAR_3 = 0;
 char *VAR_4 = VAR_0;

 while( VAR_3 < VAR_1 )
 {
  if( FUNC_0( *VAR_4++, VAR_2 ) )
  {
   VAR_3++;
   while( FUNC_0( *VAR_4, VAR_2 ) )
    VAR_4++;
  }
  else if( *VAR_4 == '\0' )
   break;
 }

 if( VAR_3 == VAR_1 )
  return VAR_4;
 else
  return VAR_0;
}
