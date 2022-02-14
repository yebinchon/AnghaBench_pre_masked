
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rfc2047_type { ____Placeholder_rfc2047_type } rfc2047_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int FUNC_4(char VAR_1, enum rfc2047_type VAR_2)
{
 if (FUNC_3(VAR_1) || !FUNC_1(VAR_1))
  return 1;






 if (FUNC_2(VAR_1) || VAR_1 == '=' || VAR_1 == '?' || VAR_1 == '_')
  return 1;
 if (VAR_2 != VAR_0)
  return 0;


 return !(FUNC_0(VAR_1) || VAR_1 == '!' || VAR_1 == '*' || VAR_1 == '+' || VAR_1 == '-' || VAR_1 == '/');
}
