
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 static const char VAR_2[] = "UTF-8";

 if (!VAR_0)
  VAR_0 = VAR_2;
 if (!VAR_1)
  VAR_1 = VAR_2;
 if (FUNC_0(VAR_0, VAR_1))
  return 1;
 return !FUNC_1(VAR_0, VAR_1);
}
