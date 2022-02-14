
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum submodule_update_type { ____Placeholder_submodule_update_type } submodule_update_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char*) ;

enum submodule_update_type FUNC_1(const char *VAR_6)
{
 if (!FUNC_0(VAR_6, "none"))
  return VAR_3;
 else if (!FUNC_0(VAR_6, "checkout"))
  return VAR_0;
 else if (!FUNC_0(VAR_6, "rebase"))
  return VAR_4;
 else if (!FUNC_0(VAR_6, "merge"))
  return VAR_2;
 else if (*VAR_6 == '!')
  return VAR_1;
 else
  return VAR_5;
}
