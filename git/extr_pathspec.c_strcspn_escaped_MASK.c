
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++) {

  if (VAR_2[0] == '\\' && VAR_2[1]) {
   VAR_2++;
   continue;
  }

  if (FUNC_0(VAR_1, *VAR_2))
   break;
 }
 return VAR_2 - VAR_0;
}
