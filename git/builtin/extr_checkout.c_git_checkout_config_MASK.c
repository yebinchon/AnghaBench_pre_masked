
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_opts {int diff_options; } ;


 int FUNC_0 (char const*,char const*,int *) ;
 int FUNC_1 (char const*,char const*,int *) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 if (!FUNC_4(VAR_0, "diff.ignoresubmodules")) {
  struct checkout_opts *VAR_3 = VAR_2;
  FUNC_2(&VAR_3->diff_options, VAR_1);
  return 0;
 }

 if (FUNC_3(VAR_0, "submodule."))
  return FUNC_0(VAR_0, VAR_1, ((void*)0));

 return FUNC_1(VAR_0, VAR_1, ((void*)0));
}
