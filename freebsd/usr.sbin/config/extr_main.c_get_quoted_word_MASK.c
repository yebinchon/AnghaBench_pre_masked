
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,int *) ;

char *
FUNC_5(FILE *VAR_1)
{
 static char VAR_2[256];
 int VAR_3;
 char *VAR_4;
 int VAR_5 = 0;

begin:
 while ((VAR_3 = FUNC_1(VAR_1)) != VAR_0)
  if (VAR_3 != ' ' && VAR_3 != '\t')
   break;
 if (VAR_3 == VAR_0)
  return ((char *)VAR_0);
 if (VAR_3 == '\\'){
  VAR_5 = 1;
  goto begin;
 }
 if (VAR_3 == '\n') {
  if (VAR_5){
   VAR_5 = 0;
   goto begin;
  }
  else
   return (((void*)0));
 }
 VAR_4 = VAR_2;
 if (VAR_3 == '"' || VAR_3 == '\'') {
  int VAR_6 = VAR_3;

  VAR_5 = 0;
  while ((VAR_3 = FUNC_1(VAR_1)) != VAR_0) {
   if (VAR_3 == VAR_6 && !VAR_5)
    break;
   if (VAR_3 == '\n' && !VAR_5) {
    *VAR_4 = 0;
    FUNC_3("config: missing quote reading `%s'\n",
     VAR_2);
    FUNC_0(2);
   }
   if (VAR_3 == '\\' && !VAR_5) {
    VAR_5 = 1;
    continue;
   }
   if (VAR_3 != VAR_6 && VAR_5)
    *VAR_4++ = '\\';
   *VAR_4++ = VAR_3;
   VAR_5 = 0;
  }
 } else {
  *VAR_4++ = VAR_3;
  while ((VAR_3 = FUNC_1(VAR_1)) != VAR_0) {
   if (FUNC_2(VAR_3))
    break;
   *VAR_4++ = VAR_3;
  }
  if (VAR_3 != VAR_0)
   (void) FUNC_4(VAR_3, VAR_1);
 }
 *VAR_4 = 0;
 if (VAR_3 == VAR_0)
  return ((char *)VAR_0);
 return (VAR_2);
}
