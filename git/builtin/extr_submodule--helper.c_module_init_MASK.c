
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int dummy; } ;
struct init_cb {char const* prefix; int flags; } ;


 struct init_cb VAR_0 ;
 struct module_list VAR_1 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 int VAR_2 ;
 struct option FUNC_2 (int*,char const*) ;
 int FUNC_3 (struct module_list*,int ,struct init_cb*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (struct module_list*) ;
 scalar_t__ FUNC_6 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_7 (int,char const**,char const*,struct option*,char const* const*,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct init_cb VAR_7 = VAR_0;
 struct pathspec VAR_8;
 struct module_list VAR_9 = VAR_1;
 int VAR_10 = 0;

 struct option VAR_11[] = {
  FUNC_2(&VAR_10, FUNC_0("Suppress output for initializing a submodule")),
  FUNC_1()
 };

 const char *const VAR_12[] = {
  FUNC_0("git submodule--helper init [<options>] [<path>]"),
  ((void*)0)
 };

 VAR_4 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_11,
        VAR_12, 0);

 if (FUNC_6(VAR_4, VAR_5, VAR_6, &VAR_8, &VAR_9) < 0)
  return 1;





 if (!VAR_4 && FUNC_4("submodule.active"))
  FUNC_5(&VAR_9);

 VAR_7.prefix = VAR_6;
 if (VAR_10)
  VAR_7.flags |= VAR_2;

 FUNC_3(&VAR_9, VAR_3, &VAR_7);

 return 0;
}
