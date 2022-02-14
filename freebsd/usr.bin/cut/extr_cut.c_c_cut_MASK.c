
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;
typedef int FILE ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_4, const char *VAR_5)
{
 wint_t VAR_6;
 int VAR_7;
 char *VAR_8;

 VAR_6 = 0;
 for (;;) {
  VAR_8 = VAR_3 + 1;
  for (VAR_7 = VAR_2; VAR_7; --VAR_7) {
   if ((VAR_6 = FUNC_1(VAR_4)) == VAR_0)
    goto out;
   if (VAR_6 == '\n')
    break;
   if (*VAR_8++)
    (void)FUNC_2(VAR_6);
  }
  if (VAR_6 != '\n') {
   if (VAR_1)
    while ((VAR_6 = FUNC_1(VAR_4)) != VAR_0 && VAR_6 != '\n')
     (void)FUNC_2(VAR_6);
   else
    while ((VAR_6 = FUNC_1(VAR_4)) != VAR_0 && VAR_6 != '\n');
  }
  (void)FUNC_2('\n');
 }
out:
 if (FUNC_0(VAR_4)) {
  FUNC_3("%s", VAR_5);
  return (1);
 }
 return (0);
}
