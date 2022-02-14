
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const char **VAR_1)
{
 if (!VAR_1 || !*VAR_1 || !VAR_0 || FUNC_0(*VAR_1)
     || !FUNC_2("-", *VAR_1))
  return;
 *VAR_1 = FUNC_1(VAR_0, *VAR_1);
}
