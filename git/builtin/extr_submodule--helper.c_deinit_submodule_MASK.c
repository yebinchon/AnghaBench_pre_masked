
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char const* name; char* url; } ;
struct strbuf {scalar_t__ len; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char*,char*,char const*,...) ;
 int FUNC_3 (struct child_process*,struct strbuf*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char*,int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,int) ;
 int VAR_4 ;
 int FUNC_10 (char const*,char const*,...) ;
 int FUNC_11 (struct strbuf*,int ) ;
 scalar_t__ FUNC_12 (struct child_process*) ;
 int FUNC_13 (struct strbuf*,char const*) ;
 int FUNC_14 (struct strbuf*) ;
 struct submodule* FUNC_15 (int ,int *,char const*) ;
 int FUNC_16 (struct submodule const*) ;
 int VAR_5 ;
 char* FUNC_17 (char*,char const*) ;

__attribute__((used)) static void FUNC_18(const char *VAR_6, const char *VAR_7,
        unsigned int VAR_8)
{
 const struct submodule *VAR_9;
 char *VAR_10 = ((void*)0);
 struct child_process VAR_11 = VAR_0;
 struct strbuf VAR_12 = VAR_3;
 char *VAR_13 = FUNC_17("%s/.git", VAR_6);

 VAR_9 = FUNC_15(VAR_5, &VAR_4, VAR_6);

 if (!VAR_9 || !VAR_9->name)
  goto cleanup;

 VAR_10 = FUNC_6(VAR_6, VAR_7);


 if (FUNC_8(VAR_6)) {
  struct strbuf VAR_14 = VAR_3;
  const char *VAR_15;






  if (FUNC_8(VAR_13))
   FUNC_4(FUNC_0("Submodule work tree '%s' contains a .git "
         "directory (use 'rm -rf' if you really want "
         "to remove it including all of its history)"),
       VAR_10);

  if (!(VAR_8 & VAR_1)) {
   struct child_process VAR_16 = VAR_0;
   VAR_16.git_cmd = 1;
   FUNC_2(&VAR_16.args, "rm", "-qn",
      VAR_6, ((void*)0));

   if (FUNC_12(&VAR_16))
    FUNC_4(FUNC_0("Submodule work tree '%s' contains local "
          "modifications; use '-f' to discard them"),
          VAR_10);
  }

  FUNC_13(&VAR_14, VAR_6);

  if (!FUNC_11(&VAR_14, 0))
   VAR_15 = FUNC_0("Cleared directory '%s'\n");
  else
   VAR_15 = FUNC_0("Could not remove submodule work tree '%s'\n");

  if (!(VAR_8 & VAR_2))
   FUNC_10(VAR_15, VAR_10);

  FUNC_16(VAR_9);

  FUNC_14(&VAR_14);
 }

 if (FUNC_9(VAR_6, 0777))
  FUNC_10(FUNC_0("could not create empty submodule directory %s"),
        VAR_10);

 VAR_11.git_cmd = 1;
 FUNC_2(&VAR_11.args, "config", "--get-regexp", ((void*)0));
 FUNC_1(&VAR_11.args, "submodule.%s\\.", VAR_9->name);


 if (!FUNC_3(&VAR_11, &VAR_12, 0) && VAR_12.len) {
  char *VAR_17 = FUNC_17("submodule.%s", VAR_9->name);




  FUNC_7(((void*)0), VAR_17, ((void*)0));
  if (!(VAR_8 & VAR_2))
   FUNC_10(FUNC_0("Submodule '%s' (%s) unregistered for path '%s'\n"),
     VAR_9->name, VAR_9->url, VAR_10);
  FUNC_5(VAR_17);
 }

cleanup:
 FUNC_5(VAR_10);
 FUNC_5(VAR_13);
 FUNC_14(&VAR_12);
}
