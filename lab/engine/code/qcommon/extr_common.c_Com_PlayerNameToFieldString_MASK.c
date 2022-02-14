
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0( char *VAR_2, int VAR_3, const char *VAR_4 )
{
 const char *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;

 if( VAR_2 == ((void*)0) || VAR_4 == ((void*)0) )
  return VAR_0;

 if( VAR_3 <= 0 )
  return VAR_1;

 *VAR_2 = '\0';
 VAR_5 = VAR_4;

 for( VAR_6 = 0; *VAR_5 != '\0'; VAR_6++, VAR_5++ )
 {
  if( VAR_6 + 1 >= VAR_3 )
   break;

  if( *VAR_5 <= ' ' )
  {
   if( VAR_6 + 5 + 1 >= VAR_3 )
    break;

   VAR_7 = *VAR_5 >> 4;
   VAR_8 = *VAR_5 & 15;

   VAR_2[VAR_6+0] = '\\';
   VAR_2[VAR_6+1] = '0';
   VAR_2[VAR_6+2] = 'x';
   VAR_2[VAR_6+3] = VAR_7 > 9 ? VAR_7 - 10 + 'a' : VAR_7 + '0';
   VAR_2[VAR_6+4] = VAR_8 > 9 ? VAR_8 - 10 + 'a' : VAR_8 + '0';

   VAR_6 += 4;
  } else {
   VAR_2[VAR_6] = *VAR_5;
  }
 }
 VAR_2[VAR_6] = '\0';

 return VAR_1;
}
