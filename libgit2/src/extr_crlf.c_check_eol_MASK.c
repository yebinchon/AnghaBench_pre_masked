
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_configmap_value ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static git_configmap_value FUNC_2(const char *VAR_3)
{
 if (FUNC_0(VAR_3))
  ;
 else if (FUNC_1(VAR_3, "lf") == 0)
  return VAR_1;
 else if (FUNC_1(VAR_3, "crlf") == 0)
  return VAR_0;

 return VAR_2;
}
