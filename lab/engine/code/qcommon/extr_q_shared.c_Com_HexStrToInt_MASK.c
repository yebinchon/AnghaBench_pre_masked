
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char FUNC_1 (char const) ;

int FUNC_2( const char *VAR_0 )
{
 if ( !VAR_0 )
  return -1;


 if( VAR_0[ 0 ] == '0' && VAR_0[ 1 ] == 'x' && VAR_0[ 2 ] != '\0' )
 {
  int VAR_1, VAR_2 = 0, VAR_3 = FUNC_0( VAR_0 );

  for( VAR_1 = 2; VAR_1 < VAR_3; VAR_1++ )
  {
   char VAR_4;

   VAR_2 *= 16;

   VAR_4 = FUNC_1( VAR_0[ VAR_1 ] );

   if( VAR_4 >= '0' && VAR_4 <= '9' )
    VAR_4 -= '0';
   else if( VAR_4 >= 'a' && VAR_4 <= 'f' )
    VAR_4 = VAR_4 - 'a' + 10;
   else
    return -1;

   VAR_2 += VAR_4;
  }

  return VAR_2;
 }

 return -1;
}
