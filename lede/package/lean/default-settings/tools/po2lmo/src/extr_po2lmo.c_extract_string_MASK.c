
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = -1;

 for( VAR_3 = 0; (VAR_3 < FUNC_0(VAR_0)) && (VAR_3 < VAR_2); VAR_3++ )
 {
  if( (VAR_5 == -1) && (VAR_0[VAR_3] == '"') )
  {
   VAR_5 = VAR_3 + 1;
  }
  else if( VAR_5 >= 0 )
  {
   if( VAR_4 == 1 )
   {
    switch (VAR_0[VAR_3])
    {
    case '"':
    case '\\':
     VAR_5++;
     break;
    }
    VAR_1[VAR_3-VAR_5] = VAR_0[VAR_3];
    VAR_4 = 0;
   }
   else if( VAR_0[VAR_3] == '\\' )
   {
    VAR_1[VAR_3-VAR_5] = VAR_0[VAR_3];
    VAR_4 = 1;
   }
   else if( VAR_0[VAR_3] != '"' )
   {
    VAR_1[VAR_3-VAR_5] = VAR_0[VAR_3];
   }
   else
   {
    VAR_1[VAR_3-VAR_5] = '\0';
    break;
   }
  }
 }

 return (VAR_5 > -1) ? FUNC_0(VAR_1) : -1;
}
