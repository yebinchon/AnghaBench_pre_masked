
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0)
{
 char *VAR_1;
 char *VAR_2 = FUNC_0(VAR_0, ':');

 if (VAR_2) {
  long VAR_3 = FUNC_1(VAR_2 + 1, &VAR_1, 10);
  if (VAR_1 != VAR_2 + 1 && *VAR_1 == '\0' && 0 <= VAR_3 && VAR_3 < 65536) {
   *VAR_2 = '\0';
   return VAR_2+1;
  }
 }

 return ((void*)0);
}
