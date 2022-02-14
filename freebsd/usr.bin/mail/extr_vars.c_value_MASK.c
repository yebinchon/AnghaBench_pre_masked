
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {char* v_value; } ;


 char* FUNC_0 (char const*) ;
 struct var* FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_0)
{
 struct var *VAR_1;

 if ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0))
  return (FUNC_0(VAR_0));
 return (VAR_1->v_value);
}
