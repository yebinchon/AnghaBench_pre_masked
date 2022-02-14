
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 () ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int VAR_5 ;
 int * FUNC_3 (char*,char const) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static const char *
FUNC_5(const char *VAR_7)
{
 if (VAR_6 || VAR_3[VAR_2]) {
  for (; FUNC_2((unsigned char)*VAR_7); VAR_7++)
   if (*VAR_7 == '\n')
    VAR_5 = VAR_1;
  return (VAR_7);
 }
 while (*VAR_7 != '\0')

  if (FUNC_4(VAR_7, "\\\r\n", 3) == 0)
   VAR_7 += 3;
  else if (FUNC_4(VAR_7, "\\\n", 2) == 0)
   VAR_7 += 2;
  else switch (VAR_4) {
  case 130:
   if (FUNC_4(VAR_7, "/\\\r\n", 4) == 0) {
    VAR_4 = 129;
    VAR_7 += 4;
   } else if (FUNC_4(VAR_7, "/\\\n", 3) == 0) {
    VAR_4 = 129;
    VAR_7 += 3;
   } else if (FUNC_4(VAR_7, "/*", 2) == 0) {
    VAR_4 = 132;
    VAR_7 += 2;
   } else if (FUNC_4(VAR_7, "//", 2) == 0) {
    VAR_4 = 133;
    VAR_7 += 2;
   } else if (FUNC_4(VAR_7, "\'", 1) == 0) {
    VAR_4 = 134;
    VAR_5 = VAR_0;
    VAR_7 += 1;
   } else if (FUNC_4(VAR_7, "\"", 1) == 0) {
    VAR_4 = 128;
    VAR_5 = VAR_0;
    VAR_7 += 1;
   } else if (FUNC_4(VAR_7, "\n", 1) == 0) {
    VAR_5 = VAR_1;
    VAR_7 += 1;
   } else if (FUNC_3(" \r\t", *VAR_7) != ((void*)0)) {
    VAR_7 += 1;
   } else
    return (VAR_7);
   continue;
  case 133:
   if (FUNC_4(VAR_7, "\n", 1) == 0) {
    VAR_4 = 130;
    VAR_5 = VAR_1;
   }
   VAR_7 += 1;
   continue;
  case 134:
  case 128:
   if ((VAR_4 == 134 && VAR_7[0] == '\'') ||
       (VAR_4 == 128 && VAR_7[0] == '\"')) {
    VAR_4 = 130;
    VAR_7 += 1;
   } else if (VAR_7[0] == '\\') {
    if (VAR_7[1] == '\0')
     VAR_7 += 1;
    else
     VAR_7 += 2;
   } else if (FUNC_4(VAR_7, "\n", 1) == 0) {
    if (VAR_4 == 134)
     FUNC_1("Unterminated char literal");
    else
     FUNC_1("Unterminated string literal");
   } else
    VAR_7 += 1;
   continue;
  case 132:
   if (FUNC_4(VAR_7, "*\\\r\n", 4) == 0) {
    VAR_4 = 131;
    VAR_7 += 4;
   } else if (FUNC_4(VAR_7, "*\\\n", 3) == 0) {
    VAR_4 = 131;
    VAR_7 += 3;
   } else if (FUNC_4(VAR_7, "*/", 2) == 0) {
    VAR_4 = 130;
    VAR_7 += 2;
   } else
    VAR_7 += 1;
   continue;
  case 129:
   if (*VAR_7 == '*') {
    VAR_4 = 132;
    VAR_7 += 1;
   } else if (*VAR_7 == '/') {
    VAR_4 = 133;
    VAR_7 += 1;
   } else {
    VAR_4 = 130;
    VAR_5 = VAR_0;
   }
   continue;
  case 131:
   if (*VAR_7 == '/') {
    VAR_4 = 130;
    VAR_7 += 1;
   } else
    VAR_4 = 132;
   continue;
  default:
   FUNC_0();
  }
 return (VAR_7);
}
