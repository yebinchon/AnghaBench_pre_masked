
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 char const* FUNC_1 (char const*,int) ;
 char const* FUNC_2 (char*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0)
{
 const char *VAR_1;
 for (VAR_1 = VAR_0; *VAR_1 && *VAR_1 != '\n'; VAR_1++) {
  if (!FUNC_0(VAR_1, " <", 2))
   return FUNC_1(VAR_0, VAR_1 - VAR_0);
 }
 return FUNC_2("");
}
