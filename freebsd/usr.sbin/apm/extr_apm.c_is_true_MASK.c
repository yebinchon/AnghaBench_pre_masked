
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 char *VAR_1;
 long VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1, 0);
 if (*VAR_1 == '\0')
  return (VAR_2 != 0 ? 1 : 0);
 if (FUNC_0(VAR_0, "true") == 0 ||
     FUNC_0(VAR_0, "yes") == 0 ||
     FUNC_0(VAR_0, "enable") == 0)
  return (1);
 if (FUNC_0(VAR_0, "false") == 0 ||
     FUNC_0(VAR_0, "no") == 0 ||
     FUNC_0(VAR_0, "disable") == 0)
  return (0);

 FUNC_3("invalid boolean argument \"%s\"", VAR_0);
 FUNC_2();


 return (0);
}
