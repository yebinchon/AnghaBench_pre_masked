
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_config {int * recurse_submodules; int * max_children; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct fetch_config *VAR_3 = VAR_2;
 if (!FUNC_2(VAR_0, "submodule.fetchjobs")) {
  *(VAR_3->max_children) = FUNC_1(VAR_0, VAR_1);
  return 0;
 } else if (!FUNC_2(VAR_0, "fetch.recursesubmodules")) {
  *(VAR_3->recurse_submodules) = FUNC_0(VAR_0, VAR_1);
  return 0;
 }

 return 0;
}
