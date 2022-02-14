
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, int VAR_1, size_t *VAR_2)
{
 char *VAR_3, *VAR_4, VAR_5;
 int VAR_6;

 for (VAR_3 = VAR_4 = VAR_0; ((VAR_5 = *VAR_0) != 0); ++VAR_0, ++VAR_4) {
  if (VAR_5 != '\\') {
   *VAR_4 = VAR_5;
   continue;
  }
  switch (*++VAR_0) {
  case '\0':
   *VAR_4 = '\\';
   *++VAR_4 = '\0';
   *VAR_2 = VAR_4 - VAR_3;
   return (0);
  case '\\':
  case '\'':
   *VAR_4 = *VAR_0;
   break;
  case 'a':
   *VAR_4 = '\a';
   break;
  case 'b':
   *VAR_4 = '\b';
   break;
  case 'c':
   if (!VAR_1) {
    *VAR_4 = '\0';
    *VAR_2 = VAR_4 - VAR_3;
    return (1);
   }
   *VAR_4 = 'c';
   break;
  case 'f':
   *VAR_4 = '\f';
   break;
  case 'n':
   *VAR_4 = '\n';
   break;
  case 'r':
   *VAR_4 = '\r';
   break;
  case 't':
   *VAR_4 = '\t';
   break;
  case 'v':
   *VAR_4 = '\v';
   break;

  case '0': case '1': case '2': case '3':
  case '4': case '5': case '6': case '7':
   VAR_5 = (!VAR_1 && *VAR_0 == '0') ? 4 : 3;
   for (VAR_6 = 0;
       VAR_5-- && *VAR_0 >= '0' && *VAR_0 <= '7'; ++VAR_0) {
    VAR_6 <<= 3;
    VAR_6 += *VAR_0 - '0';
   }
   --VAR_0;
   if (VAR_1 && VAR_6 == '%') {
    *VAR_4++ = '%';
    *VAR_4 = '%';
   } else
    *VAR_4 = (char)VAR_6;
   break;
  default:
   *VAR_4 = *VAR_0;
   break;
  }
 }
 *VAR_4 = '\0';
 *VAR_2 = VAR_4 - VAR_3;
 return (0);
}
