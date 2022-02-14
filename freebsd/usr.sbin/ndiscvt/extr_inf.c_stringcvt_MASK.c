
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assign {char const** vals; } ;


 struct assign* FUNC_0 (char*,char const*) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0)
{
 struct assign *VAR_1;

 VAR_1 = FUNC_0("strings", VAR_0);
 if (VAR_1 == ((void*)0))
  return(VAR_0);
 return(VAR_1->vals[0]);
}
