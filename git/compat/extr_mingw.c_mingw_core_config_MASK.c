
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 if (!FUNC_3(VAR_3, "core.hidedotfiles")) {
  if (VAR_4 && !FUNC_2(VAR_4, "dotgitonly"))
   VAR_1 = VAR_0;
  else
   VAR_1 = FUNC_1(VAR_3, VAR_4);
  return 0;
 }

 if (!FUNC_3(VAR_3, "core.unsetenvvars")) {
  FUNC_0(VAR_2);
  VAR_2 = FUNC_4(VAR_4);
  return 0;
 }

 return 0;
}
