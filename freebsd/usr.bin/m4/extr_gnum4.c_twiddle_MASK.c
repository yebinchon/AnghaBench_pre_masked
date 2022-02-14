
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{

 if (*VAR_0 == '^') {
  FUNC_0(*VAR_0);
  VAR_0++;
 }
 if (*VAR_0 == '+') {
  FUNC_0('\\');
 }

 while (*VAR_0 != '\0') {
  if (*VAR_0 == '\\') {
   switch(VAR_0[1]) {
   case '(':
   case ')':
   case '|':
    FUNC_0(VAR_0[1]);
    break;
   case 'w':
    FUNC_2("[_a-zA-Z0-9]");
    break;
   case 'W':
    FUNC_2("[^_a-zA-Z0-9]");
    break;
   case '<':
    FUNC_2("[[:<:]]");
    break;
   case '>':
    FUNC_2("[[:>:]]");
    break;
   default:
    FUNC_1(VAR_0, 2);
    break;
   }
   VAR_0+=2;
   continue;
  }
  if (*VAR_0 == '(' || *VAR_0 == ')' || *VAR_0 == '|')
   FUNC_0('\\');

  FUNC_0(*VAR_0);
  VAR_0++;
 }
 return FUNC_3();
}
