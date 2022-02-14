
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0)
{
 char VAR_1, *VAR_2, *VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_2 = VAR_0; (*VAR_0 = *VAR_2); VAR_2++, VAR_0++) {
  if (*VAR_2 != '\\')
   continue;

  switch (*++VAR_2) {
  case 'a':
   *VAR_0 = '\a';
   continue;
  case 'b':
   *VAR_0 = '\b';
   continue;
  case 'e':
   *VAR_0 = '\e';
   continue;
  case 'f':
   *VAR_0 = '\f';
   continue;
  case 'n':
   *VAR_0 = '\n';
   continue;
  case 'r':
   *VAR_0 = '\r';
   continue;
  case 't':
   *VAR_0 = '\t';
   continue;
  case 'v':
   *VAR_0 = '\v';
   continue;
  case '\\':
   *VAR_0 = '\\';
   continue;
  case '\'':
   *VAR_0 = '\'';
   continue;
  case '\"':
   *VAR_0 = '"';
   continue;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
   for (VAR_4 = 0, VAR_1 = 0;
        FUNC_0((unsigned char)*VAR_2) && VAR_4 < 3;
        VAR_4++, VAR_2++) {
    VAR_1 <<= 3;
    VAR_1 |= (*VAR_2 - '0');
   }
   *VAR_0 = VAR_1;
   --VAR_2;
   continue;
  case 'x':
   VAR_2++;
   for (VAR_4 = 0, VAR_1 = 0;
        FUNC_2((unsigned char)*VAR_2) && VAR_4 < 2;
        VAR_4++, VAR_2++) {
    VAR_1 <<= 4;
    if (FUNC_1((unsigned char)*VAR_2))
     VAR_1 |= (*VAR_2 - '0');
    else
     VAR_1 |= ((FUNC_3((unsigned char)*VAR_2) -
         'A') + 10);
   }
   *VAR_0 = VAR_1;
   --VAR_2;
   continue;
  default:
   --VAR_2;
   break;
  }
 }

 return (VAR_3);
}
