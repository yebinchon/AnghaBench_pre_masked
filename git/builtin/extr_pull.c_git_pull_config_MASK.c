
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,void*) ;
 int VAR_3 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 if (!FUNC_2(VAR_4, "rebase.autostash")) {
  VAR_2 = FUNC_0(VAR_4, VAR_5);
  return 0;
 } else if (!FUNC_2(VAR_4, "submodule.recurse")) {
  VAR_3 = FUNC_0(VAR_4, VAR_5) ?
   VAR_1 : VAR_0;
  return 0;
 }
 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
