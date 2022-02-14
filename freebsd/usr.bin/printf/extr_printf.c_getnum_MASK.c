
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uintmax_t ;
typedef void* intmax_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 () ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (char*,char**,int ) ;
 void* FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(intmax_t *VAR_3, uintmax_t *VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (!*VAR_2) {
  *VAR_3 = *VAR_4 = 0;
  return (0);
 }
 if (**VAR_2 == '"' || **VAR_2 == '\'') {
  if (VAR_5)
   *VAR_3 = FUNC_0();
  else
   *VAR_4 = FUNC_0();
  return (0);
 }
 VAR_7 = 0;
 VAR_1 = 0;
 if (VAR_5)
  *VAR_3 = FUNC_2(*VAR_2, &VAR_6, 0);
 else
  *VAR_4 = FUNC_3(*VAR_2, &VAR_6, 0);
 if (VAR_6 == *VAR_2) {
  FUNC_4("%s: expected numeric value", *VAR_2);
  VAR_7 = 1;
 }
 else if (*VAR_6 != '\0') {
  FUNC_4("%s: not completely converted", *VAR_2);
  VAR_7 = 1;
 }
 if (VAR_1 == VAR_0) {
  FUNC_4("%s: %s", *VAR_2, FUNC_1(VAR_0));
  VAR_7 = 1;
 }
 ++VAR_2;
 return (VAR_7);
}
