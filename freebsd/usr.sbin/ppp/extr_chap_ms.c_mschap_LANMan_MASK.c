
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char,int) ;
 char FUNC_3 (char) ;

void
FUNC_4(char *VAR_0, char *VAR_1, char *VAR_2)
{
  static u_char VAR_3[] = "KGS!@#$%";
  char VAR_4[14], *VAR_5, *VAR_6;
  u_char VAR_7[16];

  VAR_6 = VAR_4 + sizeof VAR_4;
  for (VAR_5 = VAR_4; *VAR_2 && VAR_5 < VAR_6; VAR_5++, VAR_2++)
    *VAR_5 = FUNC_3(*VAR_2);
  if (VAR_5 < VAR_6)
    FUNC_2(VAR_5, '\0', VAR_6 - VAR_5);

  FUNC_1(VAR_3, VAR_4, VAR_7);
  FUNC_1(VAR_3, VAR_4 + 7, VAR_7 + 8);

  FUNC_0(VAR_1, VAR_7, VAR_0);
}
