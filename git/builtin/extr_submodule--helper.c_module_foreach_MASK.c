
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int dummy; } ;
struct cb_foreach {int argc; char const** argv; char const* prefix; int recursive; int quiet; } ;


 struct cb_foreach VAR_0 ;
 struct module_list VAR_1 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int *,char const*) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct module_list*,int ,struct cb_foreach*) ;
 scalar_t__ FUNC_5 (int ,int *,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_6 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 struct cb_foreach VAR_6 = VAR_0;
 struct pathspec VAR_7;
 struct module_list VAR_8 = VAR_1;

 struct option VAR_9[] = {
  FUNC_3(&VAR_6.quiet, FUNC_0("Suppress output of entering each submodule command")),
  FUNC_1(0, "recursive", &VAR_6.recursive,
    FUNC_0("Recurse into nested submodules")),
  FUNC_2()
 };

 const char *const VAR_10[] = {
  FUNC_0("git submodule--helper foreach [--quiet] [--recursive] [--] <command>"),
  ((void*)0)
 };

 VAR_3 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_9,
        VAR_10, 0);

 if (FUNC_5(0, ((void*)0), VAR_5, &VAR_7, &VAR_8) < 0)
  return 1;

 VAR_6.argc = VAR_3;
 VAR_6.argv = VAR_4;
 VAR_6.prefix = VAR_5;

 FUNC_4(&VAR_8, VAR_2, &VAR_6);

 return 0;
}
