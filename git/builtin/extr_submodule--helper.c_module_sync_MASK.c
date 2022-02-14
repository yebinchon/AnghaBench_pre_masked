
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_cb {char const* prefix; int flags; } ;
struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int dummy; } ;


 struct module_list VAR_0 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,char const*) ;
 struct option FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct option FUNC_3 (int*,char const*) ;
 struct sync_cb VAR_3 ;
 int FUNC_4 (struct module_list*,int ,struct sync_cb*) ;
 scalar_t__ FUNC_5 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_6 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 struct sync_cb VAR_8 = VAR_3;
 struct pathspec VAR_9;
 struct module_list VAR_10 = VAR_0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 struct option VAR_13[] = {
  FUNC_3(&VAR_11, FUNC_0("Suppress output of synchronizing submodule url")),
  FUNC_1(0, "recursive", &VAR_12,
   FUNC_0("Recurse into nested submodules")),
  FUNC_2()
 };

 const char *const VAR_14[] = {
  FUNC_0("git submodule--helper sync [--quiet] [--recursive] [<path>]"),
  ((void*)0)
 };

 VAR_5 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_13,
        VAR_14, 0);

 if (FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_9, &VAR_10) < 0)
  return 1;

 VAR_8.prefix = VAR_7;
 if (VAR_11)
  VAR_8.flags |= VAR_1;
 if (VAR_12)
  VAR_8.flags |= VAR_2;

 FUNC_4(&VAR_10, VAR_4, &VAR_8);

 return 0;
}
