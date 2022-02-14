
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int) ;
 char** FUNC_3 (char**,int) ;
 int FUNC_4 (char*) ;

char **
FUNC_5(char **VAR_0, char *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 char **VAR_8;

 if (VAR_0 == ((void*)0)) {
  if ((VAR_0 = FUNC_2(sizeof(char *))) == ((void*)0))
   FUNC_1(1, "malloc");
  *VAR_0 = ((void*)0);
 }


 if (*VAR_1 == '\0') {
  FUNC_4("empty database name, ignored");
  return(VAR_0);
 }


 for(VAR_3 = 0, VAR_8 = VAR_0; *VAR_8 != ((void*)0); VAR_8++, VAR_3++);

 for (VAR_6 = VAR_5 = VAR_1; ; VAR_6++) {
  if (*VAR_6 == ':' ||
      (!*VAR_6 && !(*(VAR_6 - 1) == ':' && VAR_6 == 1+ VAR_1))) {

   if (VAR_6 == VAR_5)
    VAR_7 = VAR_2;
   else {

    VAR_4 = VAR_6 - VAR_5;
    if ((VAR_7 = FUNC_2(sizeof(char) * (VAR_4 + 1)))
        == ((void*)0))
     FUNC_1(1, "malloc");
    FUNC_0(VAR_5, VAR_7, VAR_4);
    *(VAR_7 + VAR_4) = '\0';
   }

   if ((VAR_0 = FUNC_3(VAR_0, sizeof(char *) * (VAR_3 + 2)))
       == ((void*)0))
    FUNC_1(1, "realloc");
   *(VAR_0 + VAR_3) = VAR_7;
   *(VAR_0 + ++VAR_3) = ((void*)0);
   VAR_5 = VAR_6 + 1;
  }
  if (*VAR_6 == '\0')
   break;
 }
 return (VAR_0);
}
