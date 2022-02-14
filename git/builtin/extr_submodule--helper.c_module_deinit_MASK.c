
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int dummy; } ;
struct deinit_cb {char const* prefix; int flags; } ;


 struct deinit_cb VAR_0 ;
 struct module_list VAR_1 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,char const*) ;
 struct option FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct option FUNC_3 (int*,char const*,int ) ;
 struct option FUNC_4 (int*,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct module_list*,int ,struct deinit_cb*) ;
 scalar_t__ FUNC_9 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_10 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int FUNC_11 (char const* const*,struct option*) ;

__attribute__((used)) static int FUNC_12(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 struct deinit_cb VAR_8 = VAR_0;
 struct pathspec VAR_9;
 struct module_list VAR_10 = VAR_1;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;

 struct option VAR_14[] = {
  FUNC_4(&VAR_11, FUNC_0("Suppress submodule status output")),
  FUNC_3(&VAR_12, FUNC_0("Remove submodule working trees even if they contain local changes"), 0),
  FUNC_1(0, "all", &VAR_13, FUNC_0("Unregister all submodules")),
  FUNC_2()
 };

 const char *const VAR_15[] = {
  FUNC_0("git submodule deinit [--quiet] [-f | --force] [--all | [--] [<path>...]]"),
  ((void*)0)
 };

 VAR_5 = FUNC_10(VAR_5, VAR_6, VAR_7, VAR_14,
        VAR_15, 0);

 if (VAR_13 && VAR_5) {
  FUNC_7("pathspec and --all are incompatible");
  FUNC_11(VAR_15,
       VAR_14);
 }

 if (!VAR_5 && !VAR_13)
  FUNC_6(FUNC_5("Use '--all' if you really want to deinitialize all submodules"));

 if (FUNC_9(VAR_5, VAR_6, VAR_7, &VAR_9, &VAR_10) < 0)
  return 1;

 VAR_8.prefix = VAR_7;
 if (VAR_11)
  VAR_8.flags |= VAR_3;
 if (VAR_12)
  VAR_8.flags |= VAR_2;

 FUNC_8(&VAR_10, VAR_4, &VAR_8);

 return 0;
}
