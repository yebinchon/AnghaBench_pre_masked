
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (char*) ;
 int * FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*) ;

char *
FUNC_6(char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 if (FUNC_4(VAR_0, '(') == ((void*)0) && FUNC_4(VAR_0, '<') == ((void*)0)
     && FUNC_4(VAR_0, ' ') == ((void*)0))
  return (VAR_0);


 if ((VAR_1 = FUNC_1(FUNC_5(VAR_0) + 1)) == ((void*)0))
  FUNC_0(1, "Out of memory");
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_2 = VAR_1;
 for (VAR_3 = VAR_0, VAR_4 = VAR_2; (VAR_5 = *VAR_3++) != '\0'; ) {
  switch (VAR_5) {
  case '(':
   VAR_3 = FUNC_3(VAR_3);
   VAR_7 = 0;
   break;

  case '"':




   while ((VAR_5 = *VAR_3) != '\0') {
    VAR_3++;
    if (VAR_5 == '"')
     break;
    if (VAR_5 != '\\')
     *VAR_4++ = VAR_5;
    else if ((VAR_5 = *VAR_3) != '\0') {
     *VAR_4++ = VAR_5;
     VAR_3++;
    }
   }
   VAR_7 = 0;
   break;

  case ' ':
   if (VAR_3[0] == 'a' && VAR_3[1] == 't' && VAR_3[2] == ' ')
    VAR_3 += 3, *VAR_4++ = '@';
   else
   if (VAR_3[0] == '@' && VAR_3[1] == ' ')
    VAR_3 += 2, *VAR_4++ = '@';
   else
    VAR_7 = 1;
   break;

  case '<':
   VAR_4 = VAR_2;
   VAR_6++;
   VAR_7 = 0;
   break;

  case '>':
   if (VAR_6) {
    VAR_6 = 0;
    while ((VAR_5 = *VAR_3) != '\0' && VAR_5 != ',') {
     VAR_3++;
     if (VAR_5 == '(')
      VAR_3 = FUNC_3(VAR_3);
     else if (VAR_5 == '"')
      while ((VAR_5 = *VAR_3) != '\0') {
       VAR_3++;
       if (VAR_5 == '"')
        break;
       if (VAR_5 == '\\' && *VAR_3 != '\0')
        VAR_3++;
      }
    }
    VAR_7 = 0;
    break;
   }


  default:
   if (VAR_7) {
    VAR_7 = 0;
    *VAR_4++ = ' ';
   }
   *VAR_4++ = VAR_5;
   if (VAR_5 == ',' && !VAR_6 &&
       (*VAR_3 == ' ' || *VAR_3 == '"' || *VAR_3 == '<')) {
    *VAR_4++ = ' ';
    while (*VAR_3 == ' ')
     VAR_3++;
    VAR_7 = 0;
    VAR_2 = VAR_4;
   }
  }
 }
 *VAR_4 = '\0';

 if ((VAR_3 = FUNC_2(VAR_1, FUNC_5(VAR_1) + 1)) != ((void*)0))
  VAR_1 = VAR_3;
 return (VAR_1);
}
