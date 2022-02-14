
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char* name; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct child_process {int use_shell; char const* dir; int git_cmd; int args; int env_array; } ;
struct cb_foreach {int argc; scalar_t__* argv; scalar_t__ quiet; scalar_t__ recursive; int prefix; } ;
struct cache_entry {char* name; struct object_id oid; } ;


 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 int FUNC_3 (int *,char*,char*,...) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (char const*,int *) ;
 int VAR_2 ;
 char* FUNC_9 (struct object_id const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (struct child_process*) ;
 int FUNC_13 (struct strbuf*,char const*) ;
 int FUNC_14 (struct strbuf*) ;
 struct submodule* FUNC_15 (int ,int *,char const*) ;
 int VAR_3 ;
 char* FUNC_16 () ;

__attribute__((used)) static void FUNC_17(const struct cache_entry *VAR_4,
           void *VAR_5)
{
 struct cb_foreach *VAR_6 = VAR_5;
 const char *VAR_7 = VAR_4->name;
 const struct object_id *VAR_8 = &VAR_4->oid;

 const struct submodule *VAR_9;
 struct child_process VAR_10 = VAR_0;
 char *VAR_11;

 VAR_11 = FUNC_7(VAR_7, VAR_6->prefix);

 VAR_9 = FUNC_15(VAR_3, &VAR_2, VAR_7);

 if (!VAR_9)
  FUNC_5(FUNC_0("No url found for submodule path '%s' in .gitmodules"),
   VAR_11);

 if (!FUNC_8(VAR_7, ((void*)0)))
  goto cleanup;

 FUNC_10(&VAR_10.env_array);






 VAR_10.use_shell = 1;
 VAR_10.dir = VAR_7;







 if (VAR_6->argc == 1) {
  char *VAR_12 = FUNC_16();
  struct strbuf VAR_13 = VAR_1;

  FUNC_2(&VAR_10.env_array, "name=%s", VAR_9->name);
  FUNC_2(&VAR_10.env_array, "sm_path=%s", VAR_7);
  FUNC_2(&VAR_10.env_array, "displaypath=%s", VAR_11);
  FUNC_2(&VAR_10.env_array, "sha1=%s",
    FUNC_9(VAR_8));
  FUNC_2(&VAR_10.env_array, "toplevel=%s", VAR_12);
  FUNC_13(&VAR_13, VAR_7);
  FUNC_2(&VAR_10.args, "path=%s; %s",
     VAR_13.buf, VAR_6->argv[0]);
  FUNC_14(&VAR_13);
  FUNC_6(VAR_12);
 } else {
  FUNC_4(&VAR_10.args, VAR_6->argv);
 }

 if (!VAR_6->quiet)
  FUNC_11(FUNC_0("Entering '%s'\n"), VAR_11);

 if (VAR_6->argv[0] && FUNC_12(&VAR_10))
  FUNC_5(FUNC_0("run_command returned non-zero status for %s\n."),
   VAR_11);

 if (VAR_6->recursive) {
  struct child_process VAR_14 = VAR_0;

  VAR_14.git_cmd = 1;
  VAR_14.dir = VAR_7;
  FUNC_10(&VAR_14.env_array);

  FUNC_3(&VAR_14.args, "--super-prefix", ((void*)0));
  FUNC_2(&VAR_14.args, "%s/", VAR_11);
  FUNC_3(&VAR_14.args, "submodule--helper", "foreach", "--recursive",
    ((void*)0));

  if (VAR_6->quiet)
   FUNC_1(&VAR_14.args, "--quiet");

  FUNC_1(&VAR_14.args, "--");
  FUNC_4(&VAR_14.args, VAR_6->argv);

  if (FUNC_12(&VAR_14))
   FUNC_5(FUNC_0("run_command returned non-zero status while "
    "recursing in the nested submodules of %s\n."),
    VAR_11);
 }

cleanup:
 FUNC_6(VAR_11);
}
