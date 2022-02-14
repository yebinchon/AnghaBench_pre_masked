
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_parallel_fetch {int command_line_option; int default_option; int quiet; char const* prefix; int result; int changed_submodule_names; int args; struct repository* r; } ;
struct repository {int worktree; } ;
struct argv_array {int argc; char** argv; } ;


 struct submodule_parallel_fetch VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct repository*,int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct repository*) ;
 int FUNC_6 (int,int ,int ,int ,struct submodule_parallel_fetch*,char*,char*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct repository *VAR_4,
          const struct argv_array *VAR_5,
          const char *VAR_6, int VAR_7,
          int VAR_8,
          int VAR_9, int VAR_10)
{
 int VAR_11;
 struct submodule_parallel_fetch VAR_12 = VAR_0;

 VAR_12.r = VAR_4;
 VAR_12.command_line_option = VAR_7;
 VAR_12.default_option = VAR_8;
 VAR_12.quiet = VAR_9;
 VAR_12.prefix = VAR_6;

 if (!VAR_4->worktree)
  goto out;

 if (FUNC_5(VAR_4) < 0)
  FUNC_3("index file corrupt");

 FUNC_1(&VAR_12.args, "fetch");
 for (VAR_11 = 0; VAR_11 < VAR_5->argc; VAR_11++)
  FUNC_1(&VAR_12.args, VAR_5->argv[VAR_11]);
 FUNC_1(&VAR_12.args, "--recurse-submodules-default");


 FUNC_2(VAR_4, &VAR_12.changed_submodule_names);
 FUNC_7(&VAR_12.changed_submodule_names);
 FUNC_6(VAR_10,
       VAR_3,
       VAR_2,
       VAR_1,
       &VAR_12,
       "submodule", "parallel/fetch");

 FUNC_0(&VAR_12.args);
out:
 FUNC_4(&VAR_12.changed_submodule_names);
 return VAR_12.result;
}
