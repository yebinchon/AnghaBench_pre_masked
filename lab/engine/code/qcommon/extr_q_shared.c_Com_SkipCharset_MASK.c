
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,char*) ;

char *FUNC_1( char *VAR_0, char *VAR_1 )
{
 char *VAR_2 = VAR_0;

 while( VAR_2 )
 {
  if( FUNC_0( *VAR_2, VAR_1 ) )
   VAR_2++;
  else
   break;
 }

 return VAR_2;
}
