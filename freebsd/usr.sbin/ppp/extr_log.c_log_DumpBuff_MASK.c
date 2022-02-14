
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,char*,int) ;

void
FUNC_5(int VAR_0, const char *VAR_1, const u_char *VAR_2, int VAR_3)
{
  if (FUNC_1(VAR_0)) {
    char VAR_4[68];
    char *VAR_5, *VAR_6;

    if (VAR_1 && *VAR_1)
      FUNC_2(VAR_0, "%s\n", VAR_1);
    while (VAR_3 > 0) {
      VAR_5 = VAR_4;
      VAR_6 = VAR_5 + 50;
      for (VAR_5 = VAR_4; VAR_5 != VAR_4 + 48 && VAR_3--; VAR_5 += 3, VAR_2++) {
 FUNC_4(VAR_5, " %02x", (int) *VAR_2);
        *VAR_6++ = FUNC_0(*VAR_2) ? *VAR_2 : '.';
      }
      FUNC_3(VAR_5, ' ', 50 - (VAR_5 - VAR_4));
      *VAR_6 = '\0';
      FUNC_2(VAR_0, "%s\n", VAR_4);
    }
  }
}
