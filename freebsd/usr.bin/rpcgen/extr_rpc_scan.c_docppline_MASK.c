
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(char *VAR_0, int *VAR_1, const char **VAR_2)
{
 char *VAR_3;
 int VAR_4;
 char *VAR_5;

 VAR_0++;
 while (FUNC_4(*VAR_0)) {
  VAR_0++;
 }
 VAR_4 = FUNC_0(VAR_0);
 while (FUNC_3(*VAR_0)) {
  VAR_0++;
 }
 while (FUNC_4(*VAR_0)) {
  VAR_0++;
 }
 if (*VAR_0 != '"') {
  FUNC_1("preprocessor error");
 }
 VAR_0++;
 VAR_5 = VAR_3 = FUNC_6(FUNC_5(VAR_0) + 1);
 while (*VAR_0 && *VAR_0 != '"') {
  *VAR_5++ = *VAR_0++;
 }
 if (*VAR_0 == 0) {
  FUNC_1("preprocessor error");
 }
 *VAR_5 = 0;
 if (*VAR_3 == 0) {
  *VAR_2 = ((void*)0);
  FUNC_2(VAR_3);
 } else {
  *VAR_2 = VAR_3;
 }
 *VAR_1 = VAR_4 - 1;
}
