
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0, char VAR_1, const char *VAR_2)
{
 char *VAR_3;
 char VAR_4, VAR_5;
 int VAR_6;

 if (VAR_0 == ((void*)0))
  VAR_0 = "";
 if (VAR_2 == ((void*)0))
  VAR_2 = "";

 if (VAR_0[0] == '\0')
  VAR_4 = '\0';
 else
  VAR_4 = VAR_0[FUNC_2(VAR_0) - 1];

 VAR_5 = VAR_2[0];

 if (VAR_4 == VAR_1 && VAR_5 == VAR_1) {





  VAR_6 = FUNC_0(&VAR_3, "%s%s", VAR_0, VAR_2 + 1);
 } else if (VAR_4 == VAR_1 || VAR_5 == VAR_1 ||
     VAR_0[0] == '\0' || VAR_2[0] == '\0') {
  VAR_6 = FUNC_0(&VAR_3, "%s%s", VAR_0, VAR_2);
 } else {
  VAR_6 = FUNC_0(&VAR_3, "%s%c%s", VAR_0, VAR_1, VAR_2);
 }
 if (VAR_6 < 0)
  FUNC_1(1, "asprintf");



 return (VAR_3);
}
