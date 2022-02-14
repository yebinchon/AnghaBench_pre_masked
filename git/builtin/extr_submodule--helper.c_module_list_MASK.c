
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct module_list {int nr; struct cache_entry** entries; } ;
struct cache_entry {int ce_mode; char* name; int oid; } ;


 struct module_list VAR_0 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,char const**,char const*,char const*) ;
 int FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (int,char const**,char const*,struct pathspec*,struct module_list*) ;
 int VAR_1 ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int FUNC_8 (char*,int,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6;
 struct pathspec VAR_7;
 struct module_list VAR_8 = VAR_0;

 struct option VAR_9[] = {
  FUNC_2(0, "prefix", &VAR_5,
      FUNC_0("path"),
      FUNC_0("alternative anchor for relative paths")),
  FUNC_1()
 };

 const char *const VAR_10[] = {
  FUNC_0("git submodule--helper list [--prefix=<path>] [<path>...]"),
  ((void*)0)
 };

 VAR_3 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_9,
        VAR_10, 0);

 if (FUNC_5(VAR_3, VAR_4, VAR_5, &VAR_7, &VAR_8) < 0)
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_8.nr; VAR_6++) {
  const struct cache_entry *VAR_11 = VAR_8.entries[VAR_6];

  if (FUNC_3(VAR_11))
   FUNC_8("%06o %s U\t", VAR_11->ce_mode, FUNC_6(&VAR_1));
  else
   FUNC_8("%06o %s %d\t", VAR_11->ce_mode,
          FUNC_6(&VAR_11->oid), FUNC_3(VAR_11));

  FUNC_4(VAR_2, "%s\n", VAR_11->name);
 }
 return 0;
}
