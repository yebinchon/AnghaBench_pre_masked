
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char const*,char const*,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*,char*) ;

int FUNC_3(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 if (!FUNC_2(VAR_2, "merge.conflictstyle")) {
  if (!VAR_3)
   FUNC_0("'%s' is not a boolean", VAR_2);
  if (!FUNC_2(VAR_3, "diff3"))
   VAR_1 = VAR_0;
  else if (!FUNC_2(VAR_3, "merge"))
   VAR_1 = 0;




  else
   FUNC_0("unknown style '%s' given for '%s'",
       VAR_3, VAR_2);
  return 0;
 }
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
