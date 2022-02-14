
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char *VAR_2, char *VAR_3)
{
 int VAR_4;
 char *VAR_5 = VAR_3;
 char *VAR_6;


 if (!*VAR_5) {
  FUNC_0(&VAR_6, "{k:%s}{d:%s/\"\"}", VAR_2, VAR_2);
  FUNC_3(VAR_6);
  FUNC_1(VAR_6);
  return;
 }

 FUNC_0(&VAR_6, "{:%s/%%s}", VAR_2);




 VAR_4 = FUNC_2(VAR_5, '\'') ? '"'
  : FUNC_2(VAR_5, '"') ? '\''
  : FUNC_2(VAR_5, ' ') || FUNC_2(VAR_5, '\t') ? '"'
  : 0;

 if (VAR_4 && VAR_1 & VAR_0)
  FUNC_3("{P:/%c}", VAR_4);

 FUNC_3(VAR_6, VAR_3);

 FUNC_1(VAR_6);

 if (VAR_4 && VAR_1 & VAR_0)
  FUNC_3("{P:/%c}", VAR_4);
}
