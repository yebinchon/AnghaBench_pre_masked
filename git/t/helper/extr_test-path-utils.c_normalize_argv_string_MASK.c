
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void FUNC_2(const char **VAR_0, const char *VAR_1)
{
 if (!FUNC_1(VAR_1, "<null>"))
  *VAR_0 = ((void*)0);
 else if (!FUNC_1(VAR_1, "<empty>"))
  *VAR_0 = "";
 else
  *VAR_0 = VAR_1;

 if (*VAR_0 && (**VAR_0 == '<' || **VAR_0 == '('))
  FUNC_0("Bad value: %s\n", VAR_1);
}
