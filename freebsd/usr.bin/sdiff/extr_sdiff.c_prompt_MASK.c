
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const) ;
 int VAR_0 ;
 int FUNC_7 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;


 FUNC_7('%');


 for (; (VAR_5 = FUNC_8(VAR_2)); FUNC_4(VAR_5)) {
  const char *VAR_6;


  for (VAR_6 = VAR_5; FUNC_6(*VAR_6); ++VAR_6)
   ;
  switch (*VAR_6) {
  case 'e':

   ++VAR_6;
   if (FUNC_0(VAR_6, VAR_3, VAR_4) == -1)
    goto USAGE;
   break;
  case 'l':
  case '1':

   if (VAR_3 != ((void*)0))
    FUNC_3(VAR_0, "%s\n", VAR_3);

   break;
  case 'q':
   goto QUIT;
  case 'r':
  case '2':

   if (VAR_4 != ((void*)0))
    FUNC_3(VAR_0, "%s\n", VAR_4);

   break;
  case 's':
   VAR_1 = 1;
   goto PROMPT;
  case 'v':
   VAR_1 = 0;

  default:

USAGE:
   FUNC_5();
PROMPT:
   FUNC_7('%');


   continue;
  }
  FUNC_4(VAR_5);
  return;
 }





QUIT:
 FUNC_2(VAR_0);
 FUNC_1(0);
}
