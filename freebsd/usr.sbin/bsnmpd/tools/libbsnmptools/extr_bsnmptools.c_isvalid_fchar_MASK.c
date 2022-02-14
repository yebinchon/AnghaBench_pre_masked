
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char) ;

__attribute__((used)) static char
FUNC_5(char VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0)|| VAR_0 == '/'|| VAR_0 == '_' || VAR_0 == '.' || VAR_0 == '~' ||
     (VAR_1 != 0 && FUNC_2(VAR_0))){
  return (VAR_0);
 }

 if (VAR_0 == '\0')
  return (0);

 if (!FUNC_1(VAR_0) || !FUNC_3(VAR_0))
  FUNC_4("Unexpected character %#2x", (u_int) VAR_0);
 else
  FUNC_4("Illegal character '%c'", VAR_0);

 return (-1);
}
