
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 int * FUNC_6 (char*,char*) ;
 char* FUNC_7 (char**,char*) ;

void
FUNC_8(char *VAR_0)
{
 register int VAR_1;
 register char *VAR_2;
 char *VAR_3, *VAR_4;


 if ((VAR_3 = FUNC_4(VAR_0, ':')) == ((void*)0))
  FUNC_0(1, "termcap names not colon terminated");
 *VAR_3++ = '\0';


 VAR_4 = FUNC_5("");
 while ((VAR_2 = FUNC_7(&VAR_0, "|")) != ((void*)0))
  if (*VAR_2 != '\0' && FUNC_6(VAR_2, " \t") == ((void*)0)) {
   (void)FUNC_2("%s%s", VAR_4, VAR_2);
   VAR_4 = FUNC_5("|");
  }
 (void)FUNC_3(':');





 while ((VAR_2 = FUNC_7(&VAR_3, ":")) != ((void*)0)) {
  while ((VAR_1 = *VAR_2) != '\0' && FUNC_1(VAR_1))
   ++VAR_2;
  if (VAR_1 == '\0')
   continue;
  while ((VAR_1 = *VAR_2++) != '\0')
   switch(VAR_1) {
   case '\033':
    (void)FUNC_2("\\E");
   case ' ':
    (void)FUNC_2("\\040");
    break;
   case '!':
    (void)FUNC_2("\\041");
    break;
   case ',':
    (void)FUNC_2("\\054");
    break;
   case '"':
    (void)FUNC_2("\\042");
    break;
   case '\'':
    (void)FUNC_2("\\047");
    break;
   case '`':
    (void)FUNC_2("\\140");
    break;
   case '\\':
   case '^':
    (void)FUNC_3(VAR_1);
    if ((VAR_1 = *VAR_2++) == '\0')
     break;

   default:
    (void)FUNC_3(VAR_1);
  }
  (void)FUNC_3(':');
 }
}
