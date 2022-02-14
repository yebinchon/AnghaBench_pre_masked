
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 char const* FUNC_1 (char const*,int) ;
 char const* FUNC_2 (char*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, '<');
 const char *VAR_2;
 if (!VAR_1)
  return FUNC_2("");
 VAR_2 = FUNC_0(VAR_1, '>');
 if (!VAR_2)
  return FUNC_2("");
 return FUNC_1(VAR_1, VAR_2 + 1 - VAR_1);
}
