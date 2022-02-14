
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 if (!FUNC_1(VAR_0, "pack"))
  return 0;
 if (FUNC_0(VAR_0, ".keep"))
  return 1;
 if (FUNC_0(VAR_0, ".pack"))
  return 2;
 if (FUNC_0(VAR_0, ".idx"))
  return 3;
 return 4;
}
