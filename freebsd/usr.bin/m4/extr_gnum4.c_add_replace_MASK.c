
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regmatch_t ;
typedef int regex_t ;


 int FUNC_0 (char const,char const*,int *,int *) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, regex_t *VAR_2, const char *VAR_3, regmatch_t *VAR_4)
{
 const char *VAR_5;

 for (VAR_5 = VAR_3; *VAR_5 != '\0'; VAR_5++) {
  if (*VAR_5 == '&' && !VAR_0) {
   FUNC_0(0, VAR_1, VAR_2, VAR_4);
   continue;
  }
  if (*VAR_5 == '\\') {
   if (VAR_5[1] == '\\') {
    FUNC_1(VAR_5[1]);
    VAR_5++;
    continue;
   }
   if (VAR_5[1] == '&') {
    if (VAR_0)
     FUNC_0(0, VAR_1, VAR_2, VAR_4);
    else
     FUNC_1(VAR_5[1]);
    VAR_5++;
    continue;
   }
   if (FUNC_2((unsigned char)VAR_5[1])) {
    FUNC_0(*(++VAR_5) - '0', VAR_1, VAR_2, VAR_4);
    continue;
   }
  }
  FUNC_1(*VAR_5);
 }
}
