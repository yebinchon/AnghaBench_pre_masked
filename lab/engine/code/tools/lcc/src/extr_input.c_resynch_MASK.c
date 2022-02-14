
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 () ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void) {
 for (VAR_2++; *VAR_2 == ' ' || *VAR_2 == '\t'; )
  VAR_2++;
 if (VAR_5 - VAR_2 < VAR_1)
  FUNC_0();
 if (FUNC_4((char *)VAR_2, "pragma", 6) == 0) {
  VAR_2 += 6;
  FUNC_2();
 } else if (*VAR_2 >= '0' && *VAR_2 <= '9') {
 line: for (VAR_6 = 0; *VAR_2 >= '0' && *VAR_2 <= '9'; )
   VAR_6 = 10*VAR_6 + *VAR_2++ - '0';
  VAR_6--;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;
  if (*VAR_2 == '"') {
   VAR_3 = (char *)++VAR_2;
   while (*VAR_2 && *VAR_2 != '"' && *VAR_2 != '\n')
    VAR_2++;
   VAR_3 = FUNC_3(VAR_3, (char *)VAR_2 - VAR_3);
   if (*VAR_2 == '\n')
    FUNC_5("missing \" in preprocessor line\n");
   if (VAR_4 == 0)
    VAR_4 = VAR_3;
  }
 } else if (FUNC_4((char *)VAR_2, "line", 4) == 0) {
  for (VAR_2 += 4; *VAR_2 == ' ' || *VAR_2 == '\t'; )
   VAR_2++;
  if (*VAR_2 >= '0' && *VAR_2 <= '9')
   goto line;
  if (VAR_0 >= 2)
   FUNC_5("unrecognized control line\n");
 } else if (VAR_0 >= 2 && *VAR_2 != '\n')
  FUNC_5("unrecognized control line\n");
 while (*VAR_2)
  if (*VAR_2++ == '\n') {
   if (VAR_2 == VAR_5 + 1)
    FUNC_1();
   else
    break;
  }
}
