
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,size_t,int,int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_7 (char*,size_t) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  static char *VAR_4;
  static size_t VAR_5;
  static size_t VAR_6;
  int VAR_7;

  for (;;)
    {
      VAR_7 = FUNC_0 ();
      if (VAR_7 == VAR_0)
 break;

      if (VAR_7 == '$')
 {
   unsigned short int VAR_8 = 0;
   unsigned short int VAR_9 = 0;

   VAR_7 = FUNC_0 ();
   if (VAR_7 == '{')
     {
       VAR_8 = 1;
       VAR_7 = FUNC_0 ();
     }
   if ((VAR_7 >= 'A' && VAR_7 <= 'Z') || (VAR_7 >= 'a' && VAR_7 <= 'z') || VAR_7 == '_')
     {
       unsigned short int VAR_10;


       VAR_6 = 0;
       do
  {
    if (VAR_6 >= VAR_5)
      {
        VAR_5 = 2 * VAR_5 + 10;
        VAR_4 = FUNC_7 (VAR_4, VAR_5);
      }
    VAR_4[VAR_6++] = VAR_7;

    VAR_7 = FUNC_0 ();
  }
       while ((VAR_7 >= 'A' && VAR_7 <= 'Z') || (VAR_7 >= 'a' && VAR_7 <= 'z')
       || (VAR_7 >= '0' && VAR_7 <= '9') || VAR_7 == '_');

       if (VAR_8)
  {
    if (VAR_7 == '}')
      {
        VAR_9 = 1;
        VAR_10 = 1;
      }
    else
      {
        VAR_10 = 0;
        FUNC_1 (VAR_7);
      }
  }
       else
  {
    VAR_10 = 1;
    FUNC_1 (VAR_7);
  }

       if (VAR_10)
  {

    if (VAR_6 >= VAR_5)
      {
        VAR_5 = 2 * VAR_5 + 10;
        VAR_4 = FUNC_7 (VAR_4, VAR_5);
      }
    VAR_4[VAR_6] = '\0';


    if (!VAR_1
        && !FUNC_6 (&VAR_3, VAR_4))
      VAR_10 = 0;
  }

       if (VAR_10)
  {

    const char *VAR_11 = FUNC_4 (VAR_4);

    if (VAR_11 != ((void*)0))
      FUNC_2 (VAR_11, VAR_2);
  }
       else
  {



    FUNC_5 ('$');
    if (VAR_8)
      FUNC_5 ('{');
    FUNC_3 (VAR_4, VAR_6, 1, VAR_2);
    if (VAR_9)
      FUNC_5 ('}');
  }
     }
   else
     {
       FUNC_1 (VAR_7);
       FUNC_5 ('$');
       if (VAR_8)
  FUNC_5 ('{');
     }
 }
      else
 FUNC_5 (VAR_7);
    }
}
