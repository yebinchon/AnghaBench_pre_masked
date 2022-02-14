
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (size_t) ;

void
FUNC_4(char **VAR_1, char **VAR_2)
{
 size_t VAR_3;
 char **VAR_4;

 VAR_3 = 4 + *VAR_2 - *VAR_1 + 1;
 VAR_0 = FUNC_3(VAR_3);
 FUNC_2(VAR_0, "diff", VAR_3);
 for (VAR_4 = VAR_1 + 1; VAR_4 < VAR_2; VAR_4++) {
  if (FUNC_0(*VAR_4, "--") != 0) {
   FUNC_1(VAR_0, " ", VAR_3);
   FUNC_1(VAR_0, *VAR_4, VAR_3);
  }
 }
}
