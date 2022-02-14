
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,int) ;
 char* FUNC_1 (char*,char) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static void FUNC_3(char **VAR_0, const char **VAR_1)
{
 char *VAR_2, *VAR_3;
 VAR_3 = FUNC_0(VAR_0, 1);
 VAR_2 = FUNC_1(VAR_3, ':');
 if (VAR_2) {
  long VAR_4 = FUNC_2(VAR_2 + 1, &VAR_3, 10);
  if (VAR_3 != VAR_2 + 1 && *VAR_3 == '\0' && 0 <= VAR_4 && VAR_4 < 65536) {
   *VAR_2 = 0;
   *VAR_1 = VAR_2 + 1;
  } else if (!VAR_2[1]) {
   *VAR_2 = 0;
  }
 }
}
