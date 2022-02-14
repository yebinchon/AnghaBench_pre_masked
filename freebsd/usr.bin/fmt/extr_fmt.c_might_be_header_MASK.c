
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const wchar_t *VAR_0)
{
 if (!FUNC_2(*VAR_0++))
  return 0;
 while (*VAR_0 && (FUNC_0(*VAR_0) || *VAR_0 == '-'))
  ++VAR_0;
 return (*VAR_0 == ':' && FUNC_1(VAR_0[1]));
}
