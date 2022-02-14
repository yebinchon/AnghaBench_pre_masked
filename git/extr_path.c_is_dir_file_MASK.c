
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_0, VAR_1, VAR_3) || !FUNC_0(VAR_0[VAR_3]))
  return 0;
 while (FUNC_0(VAR_0[VAR_3]))
  VAR_3++;
 return !FUNC_1(VAR_0 + VAR_3, VAR_2);
}
