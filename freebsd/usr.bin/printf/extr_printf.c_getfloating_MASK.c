
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long double FUNC_0 () ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 long double FUNC_2 (char*,char**) ;
 long double FUNC_3 (char*,char**) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(long double *VAR_3, int VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (!*VAR_2) {
  *VAR_3 = 0.0;
  return (0);
 }
 if (**VAR_2 == '"' || **VAR_2 == '\'') {
  *VAR_3 = FUNC_0();
  return (0);
 }
 VAR_6 = 0;
 VAR_1 = 0;
 if (VAR_4)
  *VAR_3 = FUNC_3(*VAR_2, &VAR_5);
 else
  *VAR_3 = FUNC_2(*VAR_2, &VAR_5);
 if (VAR_5 == *VAR_2) {
  FUNC_4("%s: expected numeric value", *VAR_2);
  VAR_6 = 1;
 } else if (*VAR_5 != '\0') {
  FUNC_4("%s: not completely converted", *VAR_2);
  VAR_6 = 1;
 }
 if (VAR_1 == VAR_0) {
  FUNC_4("%s: %s", *VAR_2, FUNC_1(VAR_0));
  VAR_6 = 1;
 }
 ++VAR_2;
 return (VAR_6);
}
