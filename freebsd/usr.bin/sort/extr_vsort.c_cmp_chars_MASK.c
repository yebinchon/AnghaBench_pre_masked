
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(wchar_t VAR_0, wchar_t VAR_1)
{

 if (VAR_0 == VAR_1)
  return (0);

 if (VAR_0 == L'~')
  return (-1);
 if (VAR_1 == L'~')
  return (+1);

 if (FUNC_1(VAR_0) || !VAR_0)
  return ((FUNC_1(VAR_1) || !VAR_1) ? 0 : -1);

 if (FUNC_1(VAR_1) || !VAR_1)
  return (+1);

 if (FUNC_0(VAR_0))
  return ((FUNC_0(VAR_1)) ? ((int) VAR_0 - (int) VAR_1) : -1);

 if (FUNC_0(VAR_1))
  return (+1);

 return ((int) VAR_0 - (int) VAR_1);
}
