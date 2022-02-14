
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,size_t,int) ;
 int FUNC_2 (char const*,char*,int) ;

int FUNC_3(const char *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; ; VAR_1++)
  if (!VAR_0[VAR_1] || VAR_0[VAR_1] == '\\' || FUNC_0(VAR_0[VAR_1])) {
   if (FUNC_1(VAR_0, VAR_1, 4) &&
     !FUNC_2(VAR_0, ".git", 4))
    return 1;
   if (FUNC_1(VAR_0, VAR_1, 5) &&
     !FUNC_2(VAR_0, "git~1", 5))
    return 1;
   if (VAR_0[VAR_1] != '\\')
    return 0;
   VAR_0 += VAR_1 + 1;
   VAR_1 = -1;
  }
}
