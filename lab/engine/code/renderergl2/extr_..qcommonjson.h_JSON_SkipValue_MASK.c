
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 char* FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_0, const char *VAR_1)
{
 if (VAR_0 >= VAR_1)
  return VAR_1;
 else if (*VAR_0 == '"')
  VAR_0 = FUNC_3(VAR_0, VAR_1);
 else if (FUNC_2(*VAR_0))
  VAR_0 = FUNC_4(VAR_0, VAR_1);
 else
 {
  while (VAR_0 < VAR_1 && !FUNC_0(*VAR_0) && !FUNC_1(*VAR_0))
   VAR_0++;
 }

 return VAR_0;
}
