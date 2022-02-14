
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (unsigned int*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1,
    const char *VAR_2, unsigned int *VAR_3)
{
 if (!VAR_1)
  return FUNC_0(VAR_0);
 if (FUNC_2(VAR_3, VAR_1))
  return FUNC_1("invalid column.%s mode %s", VAR_2, VAR_1);
 return 0;
}
