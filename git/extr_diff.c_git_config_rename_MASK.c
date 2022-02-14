
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_2, const char *VAR_3)
{
 if (!VAR_3)
  return VAR_1;
 if (!FUNC_1(VAR_3, "copies") || !FUNC_1(VAR_3, "copy"))
  return VAR_0;
 return FUNC_0(VAR_2,VAR_3) ? VAR_1 : 0;
}
