
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char) ;

void FUNC_1(struct strbuf *VAR_0, const char *VAR_1)
{
 char VAR_2;

 if (*VAR_1 == '^') {

  FUNC_0(VAR_0, '\\');
  FUNC_0(VAR_0, *VAR_1++);
 }
 if (*VAR_1 == '*')

  FUNC_0(VAR_0, *VAR_1++);

 while ((VAR_2 = *VAR_1++)) {
  switch (VAR_2) {
  case '[':
  case '.':
  case '\\':
  case '*':
   FUNC_0(VAR_0, '\\');
   FUNC_0(VAR_0, VAR_2);
   break;

  case '$':

   if (*VAR_1 == '\0')
    FUNC_0(VAR_0, '\\');
   FUNC_0(VAR_0, VAR_2);
   break;

  default:
   FUNC_0(VAR_0, VAR_2);
   break;
  }
 }
}
