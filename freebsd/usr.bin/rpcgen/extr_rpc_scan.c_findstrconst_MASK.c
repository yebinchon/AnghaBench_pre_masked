
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(char **VAR_0, const char **VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 int VAR_4;

 VAR_2 = *VAR_0;
 do {
  VAR_2++;
 } while (*VAR_2 && *VAR_2 != '"');
 if (*VAR_2 == 0) {
  FUNC_0("unterminated string constant");
 }
 VAR_2++;
 VAR_4 = VAR_2 - *VAR_0 + 1;
 VAR_3 = FUNC_2(VAR_4);
 (void) FUNC_1(VAR_3, *VAR_0, VAR_4);
 *VAR_1 = VAR_3;
 *VAR_0 = VAR_2;
}
