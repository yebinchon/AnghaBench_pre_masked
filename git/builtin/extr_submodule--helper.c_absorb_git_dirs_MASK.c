
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int nr; TYPE_1__** entries; } ;
struct TYPE_2__ {int name; } ;


 unsigned int VAR_0 ;
 struct module_list VAR_1 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,unsigned int*,char const*,unsigned int) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,char const**,char const*,char const*) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int FUNC_6 (int,char const**,char const*,struct option*,char const* const*,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5;
 struct pathspec VAR_6;
 struct module_list VAR_7 = VAR_1;
 unsigned VAR_8 = VAR_0;

 struct option VAR_9[] = {
  FUNC_3(0, "prefix", &VAR_4,
      FUNC_0("path"),
      FUNC_0("path into the working tree")),
  FUNC_1(0, "--recursive", &VAR_8, FUNC_0("recurse into submodules"),
   VAR_0),
  FUNC_2()
 };

 const char *const VAR_10[] = {
  FUNC_0("git submodule--helper absorb-git-dirs [<options>] [<path>...]"),
  ((void*)0)
 };

 VAR_2 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_9,
        VAR_10, 0);

 if (FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7) < 0)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_7.nr; VAR_5++)
  FUNC_4(VAR_7.entries[VAR_5]->name, VAR_8);

 return 0;
}
