
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_cb {char const* prefix; int flags; } ;
struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int dummy; } ;


 struct module_list VAR_0 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int *,char const*,int ) ;
 int VAR_1 ;
 struct option FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct option FUNC_3 (int*,char const*) ;
 struct status_cb VAR_4 ;
 int FUNC_4 (struct module_list*,int ,struct status_cb*) ;
 scalar_t__ FUNC_5 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_6 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 struct status_cb VAR_9 = VAR_4;
 struct pathspec VAR_10;
 struct module_list VAR_11 = VAR_0;
 int VAR_12 = 0;

 struct option VAR_13[] = {
  FUNC_3(&VAR_12, FUNC_0("Suppress submodule status output")),
  FUNC_1(0, "cached", &VAR_9.flags, FUNC_0("Use commit stored in the index instead of the one stored in the submodule HEAD"), VAR_1),
  FUNC_1(0, "recursive", &VAR_9.flags, FUNC_0("recurse into nested submodules"), VAR_3),
  FUNC_2()
 };

 const char *const VAR_14[] = {
  FUNC_0("git submodule status [--quiet] [--cached] [--recursive] [<path>...]"),
  ((void*)0)
 };

 VAR_6 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_13,
        VAR_14, 0);

 if (FUNC_5(VAR_6, VAR_7, VAR_8, &VAR_10, &VAR_11) < 0)
  return 1;

 VAR_9.prefix = VAR_8;
 if (VAR_12)
  VAR_9.flags |= VAR_2;

 FUNC_4(&VAR_11, VAR_5, &VAR_9);

 return 0;
}
