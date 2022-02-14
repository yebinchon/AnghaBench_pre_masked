
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;
 char* VAR_3 ;

void FUNC_8( const char *VAR_4 )
{
 char VAR_5[1024];
 const char *VAR_6;
  const char *VAR_7;
 int VAR_8, VAR_9;

 if (!(VAR_4[0] == '/' || VAR_4[0] == '\\' || VAR_4[1] == ':'))
 {
  FUNC_1 (VAR_5);
  FUNC_4 (VAR_5, VAR_4);
  VAR_4 = VAR_5;
 }



 VAR_8 = FUNC_6(VAR_0);
 for (VAR_6=VAR_4+FUNC_6(VAR_4)-1 ; VAR_6 != VAR_4 ; VAR_6--)
 {
  int VAR_10;

  if (!FUNC_2 (VAR_6, VAR_0, VAR_8))
  {





      VAR_7 = VAR_6 + VAR_8;
      VAR_9 = 1;
      while (*VAR_7 && *VAR_7 != '/' && *VAR_7 != '\\')
      {
        VAR_7++;
        VAR_9++;
      }
   FUNC_7 (VAR_2, VAR_4, VAR_6+VAR_8+VAR_9-VAR_4);
   FUNC_3 ("qdir: %s\n", VAR_2);
   for ( VAR_10 = 0; VAR_10 < FUNC_6( VAR_2 ); VAR_10++ )
   {
    if ( VAR_2[VAR_10] == '\\' )
     VAR_2[VAR_10] = '/';
   }

   VAR_6 += VAR_8+VAR_9;
   while (*VAR_6)
   {
    if (*VAR_6 == '/' || *VAR_6 == '\\')
    {
     FUNC_7 (VAR_1, VAR_4, VAR_6+1-VAR_4);

     for ( VAR_10 = 0; VAR_10 < FUNC_6( VAR_1 ); VAR_10++ )
     {
      if ( VAR_1[VAR_10] == '\\' )
       VAR_1[VAR_10] = '/';
     }

     FUNC_3 ("gamedir: %s\n", VAR_1);

     if ( !VAR_3[0] )
      FUNC_5( VAR_3, VAR_1 );
     else if ( VAR_3[FUNC_6( VAR_3 )-1] != '/' )
     {
      VAR_3[FUNC_6( VAR_3 )] = '/';
      VAR_3[FUNC_6( VAR_3 )+1] = 0;
     }

     return;
    }
    VAR_6++;
   }
   FUNC_0 ("No gamedir in %s", VAR_4);
   return;
  }
 }
 FUNC_0 ("SetQdirFromPath: no '%s' in %s", VAR_0, VAR_4);
}
