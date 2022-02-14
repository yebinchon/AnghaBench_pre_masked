
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int VAR_0 ;
 char* FUNC_0 (char*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

char *FUNC_1( char **VAR_5, qboolean VAR_6 )
{
 int VAR_7 = 0, VAR_8;
 qboolean VAR_9 = VAR_4;
 char *VAR_10;

 VAR_10 = *VAR_5;
 VAR_8 = 0;
 VAR_2[0] = 0;
 VAR_3 = 0;


 if ( !VAR_10 )
 {
  *VAR_5 = ((void*)0);
  return VAR_2;
 }

 while ( 1 )
 {

  VAR_10 = FUNC_0( VAR_10, &VAR_9 );
  if ( !VAR_10 )
  {
   *VAR_5 = ((void*)0);
   return VAR_2;
  }
  if ( VAR_9 && !VAR_6 )
  {
   *VAR_5 = VAR_10;
   return VAR_2;
  }

  VAR_7 = *VAR_10;


  if ( VAR_7 == '/' && VAR_10[1] == '/' )
  {
   VAR_10 += 2;
   while (*VAR_10 && *VAR_10 != '\n') {
    VAR_10++;
   }
  }

  else if ( VAR_7=='/' && VAR_10[1] == '*' )
  {
   VAR_10 += 2;
   while ( *VAR_10 && ( *VAR_10 != '*' || VAR_10[1] != '/' ) )
   {
    if ( *VAR_10 == '\n' )
    {
     VAR_1++;
    }
    VAR_10++;
   }
   if ( *VAR_10 )
   {
    VAR_10 += 2;
   }
  }
  else
  {
   break;
  }
 }


 VAR_3 = VAR_1;


 if (VAR_7 == '\"')
 {
  VAR_10++;
  while (1)
  {
   VAR_7 = *VAR_10++;
   if (VAR_7=='\"' || !VAR_7)
   {
    VAR_2[VAR_8] = 0;
    *VAR_5 = ( char * ) VAR_10;
    return VAR_2;
   }
   if ( VAR_7 == '\n' )
   {
    VAR_1++;
   }
   if (VAR_8 < VAR_0 - 1)
   {
    VAR_2[VAR_8] = VAR_7;
    VAR_8++;
   }
  }
 }


 do
 {
  if (VAR_8 < VAR_0 - 1)
  {
   VAR_2[VAR_8] = VAR_7;
   VAR_8++;
  }
  VAR_10++;
  VAR_7 = *VAR_10;
 } while (VAR_7>32);

 VAR_2[VAR_8] = 0;

 *VAR_5 = ( char * ) VAR_10;
 return VAR_2;
}
