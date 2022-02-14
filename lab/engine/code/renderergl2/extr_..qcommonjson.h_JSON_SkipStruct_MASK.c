
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
 VAR_0 = FUNC_1(VAR_0 + 1, VAR_1);
 while (VAR_0 < VAR_1 && !FUNC_0(*VAR_0))
  VAR_0 = FUNC_2(VAR_0, VAR_1);

 return (VAR_0 + 1 > VAR_1) ? VAR_1 : VAR_0 + 1;
}
