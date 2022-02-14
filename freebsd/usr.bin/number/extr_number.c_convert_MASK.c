
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 char *VAR_6, *VAR_7;

 VAR_3 = 0;
 VAR_7 = ((void*)0);
 for (VAR_6 = VAR_2; *VAR_6 != '\0' && *VAR_6 != '\n'; ++VAR_6) {
  if (FUNC_1(*VAR_6)) {
   if (VAR_6 == VAR_2) {
    ++VAR_2;
    continue;
   }
   goto badnum;
  }
  if (FUNC_2(*VAR_6))
   continue;
  switch (*VAR_6) {
  case '.':
   if (VAR_7 != ((void*)0))
    goto badnum;
   VAR_7 = VAR_6 + 1;
   *VAR_6 = '\0';
   break;
  case '-':
   if (VAR_6 == VAR_2)
    break;

  default:
badnum: FUNC_0(1, "illegal number: %s", VAR_2);
   break;
  }
 }
 *VAR_6 = '\0';

 if ((VAR_4 = FUNC_5(VAR_2)) > VAR_0 ||
     (VAR_7 != ((void*)0) && ((VAR_3 = FUNC_5(VAR_7)) > VAR_0)))
  FUNC_0(1, "number too large, max %d digits.", VAR_0);

 if (*VAR_2 == '-') {
  (void)FUNC_4("minus%s", VAR_1 ? " " : "\n");
  ++VAR_2;
  --VAR_4;
 }

 VAR_5 = VAR_4 > 0 ? FUNC_6(VAR_4, VAR_2) : 0;
 if (VAR_7 != ((void*)0) && VAR_3 != 0)
  for (VAR_6 = VAR_7; *VAR_6 != '\0'; ++VAR_6)
   if (*VAR_6 != '0') {
    if (VAR_5)
     (void)FUNC_4("%sand%s",
         VAR_1 ? " " : "",
         VAR_1 ? " " : "\n");
    if (FUNC_6(VAR_3, VAR_7)) {
     if (VAR_1)
      (void)FUNC_4(" ");
     FUNC_3(VAR_3);
     VAR_5 = 1;
    }
    break;
   }
 if (!VAR_5)
  (void)FUNC_4("zero%s", VAR_1 ? "" : ".\n");
 if (VAR_1)
  (void)FUNC_4("\n");
}
