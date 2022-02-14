
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{





 const char *VAR_2 = FUNC_1(VAR_0, VAR_1);
 const char *VAR_3;
 int VAR_4;
 if (!VAR_2)
  return 0;
 VAR_3 = VAR_2 + FUNC_2(VAR_1);
 VAR_4 = FUNC_2(VAR_0);
 return (VAR_2 && (





   VAR_2 == VAR_0 || (
    (FUNC_0(VAR_2[-1]) || VAR_2[-1] == ',')
   )
  ) && (





   VAR_3 == VAR_0 + VAR_4 || (
    VAR_3 < VAR_0 + VAR_4 &&
    (FUNC_0(VAR_3[0]) || VAR_3[0] == ',')
   )
  ));
}
