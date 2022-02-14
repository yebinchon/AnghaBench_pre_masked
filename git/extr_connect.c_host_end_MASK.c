
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(char **VAR_0, int VAR_1)
{
 char *VAR_2 = *VAR_0;
 char *VAR_3;
 char *VAR_4 = FUNC_2(VAR_2, "@[");
 if (VAR_4)
  VAR_4++;
 else
  VAR_4 = VAR_2;
 if (VAR_4[0] == '[') {
  VAR_3 = FUNC_1(VAR_4 + 1, ']');
  if (VAR_3) {
   if (VAR_1) {
    *VAR_3 = 0;
    FUNC_0(VAR_4, VAR_4 + 1, VAR_3 - VAR_4);
    VAR_3++;
   }
  } else
   VAR_3 = VAR_2;
 } else
  VAR_3 = VAR_2;
 return VAR_3;
}
