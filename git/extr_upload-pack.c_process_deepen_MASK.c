
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int *VAR_1)
{
 const char *VAR_2;
 if (FUNC_1(VAR_0, "deepen ", &VAR_2)) {
  char *VAR_3 = ((void*)0);
  *VAR_1 = (int)FUNC_2(VAR_2, &VAR_3, 0);
  if (!VAR_3 || *VAR_3 || *VAR_1 <= 0)
   FUNC_0("Invalid deepen: %s", VAR_0);
  return 1;
 }

 return 0;
}
